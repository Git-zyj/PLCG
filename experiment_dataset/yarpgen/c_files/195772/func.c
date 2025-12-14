/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195772
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0])))) ? ((-(((int) arr_0 [i_1])))) : (((/* implicit */int) ((_Bool) var_9))))))));
                arr_5 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((arr_3 [i_1]) - (2389710821520909219ULL)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((arr_3 [i_1]) - (2389710821520909219ULL))) - (2824307109839607580ULL))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_12 *= ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (arr_3 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_9 [i_0] [i_2]))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) != (var_7))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_13 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (((+(((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_3])))) >= (((/* implicit */int) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_4])) : (var_10))) != (((/* implicit */int) ((arr_3 [i_0]) != (0ULL))))))))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_4 - 2] [i_1] [i_2] [i_3] [i_1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_8 [i_1]) + (-134217728)))) >= (arr_13 [11] [i_4] [i_4] [i_4] [i_4 - 1] [i_4 - 2])))) : (((/* implicit */int) ((arr_4 [i_0] [i_1] [6ULL]) >= (((/* implicit */int) ((signed char) arr_1 [i_0] [i_2]))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] |= ((unsigned long long int) ((((/* implicit */int) max((var_0), (var_8)))) < (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_2)) < (((((/* implicit */_Bool) 583737310)) ? (((((/* implicit */_Bool) 1188347007)) ? (0ULL) : (arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))));
                    arr_16 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((arr_7 [i_2] [i_1]) << (((18446744073709551615ULL) - (18446744073709551614ULL))))) >> (12ULL)));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-((+(((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_1] [i_2])) ? (((/* implicit */int) var_5)) : (var_10))))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    var_18 -= ((arr_7 [i_0] [i_0]) >= (((/* implicit */int) arr_0 [i_0])));
                    arr_19 [i_1] [i_5] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) & (((/* implicit */int) arr_0 [i_0]))));
                    arr_20 [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_0] [i_0] [14] [i_1] [i_5] [i_5]))) ? (((int) arr_3 [i_1])) : (((int) (signed char)-120)));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (int i_7 = 2; i_7 < 16; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_6] [i_7] [i_7 + 1] [i_8] [i_8])) + (2147483647))) << (((((((/* implicit */int) arr_9 [i_6 - 1] [i_7])) + (44))) - (17)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_8] [i_7 + 1])) >= (((/* implicit */int) arr_9 [i_6 - 1] [i_7 - 2])))))) : ((~(arr_13 [14ULL] [i_6] [i_6 - 1] [i_7 - 2] [i_7 - 2] [(signed char)12])))));
                    arr_29 [i_6] [8] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_0 [i_7 - 1]))) << (((((/* implicit */int) ((signed char) arr_28 [i_7 + 1] [i_6 - 1]))) - (48)))));
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */_Bool) max((((13ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-72))))), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((((+(16424969592220528601ULL))) << (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (signed char)127))))))));
}
