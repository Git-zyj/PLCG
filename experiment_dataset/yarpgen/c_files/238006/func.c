/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238006
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_10 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (signed char)-34))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((signed char) (unsigned short)59497)))));
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_1] [i_1] [i_1]))) ? ((+(((/* implicit */int) (unsigned short)59497)))) : ((-(((/* implicit */int) var_8))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (!(((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_8)))) > (((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])) + (((/* implicit */int) var_8)))))))))));
                                var_12 += ((/* implicit */signed char) (!(((/* implicit */_Bool) 13220531793538147436ULL))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_4]))));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_6 [(short)18] [i_3] [i_2] [(short)18]))));
                                arr_15 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            }
                        } 
                    } 
                    var_15 |= ((/* implicit */short) min(((~(-4341399482341736680LL))), (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (min((var_7), (((/* implicit */int) var_6)))))))));
                    var_16 += ((/* implicit */short) (~(((/* implicit */int) (unsigned short)59497))));
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))))), (var_0)));
}
