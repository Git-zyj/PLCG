/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41670
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = min((min((((16394408927435563276ULL) << (((16142222973523497587ULL) - (16142222973523497540ULL))))), ((+(2304521100186054028ULL))))), (((/* implicit */unsigned long long int) (~(arr_1 [i_0])))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((min((137438953471ULL), (((/* implicit */unsigned long long int) -1599505049)))) << (((arr_2 [(_Bool)1]) - (456995248))))) % (((/* implicit */unsigned long long int) var_9)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(arr_2 [i_0])));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (-(((((/* implicit */_Bool) 8046353051806576618LL)) ? (260096ULL) : (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [(_Bool)1])))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 11; i_2 += 1) 
        {
            arr_10 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (arr_8 [i_2 - 3] [i_2] [7])));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (!(var_4))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_16 [i_1] [i_3] [i_1] = (-(-33453054));
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 + 2] [i_1]))) | (((((/* implicit */unsigned long long int) arr_20 [2ULL] [1] [2ULL])) | (260096ULL)))));
                        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3089326481016877378LL))));
                        var_19 = ((/* implicit */long long int) (!(((var_13) == (((/* implicit */unsigned long long int) var_9))))));
                        arr_21 [i_1] [i_1] [i_4 + 2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (arr_6 [i_1] [i_5]) : (arr_18 [i_1] [i_1] [i_1] [i_4] [i_1])));
                        arr_22 [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_26 [4ULL] &= ((/* implicit */_Bool) (-(var_7)));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((260096ULL) | (11285489333144611537ULL))))));
                        arr_27 [i_1] [i_6] [3LL] [i_6] [i_3] = ((/* implicit */int) (+(260117ULL)));
                    }
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) ((arr_24 [i_3] [i_3] [i_4 - 1] [i_7] [i_7] [i_7]) - (((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_1] [i_3]))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) -3089326481016877382LL)))))));
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_23 = ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_4 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 2052772790))))));
                            arr_33 [i_7] [i_1] [i_7] [i_7] [i_7] [i_7] = ((arr_7 [i_4 + 2] [i_1]) | (var_12));
                        }
                        for (int i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                        {
                            arr_37 [i_1] [i_3] [11LL] [i_3] [i_1] = ((((((arr_19 [0LL] [i_7] [i_3]) ? (arr_36 [5LL] [i_3] [i_4] [i_3] [i_9] [i_4 + 1] [i_3]) : (arr_9 [i_1] [i_3]))) + (2147483647))) >> (((1699890155) - (1699890134))));
                            arr_38 [i_1] [i_1] [i_4] [i_7] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_1] [i_3] [i_9] [i_7] [i_9])) + ((-(var_11)))));
                        }
                        for (int i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) -473330574)) ? (16142222973523497585ULL) : (((/* implicit */unsigned long long int) 218889995130527463LL))));
                            arr_43 [i_7] [i_3] [i_1] [i_7] [i_10] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_4 - 1] [i_4]))) + (3081597025638820684ULL));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(-88723820)))) != (17669032237300834341ULL))))));
                        }
                        var_26 = ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [i_7] [i_4 + 1] [i_1]))) != (2458024591667374673LL));
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (long long int i_12 = 4; i_12 < 22; i_12 += 2) 
        {
            {
                arr_50 [i_11] [1ULL] = ((/* implicit */unsigned long long int) ((_Bool) min((arr_46 [(_Bool)0] [(_Bool)0] [i_12 + 1]), (arr_46 [i_11] [i_11] [i_12 - 1]))));
                var_27 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((int) 2304521100186054046ULL))), (min((751869596294484942ULL), (((/* implicit */unsigned long long int) -3LL)))))) ^ (((/* implicit */unsigned long long int) ((int) arr_46 [13] [i_12 - 3] [i_11])))));
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) 473330571)) ? (2304521100186054049ULL) : (16142222973523497581ULL))))));
}
