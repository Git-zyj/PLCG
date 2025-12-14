/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222415
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_2] = var_9;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
                    {
                        var_16 = var_9;
                        var_17 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1]))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                    {
                        var_18 = ((((/* implicit */_Bool) 2199022206976ULL)) ? (18446744073709551615ULL) : (13174150379245599493ULL));
                        var_19 &= 2305843009213693951ULL;
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        arr_16 [i_2] [i_2] [i_1] [i_2] = ((((((/* implicit */_Bool) 17150205027313929774ULL)) ? (10890283827635440116ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1992267699031466354ULL)))))))) + (min((((unsigned long long int) var_4)), (max((var_11), (arr_3 [i_5] [i_2] [i_0]))))));
                        var_20 = max((((arr_0 [i_0] [i_0]) * (arr_0 [i_0] [i_0]))), ((~(arr_14 [i_1]))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            {
                arr_21 [i_6] = (-(((var_10) & (16454476374678085261ULL))));
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                arr_29 [i_10] [8ULL] [8ULL] [i_6] &= arr_26 [i_6] [i_7] [i_10] [i_9] [i_10] [i_10];
                                var_21 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_26 [i_6] [i_7] [i_8] [i_9] [i_10] [i_8]) : (var_5))))))));
                                arr_30 [i_6] [i_7] [i_10] [i_9] [i_10] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) (-(5299570326661329159ULL))))));
                                var_22 = ((arr_27 [i_6] [i_7] [i_8] [i_9] [i_10]) & (((((/* implicit */_Bool) max((12456791471591909628ULL), (arr_23 [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6] [i_6])))))) : (((var_13) ^ (8354487831379824517ULL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
