/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231992
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
    var_15 = ((/* implicit */long long int) var_6);
    var_16 = ((((/* implicit */_Bool) 371060340)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_5)))) ? (((int) var_10)) : (((((/* implicit */_Bool) var_12)) ? (var_7) : (var_2)))))) : (((((var_13) / (var_14))) * (max((-110503026281685761LL), (((/* implicit */long long int) var_6)))))));
    var_17 = ((/* implicit */int) ((((long long int) (+(35184372088831LL)))) > (((/* implicit */long long int) ((((/* implicit */_Bool) ((((-2861384670177226694LL) + (9223372036854775807LL))) << (((760995620) - (760995620)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (-1385655515))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) var_2);
        var_19 += ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_2))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */_Bool) 2861384670177226694LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) -1538368767)))) : (((/* implicit */long long int) -6)))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_20 = var_12;
            arr_7 [i_1] = arr_3 [i_0] [i_0];
            arr_8 [8LL] = ((int) arr_5 [i_1]);
        }
        for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 2; i_5 < 11; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), ((~(min((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */_Bool) var_6)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_19 [i_5] [i_4] [i_4] [i_3] [i_2] [i_0] [i_0]))))))))));
                            var_22 = max(((~(arr_9 [i_2 - 1] [i_5]))), (((/* implicit */long long int) min((8), (arr_20 [i_2 + 1] [12] [i_2] [i_4] [12] [0LL])))));
                            arr_21 [i_2] [i_2] = 9223372036854775807LL;
                            var_23 = ((/* implicit */long long int) (((-(arr_18 [i_5] [i_5 + 1] [8] [i_5] [i_5]))) / (((int) -1LL))));
                            var_24 = ((/* implicit */int) ((long long int) arr_20 [i_2] [i_2 + 1] [i_2] [i_4 - 1] [i_5] [i_5 + 1]));
                        }
                        for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            arr_24 [i_0] [i_2] [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) ((var_9) + (((/* implicit */long long int) arr_2 [4] [7]))))) || (((/* implicit */_Bool) ((int) 947036352)))))));
                            var_25 = ((/* implicit */long long int) max((var_25), (max((((long long int) ((int) var_13))), (arr_1 [5])))));
                            arr_25 [i_2] [i_2] = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))));
                            var_26 = min((min((arr_15 [i_4 + 1] [i_2] [i_4 - 1] [i_4 - 1]), (arr_12 [i_2] [2] [i_4 + 1] [i_4 - 1]))), (((/* implicit */long long int) (~(var_6)))));
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) 35184372088831LL)) ? (((/* implicit */long long int) arr_0 [6])) : (4914929453546152591LL))))));
                        }
                        var_28 = ((/* implicit */int) arr_6 [i_3]);
                    }
                } 
            } 
            arr_26 [i_2] [i_2] = var_9;
        }
        var_29 = ((/* implicit */long long int) (((~((+(var_11))))) <= (((long long int) 8500486952998736592LL))));
        /* LoopSeq 2 */
        for (long long int i_7 = 1; i_7 < 11; i_7 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */int) ((long long int) ((long long int) arr_0 [i_7 + 2])));
            arr_29 [i_7] [i_7] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_1 [i_7 + 2])) ? ((-9223372036854775807LL - 1LL)) : (arr_1 [i_7 + 2]))));
            arr_30 [i_7] [i_0] = arr_27 [i_0];
            /* LoopSeq 1 */
            for (long long int i_8 = 4; i_8 < 11; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        {
                            arr_39 [i_0] [i_0] [i_10] [i_0] [i_0] [3LL] [i_0] = ((((((/* implicit */_Bool) 1795798260)) ? (arr_9 [i_8 + 1] [i_7 + 1]) : (-7284455131596539260LL))) + (((-35184372088831LL) / (max((((/* implicit */long long int) arr_28 [2] [i_8] [2LL])), (-1627584000769336357LL))))));
                            arr_40 [i_10] [9LL] [i_8] [i_10] [i_10] = ((((/* implicit */_Bool) arr_13 [i_0] [i_8] [i_9])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_4)))) ? (arr_11 [i_10] [i_0] [i_8 + 1]) : ((+(-2097171976)))))) : (max((((/* implicit */long long int) (-2147483647 - 1))), (((long long int) -67637370)))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) max((446787234), (-1342060777)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_19 [i_7] [i_7] [i_7 - 1] [i_8] [12] [9] [i_8])), (arr_22 [i_7 + 2] [i_7 + 2] [i_8] [i_7 + 2] [i_8] [i_7] [4LL]))))));
                var_32 = min((7361945501318418708LL), (((((/* implicit */_Bool) arr_22 [12] [i_0] [i_8] [i_8 - 3] [i_8] [12] [i_8])) ? (arr_22 [10LL] [i_8] [10LL] [i_8 - 1] [i_8] [12] [i_8]) : (arr_22 [i_7] [i_8] [6] [i_8 + 1] [i_8] [i_7] [11]))));
                var_33 = ((/* implicit */long long int) var_8);
            }
        }
        for (long long int i_11 = 1; i_11 < 11; i_11 += 4) /* same iter space */
        {
            arr_44 [6] [i_11] = ((/* implicit */int) ((((arr_11 [i_0] [4] [i_11 - 1]) + (arr_18 [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1]))) <= (1045617770)));
            var_34 = ((int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -2060229647)) ? (var_8) : (var_7)))) - ((-(-2861384670177226695LL)))));
            var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((var_13) & (arr_38 [i_0] [i_0] [i_0] [i_11] [i_11] [6] [i_11]))))))));
        }
    }
    var_36 = ((/* implicit */int) ((((/* implicit */long long int) var_6)) - (9223372036854775807LL)));
}
