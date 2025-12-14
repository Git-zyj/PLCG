/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225506
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_13 = ((/* implicit */long long int) min((max((arr_1 [(unsigned char)13]), (arr_1 [i_2]))), (max((arr_1 [i_0]), (arr_1 [i_1])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)6280)))))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [0ULL] = ((/* implicit */int) ((unsigned int) ((((((/* implicit */_Bool) -14LL)) ? (((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])) : (104795018))) > (((/* implicit */int) max((arr_6 [i_1] [i_1]), (arr_6 [19LL] [12LL])))))));
                                arr_12 [i_0] [(short)13] [(short)24] |= arr_0 [i_0] [i_1];
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (0))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) (_Bool)1))))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    var_16 *= ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 1; i_6 < 24; i_6 += 2) 
                    {
                        arr_18 [i_0] [i_1] [i_1] [(signed char)1] [(signed char)1] &= ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) var_3)))), ((!(((/* implicit */_Bool) arr_17 [i_6 + 1] [i_6] [i_6 + 1] [15ULL]))))));
                        var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) var_7))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) -1))))), ((-(9223372036854775807LL)))))));
                        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_17 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1]), (((/* implicit */unsigned short) ((arr_15 [i_6] [i_1] [i_0]) == (((/* implicit */int) (unsigned char)242))))))))));
                        arr_19 [i_6] [i_1] = ((/* implicit */unsigned short) arr_15 [i_0] [(short)10] [19LL]);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_6 - 1] [i_6] [i_6 + 1] [i_6] [i_6 + 1]))) ? ((~(arr_2 [i_6 - 1] [i_6 - 1]))) : (((/* implicit */unsigned long long int) max((8452911542512608883LL), (((/* implicit */long long int) arr_15 [i_6 + 1] [(unsigned char)2] [i_6 - 1])))))));
                    }
                    var_20 = ((/* implicit */unsigned int) max(((-(16ULL))), (((/* implicit */unsigned long long int) var_9))));
                    var_21 *= ((((/* implicit */int) (signed char)59)) >= (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_13 [i_0] [i_0] [i_5]))))));
                }
                /* LoopNest 3 */
                for (short i_7 = 1; i_7 < 23; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                arr_26 [i_9] [i_8] [i_7] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) (signed char)78));
                                var_22 = ((/* implicit */signed char) (-((~(6)))));
                                arr_27 [(short)18] [13U] [i_9] [i_7 + 2] [i_7 + 2] [i_1] [i_0] &= ((/* implicit */long long int) ((signed char) -9223372036854775806LL));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((/* implicit */long long int) (_Bool)1)), (4023312875329565240LL))))));
                                var_24 &= ((/* implicit */int) (!(((((/* implicit */long long int) (~(((/* implicit */int) (signed char)72))))) < (max((var_12), (((/* implicit */long long int) 3905915420U))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    var_25 ^= ((/* implicit */long long int) (!((((!(((/* implicit */_Bool) 19)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_10] [i_10] [i_1] [i_1] [i_0] [5ULL])) ? (15314051199574233933ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        arr_33 [4] [4] [4] [i_11] = ((/* implicit */unsigned char) max((5LL), (-2522507093760951924LL)));
                        var_26 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    var_27 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((long long int) (unsigned short)37608))), (((arr_32 [i_0] [10U] [i_10] [i_10]) ? (2147483647ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37634))))))) | ((~((((_Bool)1) ? (((/* implicit */unsigned long long int) 4109999638U)) : (18446744073709551615ULL)))))));
                    arr_34 [i_10] [i_1] [21U] = ((/* implicit */_Bool) var_0);
                }
                for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    var_28 = ((/* implicit */int) max((var_28), (arr_15 [i_0] [i_0] [i_0])));
                    arr_38 [i_12] [i_1] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_8 [i_0] [i_0]))))));
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((int) ((long long int) arr_2 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        for (long long int i_14 = 2; i_14 < 21; i_14 += 3) 
                        {
                            {
                                arr_43 [i_14] [i_14] [i_14] [i_14] [23] [i_14] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_23 [i_14 + 4] [i_14] [i_14] [i_14 + 4] [i_14 + 4] [i_14])) ? (0ULL) : (((((/* implicit */_Bool) arr_37 [13LL] [13LL] [i_12])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) * (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (var_7))))));
                                arr_44 [i_14] [i_14] [i_13] [i_12] [5ULL] [i_14] [i_0] = ((/* implicit */unsigned long long int) arr_39 [i_1]);
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) (((((_Bool)1) || (((/* implicit */_Bool) (unsigned char)254)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_39 [i_0])) ? (((/* implicit */long long int) var_2)) : (arr_36 [i_0] [i_0] [i_1] [i_1]))))))));
                var_31 = ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_15 = 4; i_15 < 14; i_15 += 1) 
    {
        for (unsigned short i_16 = 0; i_16 < 15; i_16 += 2) 
        {
            {
                var_32 = ((/* implicit */short) 13185574179040721LL);
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (short)(-32767 - 1)))))) ^ (((long long int) 6))))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)5492))))), (((unsigned long long int) (unsigned short)36267)))))))));
    var_35 = ((/* implicit */unsigned char) ((((unsigned int) -434130005)) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25108)))));
}
