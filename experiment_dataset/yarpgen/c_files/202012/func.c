/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202012
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
    var_16 = var_9;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [(signed char)14] = min((max((((/* implicit */unsigned long long int) arr_0 [5U])), (max((((/* implicit */unsigned long long int) var_1)), (var_0))))), (((/* implicit */unsigned long long int) arr_3 [i_0])));
        arr_5 [0U] [i_0] = ((/* implicit */unsigned long long int) arr_3 [(unsigned char)9]);
        arr_6 [i_0] &= ((/* implicit */long long int) var_0);
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned short) ((unsigned int) arr_8 [i_1]));
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_17 &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2147467264U)), (562915593682944ULL)))) ? (max((min((arr_16 [i_1] [i_2] [i_3] [0ULL]), (((/* implicit */long long int) arr_7 [i_1])))), (((long long int) var_8)))) : (((/* implicit */long long int) arr_14 [i_1] [i_1] [i_1] [i_1]))));
                        var_18 = ((/* implicit */int) max((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_15 [i_4] [i_4] [i_4]), (((/* implicit */unsigned char) arr_9 [i_4]))))), (max((arr_13 [i_1] [i_1]), (arr_13 [9] [(short)9]))))))));
                        arr_19 [i_1] [i_1] [i_3] [(unsigned char)10] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_13 [i_1] [i_4])), (arr_17 [i_4] [i_3] [i_1] [i_1])))) ? (min((((/* implicit */long long int) var_12)), (arr_16 [i_1] [i_1] [i_1] [(_Bool)1]))) : (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) arr_13 [3U] [i_4]))))))), (((/* implicit */long long int) arr_11 [i_1] [i_1] [0ULL]))));
                        arr_20 [i_1] [i_3] [i_1] [i_1] = arr_12 [19LL] [i_1] [i_1];
                        var_19 = ((signed char) max((((/* implicit */unsigned long long int) min((arr_17 [i_1] [i_2] [i_1] [i_4]), (((/* implicit */unsigned int) arr_18 [i_3] [i_3] [i_3] [i_3]))))), (min((arr_12 [i_4] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_2))))));
                    }
                } 
            } 
        } 
        arr_21 [i_1] = ((/* implicit */short) max((max((((/* implicit */long long int) max((((/* implicit */short) arr_9 [8ULL])), (var_7)))), (max((((/* implicit */long long int) arr_8 [i_1])), (arr_16 [i_1] [i_1] [(short)12] [i_1]))))), (((/* implicit */long long int) min((((/* implicit */int) var_2)), (max((arr_14 [i_1] [i_1] [i_1] [i_1]), (arr_7 [i_1]))))))));
        arr_22 [i_1] [i_1] = ((/* implicit */short) var_6);
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((/* implicit */unsigned int) var_2)), (min((((/* implicit */unsigned int) arr_14 [i_1] [i_1] [7] [(signed char)12])), (max((((/* implicit */unsigned int) var_5)), (var_8))))))))));
    }
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_11))));
}
