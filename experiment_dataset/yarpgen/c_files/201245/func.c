/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201245
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
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22037)) ? (((/* implicit */int) max(((short)-22043), (((/* implicit */short) (signed char)-123))))) : (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (unsigned short)19759))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 4; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) (unsigned short)19784);
                            arr_13 [i_2] [i_1] [i_2] [i_3 + 1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38498)) ? (((((/* implicit */_Bool) (unsigned short)16726)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) : (2938122274U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38)))))) ? (((/* implicit */int) (short)8344)) : (((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (unsigned short)20575)))) ? (min((arr_6 [i_3] [i_1]), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)62181))))));
                            arr_14 [i_0] [i_1] [i_3 - 2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-24)) < (((/* implicit */int) (signed char)-4)))) ? (var_0) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (1364252338U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_7 [i_1] [i_1]), (((/* implicit */unsigned int) var_8)))))))) : (arr_6 [i_0 + 1] [i_0 - 1])));
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (-(var_0))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) var_9))));
    var_14 = ((/* implicit */short) (unsigned short)65535);
}
