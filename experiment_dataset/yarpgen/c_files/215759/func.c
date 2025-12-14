/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215759
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 = ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) 143552238122434560ULL)))) ? (((arr_6 [i_0] [i_2] [i_1 + 1]) * (((var_5) - (var_5))))) : (3062934900918976546ULL));
                    var_15 = var_9;
                    arr_10 [i_1 - 1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(arr_3 [i_0] [7ULL])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (18446744073709551609ULL) : (3062934900918976566ULL)))))))));
                    arr_11 [i_2] [i_1] [5ULL] = min(((+((~(var_12))))), (((((/* implicit */_Bool) var_5)) ? (18446744073709551601ULL) : (arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3 - 1]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_17 &= var_12;
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) ((unsigned long long int) arr_20 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_2) : (var_0)))) ? (arr_21 [i_3] [i_6] [6ULL]) : (((arr_19 [i_4] [i_6]) << (((var_3) - (8568466814137780840ULL))))))) : (((((/* implicit */_Bool) arr_17 [i_5 + 1] [i_5 - 2] [i_5])) ? (var_9) : (arr_17 [i_5 - 1] [i_5 - 2] [10ULL])))))));
                                var_19 = (+(((((/* implicit */_Bool) arr_12 [i_5 - 2])) ? (((unsigned long long int) var_4)) : (min((arr_8 [i_6] [i_4] [i_3]), (arr_17 [i_5 - 1] [i_4] [i_3]))))));
                                arr_22 [i_3] [i_4] [i_3] [i_4] [5ULL] = 178619313812893713ULL;
                            }
                        } 
                    } 
                    arr_23 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_17 [i_5 + 1] [i_3 + 2] [i_3 + 1]))))));
                    arr_24 [i_4] [i_4] [9ULL] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_5 - 2])) ? (arr_6 [i_5 - 2] [i_4] [i_3 + 1]) : (arr_9 [i_5 - 2]))) <= (var_9)));
                }
            }
        } 
    } 
}
