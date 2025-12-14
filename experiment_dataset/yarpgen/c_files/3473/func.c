/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3473
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
    var_16 = ((/* implicit */unsigned short) max(((unsigned char)8), ((unsigned char)245)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) /* same iter space */
                {
                    var_17 ^= ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) max(((unsigned char)2), (((/* implicit */unsigned char) (signed char)-74))));
                                var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2 - 3] [i_2 - 3] [i_2] [i_2] [i_4] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 - 2] [i_1] [i_2] [i_3] [i_2 - 2] [i_2]))) : (var_10)))) ? (((/* implicit */int) (unsigned char)244)) : (((((/* implicit */int) (signed char)-1)) * ((-(((/* implicit */int) arr_2 [i_1]))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_5 = 3; i_5 < 19; i_5 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) var_0)) << (((((/* implicit */int) (signed char)-119)) + (131))))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_5 - 1])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_2 [i_5 - 3]))));
                }
                arr_19 [i_1] [i_1] &= ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]);
                arr_20 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 3107020938U)))) ? ((~(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) (unsigned char)1))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) max((((((((/* implicit */_Bool) (unsigned char)249)) || (((/* implicit */_Bool) var_14)))) ? ((~(var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) : (var_2)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) >> (((var_2) - (4329248489153928433LL)))))) / (((((/* implicit */_Bool) (short)5843)) ? (((/* implicit */long long int) var_6)) : (16777215LL))))))));
}
