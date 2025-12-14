/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30752
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_3] [10ULL] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2])) * (((/* implicit */int) arr_11 [i_0] [i_3] [i_4]))));
                                arr_14 [i_0] [i_1] [i_4] [i_0] [i_4] = ((/* implicit */unsigned int) arr_3 [(unsigned short)0] [i_1 - 4]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_19 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_5]))));
            arr_20 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) ((arr_8 [i_0] [i_5] [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))))))));
            arr_21 [i_0] [i_5] = (~(arr_0 [i_5]));
        }
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            arr_24 [i_0] [6U] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 3LL)) / (8084485713573645760ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0])))));
            var_20 += ((/* implicit */signed char) ((((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) arr_5 [i_0] [i_6])))) ? (arr_6 [i_6] [i_6] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_6]))));
        }
        var_21 += ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0]);
        arr_25 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0] [6U] [i_0])) || (arr_22 [i_0] [i_0])));
    }
    for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 2) 
    {
        arr_28 [i_7] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_7 - 2])) ? (((((/* implicit */_Bool) max((2825399441U), (((/* implicit */unsigned int) arr_26 [i_7]))))) ? (max((4294967295U), (((/* implicit */unsigned int) arr_27 [i_7])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7 - 1]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_26 [(unsigned char)1]), (((/* implicit */unsigned char) var_16))))))))));
        arr_29 [i_7] [i_7] &= max((((((/* implicit */_Bool) arr_26 [i_7 + 2])) ? (15987828200909568661ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7 + 2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_7 - 2])) ? (((/* implicit */int) arr_27 [i_7 - 1])) : (((/* implicit */int) arr_26 [i_7 + 2]))))));
        var_22 -= ((/* implicit */unsigned long long int) arr_26 [i_7 + 2]);
    }
    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        var_23 += ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) arr_26 [i_8])), (min((((/* implicit */unsigned long long int) arr_31 [i_8])), (var_18)))))));
        var_24 += ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) arr_31 [i_8])), (min((var_14), (((/* implicit */unsigned long long int) (unsigned short)38596)))))), (((/* implicit */unsigned long long int) arr_31 [i_8]))));
    }
    var_25 = ((/* implicit */unsigned long long int) (~((-(((((/* implicit */int) (unsigned short)26039)) - (((/* implicit */int) (unsigned char)255))))))));
}
