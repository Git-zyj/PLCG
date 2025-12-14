/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246608
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 3231630875U)) || (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2])))));
                        var_14 = ((/* implicit */unsigned short) arr_2 [i_0] [(unsigned short)6]);
                        arr_12 [i_0] [i_0 + 1] [i_2] [i_1] = ((/* implicit */int) 3698172154478174666LL);
                        var_15 += ((/* implicit */_Bool) arr_0 [i_2]);
                    }
                    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-7737844959571717048LL), (((/* implicit */long long int) 1063336416U))))) ? (2318511606U) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((3260673233125174831ULL), (((/* implicit */unsigned long long int) arr_0 [i_2])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))) <= (15186070840584376785ULL)))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(5471631092917616317LL)))) ? (((((/* implicit */int) ((((/* implicit */int) (unsigned short)47962)) >= (((/* implicit */int) arr_13 [i_4] [i_4]))))) % ((+(((/* implicit */int) arr_13 [i_4] [i_4])))))) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_4] [i_4])) != (((/* implicit */int) arr_14 [i_4])))))));
        var_17 = var_10;
        /* LoopSeq 2 */
        for (long long int i_5 = 1; i_5 < 13; i_5 += 2) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_17 [i_5] [i_5 - 1] [i_5 + 2]))) ? (((/* implicit */int) ((_Bool) arr_16 [i_5 + 2]))) : (((/* implicit */int) max((arr_16 [i_5 - 1]), (arr_16 [i_5 + 3]))))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5 + 2])) & (((/* implicit */int) arr_16 [i_5 - 1]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_5] [i_5 - 1] [i_5 - 1])), (max((arr_13 [i_4] [i_4]), (((/* implicit */unsigned short) arr_17 [i_4] [i_4] [i_4]))))))) : (((/* implicit */int) ((short) (+(((/* implicit */int) (unsigned short)17573))))))));
            var_20 = ((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_5 + 3] [i_4] [(_Bool)1])), ((unsigned short)47968)));
            var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) ((1063336420U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)914)))))) != (((/* implicit */int) arr_14 [i_5 + 3]))))), (min((((/* implicit */long long int) arr_13 [(unsigned short)5] [i_4])), (arr_18 [13LL] [i_5])))));
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_6])) ? (1063336420U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967268U)) ? (((/* implicit */int) arr_13 [i_6] [i_4])) : (2147483647))))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)57344)) : (((/* implicit */int) arr_13 [i_8] [i_8]))))) != (((((/* implicit */_Bool) 3231630875U)) ? (15186070840584376785ULL) : (((/* implicit */unsigned long long int) 8165087809798729711LL))))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_29 [i_8] [i_8] [i_8] [i_8] [(_Bool)1] [i_8] [i_8]))));
                            var_25 = ((/* implicit */short) 1063336420U);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */_Bool) ((short) arr_13 [(_Bool)1] [i_6]));
        }
    }
    var_27 = ((/* implicit */long long int) 3231630876U);
}
