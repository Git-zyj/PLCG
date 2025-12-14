/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198807
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
    var_16 = var_14;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((int) 2354651489556371003LL));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0])));
        var_18 = ((/* implicit */int) min((var_18), ((-(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 4 */
        for (int i_1 = 2; i_1 < 22; i_1 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 567144868)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_15))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) -567144868)) : (var_12))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [13LL] [i_1 + 1] [i_1 - 1] [i_1 + 1])) ? (arr_0 [i_1 + 2]) : (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 2]))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [8LL] [i_2])) <= (((/* implicit */int) arr_3 [17LL] [i_1] [i_1 - 2]))));
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (567144860) : (567144895)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)5] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1]))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [18LL] [i_1] [5] [i_1 + 1]))));
                    }
                } 
            } 
            var_21 += ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)165)))) <= (1172940996)));
            arr_14 [i_0] [i_0] = arr_11 [i_1];
        }
        for (int i_4 = 2; i_4 < 22; i_4 += 4) /* same iter space */
        {
            var_22 = ((int) ((((/* implicit */_Bool) arr_11 [i_4])) ? (arr_8 [i_4] [i_4] [i_0] [i_4]) : (arr_16 [i_4])));
            var_23 = ((/* implicit */long long int) arr_0 [i_4 + 1]);
            var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4 - 1])) ? (arr_15 [i_4 - 1] [(unsigned char)22]) : (arr_15 [i_4 - 1] [i_4 - 1])));
        }
        for (int i_5 = 2; i_5 < 22; i_5 += 4) /* same iter space */
        {
            var_25 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_5 [i_0] [i_0] [i_0] [4LL]) <= (((/* implicit */long long int) ((/* implicit */int) arr_17 [15]))))))));
            var_26 = ((/* implicit */long long int) arr_1 [i_0]);
            var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_5] [i_0] [i_5] [i_5 + 2] [8LL] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (567144868) : (((/* implicit */int) (unsigned char)241))))) : (((((/* implicit */_Bool) var_9)) ? (-2174288213448023864LL) : (4388252101306457032LL)))));
        }
        for (int i_6 = 2; i_6 < 22; i_6 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */int) -1996931074814236431LL);
            arr_22 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_6] [i_0] [i_0] [i_0] [(unsigned char)6] [i_6 - 1])) ? (arr_10 [i_6] [i_6] [i_0] [i_0] [i_0] [(unsigned char)14]) : (arr_10 [i_6] [i_0] [i_0] [i_0] [12LL] [i_6 - 1])));
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (unsigned char)105))));
        }
        var_30 = arr_19 [i_0] [i_0] [i_0];
    }
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
    {
        arr_26 [i_7] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) max((var_7), (1172940996)))), (min((1790562707678775100LL), (((/* implicit */long long int) 343887125)))))) + (min((((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */long long int) arr_11 [(unsigned char)6])) : (arr_25 [i_7]))), (((((/* implicit */_Bool) arr_10 [8LL] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (arr_21 [i_7] [i_7] [i_7]) : (((/* implicit */long long int) var_11))))))));
        var_31 = ((/* implicit */int) ((long long int) -567144860));
    }
}
