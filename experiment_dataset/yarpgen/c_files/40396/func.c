/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40396
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
    var_18 = ((/* implicit */unsigned int) ((long long int) (~(var_0))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_11 [6U] [1LL] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 2] [5ULL])) ? (arr_3 [i_1 - 2] [i_1 - 1] [i_1]) : (arr_7 [i_1 + 1] [i_2 + 2] [i_2 + 1] [i_2 - 1])))), (((unsigned long long int) ((long long int) var_14))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~((-(arr_9 [i_2 + 1] [i_2 + 1] [11LL] [11LL]))))))));
                            var_20 = ((long long int) ((((arr_13 [i_0] [i_1] [i_0]) * (((/* implicit */unsigned long long int) 1995092828933742816LL)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (1995092828933742820LL) : (1995092828933742797LL))))));
                            arr_16 [14U] [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && ((!(((/* implicit */_Bool) var_4))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_5 [9LL] [i_1] [i_2 + 1] [i_1]))));
                            arr_17 [i_0] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((11093419772675806999ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) 1769267861U))))))));
                        }
                        var_22 = ((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])) - (((unsigned long long int) arr_7 [i_2] [i_2] [i_2] [i_2 + 1])));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min(((~(18446744073709551603ULL))), ((-(max((7353324301033744606ULL), (((/* implicit */unsigned long long int) var_8)))))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (+(3243455872219907062ULL))))));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (-(var_17))))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~((~(25ULL))))))));
                    }
                    for (long long int i_6 = 3; i_6 < 14; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) 15821191933288125860ULL))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), ((+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3718529075U)) && (((/* implicit */_Bool) var_14))))), ((+(25ULL)))))))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (-((~((-(140737219919872LL))))))))));
                        arr_22 [3LL] = (~(var_1));
                    }
                    arr_23 [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((+(var_1))) + (((/* implicit */unsigned long long int) var_10)))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            {
                                var_30 = ((unsigned long long int) min((arr_24 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 - 2]), (arr_24 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) min((25ULL), (((/* implicit */unsigned long long int) 3718529092U)))))));
                                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) max(((~(0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7846275320490307355LL)) ? (((/* implicit */long long int) 4294967295U)) : (var_8)))) ? (((arr_12 [2U] [i_0] [i_7] [i_7] [i_0] [i_0]) | (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_0] [15LL] [i_7] [4LL]) < (((/* implicit */unsigned long long int) 70351564308480LL))))))))))))));
                            }
                        } 
                    } 
                    arr_29 [i_0] [i_0] [i_2 - 1] = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) var_10)))));
                    arr_30 [1LL] = ((min((((/* implicit */long long int) 3718529075U)), (3121075292206665720LL))) >> (((var_6) - (836603938725344716ULL))));
                }
            } 
        } 
    } 
}
