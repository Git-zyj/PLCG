/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236535
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(unsigned char)0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) var_15)), (var_5)))) % (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((unsigned int) arr_1 [i_0]))));
                var_16 = ((_Bool) arr_2 [5] [i_0]);
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [13LL] [i_0] [i_3] [i_4] = ((/* implicit */int) ((min(((~(arr_9 [i_3]))), (arr_6 [i_0] [i_1] [i_0] [(unsigned short)7]))) != (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)-32761)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_14)))))))));
                                arr_14 [i_0] [i_3] [i_2] [i_3] [(unsigned char)10] [i_3] = ((/* implicit */_Bool) ((unsigned int) min((arr_7 [(unsigned char)18] [i_2 + 1] [4U] [i_1]), (((/* implicit */unsigned short) arr_4 [i_2 + 1])))));
                                var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [i_3]))) ? (arr_2 [i_0] [i_1]) : ((~(arr_2 [i_0] [i_3])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned int) min((((long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_13))))), (((/* implicit */long long int) var_13))));
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-108))));
    var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_11)))))) : ((+(((/* implicit */int) var_4))))));
}
