/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36654
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
    var_19 += (~(min((var_11), (var_16))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    arr_10 [7ULL] [i_1 + 1] [i_2] [i_1] = (~(min((((unsigned long long int) arr_1 [i_2 - 2])), (arr_5 [i_0 + 1]))));
                    var_20 = min((((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (14205709698929959558ULL) : (var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1]))))));
                    var_21 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_9 [i_1 - 2]))))));
                }
                for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    var_22 = 8455842736473364737ULL;
                    var_23 *= ((unsigned long long int) min((9990901337236186871ULL), (arr_4 [i_3 + 1] [i_0 - 1] [i_1])));
                }
                for (unsigned long long int i_4 = 4; i_4 < 11; i_4 += 2) /* same iter space */
                {
                    arr_15 [i_4 - 3] [2ULL] = ((((unsigned long long int) 9990901337236186860ULL)) / (((((/* implicit */_Bool) arr_12 [i_4 + 2] [i_0] [i_0])) ? (arr_14 [i_0 - 1] [i_1] [i_4 - 4]) : (arr_1 [i_0 + 1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_24 = (~(arr_8 [i_4] [i_4]));
                        arr_18 [1ULL] [10ULL] [i_4 - 3] [12ULL] [i_1 + 1] [2ULL] = ((/* implicit */unsigned long long int) ((arr_4 [i_1 - 2] [8ULL] [i_1 - 1]) < (arr_4 [i_1 - 1] [i_1] [i_1])));
                        var_25 = ((arr_13 [i_0 + 1]) - (arr_13 [i_0 + 1]));
                    }
                    var_26 = min((((unsigned long long int) (~(5795120066845186955ULL)))), ((+(6862563707317029999ULL))));
                }
                for (unsigned long long int i_6 = 4; i_6 < 11; i_6 += 2) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [i_1 - 1] [i_6 - 2] = 8455842736473364752ULL;
                    var_27 += ((((/* implicit */_Bool) min((arr_14 [i_1 + 1] [i_1 + 1] [i_1 - 1]), (arr_20 [i_1 - 1] [i_1 + 1] [i_1 + 1])))) ? ((+(arr_14 [i_1 + 1] [i_1 - 2] [i_1 - 2]))) : ((+(arr_14 [i_1 + 1] [i_1 - 1] [i_1 - 2]))));
                    var_28 = var_8;
                }
                var_29 = ((unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 + 1] [9ULL]))));
                var_30 -= ((unsigned long long int) 11584180366392521623ULL);
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (min((9990901337236186866ULL), (14187682011837534340ULL)))));
            }
        } 
    } 
    var_32 |= 2860214149834032385ULL;
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            {
                arr_26 [6ULL] [6ULL] [i_7] = (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_25 [10ULL] [i_8] [i_8]) : (arr_25 [i_8] [7ULL] [0ULL]))));
                arr_27 [10ULL] [10ULL] = min((13534133725454839717ULL), (15586529923875519230ULL));
            }
        } 
    } 
    var_33 = min((((unsigned long long int) var_10)), (var_7));
}
