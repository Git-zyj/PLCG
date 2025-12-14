/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244713
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
    var_19 = (((-((-(var_5))))) - (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_9)), (var_16)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) && (((/* implicit */_Bool) ((int) arr_0 [i_0] [3]))))) ? (max((((/* implicit */int) (unsigned short)65510)), ((-(((/* implicit */int) (_Bool)1)))))) : ((~(min((2147483647), (((/* implicit */int) (unsigned short)0))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 4; i_3 < 12; i_3 += 3) 
                    {
                        var_20 -= ((arr_0 [i_1 - 1] [i_2]) * (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) < (((/* implicit */int) arr_9 [i_0] [i_0]))))));
                        arr_12 [i_0] [i_2] [i_2] [i_2] [i_0] = arr_10 [i_2] [i_1] [i_2] [i_3];
                        arr_13 [i_0] [i_0] [(unsigned short)5] [(unsigned short)5] = (~(((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (arr_3 [i_2]) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
                        arr_14 [(unsigned short)12] [10ULL] [i_2] [(unsigned short)2] [i_0] = ((((/* implicit */int) ((unsigned short) arr_7 [i_0]))) | ((+(((/* implicit */int) arr_11 [i_3 + 1] [7] [(unsigned short)6] [i_0])))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2] [i_3])))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            {
                                arr_19 [i_5] [i_5] [i_2] [i_5] [i_5] [i_4] [i_5] = arr_18 [i_4];
                                arr_20 [i_0] [i_1 - 2] [i_2] [i_4] [i_0] = arr_18 [i_0];
                                var_22 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0])), (arr_4 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0]))))) : ((~(arr_4 [i_0] [i_0]))))), ((((-(arr_18 [i_2]))) - (((/* implicit */unsigned long long int) min((2147483647), (1999432136))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] = ((/* implicit */_Bool) min(((((+(arr_15 [i_2] [i_0] [(_Bool)1] [i_1 + 1] [i_0]))) | (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (arr_4 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (-((+(arr_3 [i_2]))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_26 [9ULL] [i_1] [(unsigned short)11] [i_6] [5ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~(max((((/* implicit */int) ((unsigned short) 18446744073709551609ULL))), ((-(((/* implicit */int) arr_7 [i_0])))))))))));
                    }
                }
            } 
        } 
    }
}
