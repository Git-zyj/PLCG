/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51282
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
    var_14 = ((/* implicit */short) (+(var_13)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 1])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(signed char)18]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [14ULL])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : (((arr_2 [i_0] [8ULL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 2])) < (((/* implicit */int) arr_0 [i_0 - 2]))))))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            arr_7 [i_0 - 2] [i_0] [i_1] = ((/* implicit */short) ((unsigned long long int) min((var_12), (var_13))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_15 [i_0] [i_1 + 3] [i_2] [i_1] = ((/* implicit */int) var_11);
                        var_15 += ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3])))))))));
                        arr_16 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_2)) : ((+(arr_10 [i_0] [i_2])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) + (arr_12 [i_0 - 2] [i_1 + 3] [i_3 - 1] [i_3 - 2]))) : (min((max((10591976001496251397ULL), (arr_2 [i_2] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (7854768072213300233ULL))))))));
                        var_16 = (i_1 % 2 == zero) ? (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((arr_14 [i_1]) - (4139462457549040313ULL)))))) ? (((/* implicit */int) ((10591976001496251397ULL) >= (arr_4 [(short)15])))) : (((/* implicit */int) min((var_7), (((/* implicit */signed char) arr_9 [i_0] [i_0 - 1] [i_0] [16ULL]))))))) << (((var_10) - (2161333331513668808ULL)))))) : (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((((arr_14 [i_1]) - (4139462457549040313ULL))) - (9435021972154965446ULL)))))) ? (((/* implicit */int) ((10591976001496251397ULL) >= (arr_4 [(short)15])))) : (((/* implicit */int) min((var_7), (((/* implicit */signed char) arr_9 [i_0] [i_0 - 1] [i_0] [16ULL]))))))) << (((var_10) - (2161333331513668808ULL))))));
                        arr_17 [i_1] [i_1 - 1] [i_1 + 2] [i_2] [i_3] [i_3] = ((/* implicit */signed char) (+((+(arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 - 1])))));
                    }
                } 
            } 
            arr_18 [20ULL] [i_0] [i_1] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_10 [i_0 - 1] [i_1 - 1]) : (arr_10 [i_0 + 1] [i_1 + 1])))) ? (arr_8 [i_0] [i_1 - 1]) : (var_0));
        }
        arr_19 [i_0] = var_1;
        arr_20 [i_0 + 1] = ((max((arr_12 [i_0] [i_0] [i_0] [i_0 - 2]), (arr_12 [i_0] [i_0] [i_0 - 1] [i_0 - 2]))) & (((((/* implicit */_Bool) arr_12 [i_0] [(short)6] [i_0] [i_0 - 2])) ? (arr_12 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 2]) : (arr_12 [16] [17ULL] [16] [i_0 + 1]))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) 7854768072213300224ULL)) || (((/* implicit */_Bool) 10591976001496251402ULL)))))));
                arr_25 [i_4] [i_5] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((+(arr_12 [i_5] [i_4] [i_4] [i_4]))), (((((/* implicit */_Bool) var_7)) ? (var_0) : (arr_22 [i_4]))))))));
                arr_26 [i_4] |= 10591976001496251396ULL;
                arr_27 [i_4] [2ULL] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7854768072213300219ULL)))))) % (arr_10 [i_4] [i_4])))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_10);
    var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_6))))))) | (max(((+(var_13))), (((7854768072213300209ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
}
