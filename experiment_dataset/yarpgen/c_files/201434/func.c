/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201434
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(signed char)16] [i_1] [i_1 - 1] = min((arr_4 [i_0] [11]), (((/* implicit */long long int) var_10)));
                var_19 = (unsigned short)43518;
                var_20 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) 1957407164U)) ? ((~(var_14))) : (var_4))) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                arr_6 [i_1] = ((/* implicit */unsigned short) var_17);
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_21 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */int) (unsigned short)6)) % (((/* implicit */int) var_3)))) : (((/* implicit */int) var_7))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max((((((/* implicit */_Bool) min(((signed char)-80), (((/* implicit */signed char) arr_8 [i_0]))))) ? (((-8306087291030574241LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40368))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)115))))), (((/* implicit */long long int) arr_3 [i_2] [i_2] [i_3])))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) (signed char)93))), (18446744073709551604ULL)))) ? (((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) % (((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */int) (unsigned char)77)), ((+(((/* implicit */int) var_9))))))));
                            var_24 *= ((/* implicit */signed char) var_16);
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_4);
}
