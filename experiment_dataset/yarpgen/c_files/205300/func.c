/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205300
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) ((((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_1 [i_0])) : (5127127610510584816LL))) + (min((((/* implicit */long long int) arr_1 [i_0])), (arr_3 [i_0]))))) + (9223372036854775807LL))) >> ((((+(var_4))) - (9156431681499355777ULL)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    var_13 = ((/* implicit */signed char) ((unsigned int) var_6));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) % (var_4)))));
                    var_15 = ((/* implicit */int) (unsigned short)53497);
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767))))) ? (var_4) : (8818531609133913195ULL)));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) (short)32767);
                    var_17 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_7 [i_1] [i_0])) ? (var_4) : (7ULL))) >> (((((((/* implicit */_Bool) (short)31433)) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (var_5))) - (2591830919LL))))) >> (((((/* implicit */int) (short)32763)) - (32737)))));
                    arr_14 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */signed char) var_1);
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)64915)) >= (((/* implicit */int) (unsigned short)44271)))))))) ? (var_5) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)65))))), (min((0U), (((/* implicit */unsigned int) (signed char)127)))))))));
                }
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((((/* implicit */int) (short)-719)) + (2147483647))) >> (((((/* implicit */int) var_2)) - (190))))))) ? ((+(1394180102))) : (((/* implicit */int) ((unsigned short) 1254514733))))))));
                var_20 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)718))));
            }
        } 
    } 
    var_21 *= ((/* implicit */short) (unsigned char)254);
}
