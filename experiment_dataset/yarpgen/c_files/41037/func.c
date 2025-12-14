/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41037
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [16ULL] = ((/* implicit */signed char) var_10);
        var_11 += ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_12 -= ((((((/* implicit */int) arr_0 [i_1])) ^ (((/* implicit */int) arr_0 [i_1])))) == (((/* implicit */int) arr_0 [i_1])));
        var_13 = arr_1 [i_1] [i_1];
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (!(var_2)));
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            arr_14 [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_2] [i_3]))));
            /* LoopSeq 2 */
            for (signed char i_4 = 2; i_4 < 9; i_4 += 2) 
            {
                var_14 |= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)7491)) >> (((var_10) + (6367110781408854836LL)))));
                arr_17 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_3] [6ULL] [i_3])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17043854947149945624ULL))) : (arr_10 [i_4 - 2] [i_4 + 2])));
                arr_18 [i_2] [i_3] [i_4 - 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_27 [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4127099420671182664LL)) ? (arr_22 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7 - 1] [i_7 - 1])))));
                            arr_28 [i_7 - 1] [i_3] [i_6] [(_Bool)1] [i_3] [(_Bool)1] = (+(var_0));
                            var_15 ^= ((/* implicit */_Bool) arr_26 [i_7 - 1] [i_6] [i_5] [i_6] [i_7] [i_3] [i_3]);
                        }
                    } 
                } 
                var_16 += ((/* implicit */_Bool) arr_3 [i_3]);
            }
            arr_29 [i_3] [i_3] [i_3] = ((/* implicit */long long int) var_0);
            arr_30 [i_2] [i_2] [i_3] = ((/* implicit */long long int) arr_11 [i_2] [i_3]);
        }
        /* vectorizable */
        for (long long int i_8 = 2; i_8 < 8; i_8 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        {
                            arr_42 [i_11] [i_10] [i_9] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_35 [i_8 + 3] [i_8 + 3] [i_10 - 1] [i_10]);
                            var_17 ^= ((/* implicit */unsigned long long int) (unsigned short)58045);
                            arr_43 [(_Bool)0] [i_11] [(_Bool)1] [i_10] [i_9] [(signed char)5] [(signed char)5] = ((/* implicit */unsigned short) var_0);
                            var_18 -= ((/* implicit */unsigned short) (-(arr_35 [i_8 + 2] [i_8 + 2] [i_10 + 2] [i_9])));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */_Bool) ((5277414591322799387ULL) - (((/* implicit */unsigned long long int) 0LL))));
        }
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(max(((_Bool)1), (var_5)))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    }
    var_21 = min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)7491));
    var_22 = min((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (13345191759366810032ULL) : (var_0))))), (((unsigned long long int) var_6)));
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_10)) : (((min((10405114214523602980ULL), (((/* implicit */unsigned long long int) -1759625347217696663LL)))) * (((var_5) ? (17592186044415ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
}
