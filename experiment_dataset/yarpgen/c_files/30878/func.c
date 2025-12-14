/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30878
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (arr_1 [i_0] [i_0])))) : (arr_0 [i_0]));
        var_17 = ((/* implicit */_Bool) (-((((_Bool)1) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) -2147483630))))));
        var_18 = ((/* implicit */unsigned int) -2147483602);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) >= (arr_1 [i_1] [i_1]))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                arr_12 [i_2] [(unsigned char)7] = ((/* implicit */_Bool) ((max((-2147483636), (((/* implicit */int) var_14)))) & (((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    arr_15 [9U] = ((/* implicit */_Bool) ((((2116590987U) << (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) (unsigned char)255)) - (249)))));
                    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_2]) : (arr_5 [i_1])));
                }
                for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) 
                {
                    var_21 = ((/* implicit */int) var_11);
                    arr_19 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
                }
            }
            /* vectorizable */
            for (int i_6 = 4; i_6 < 9; i_6 += 4) 
            {
                arr_22 [i_6] [i_6] [i_1] [i_1] = ((((((/* implicit */_Bool) var_3)) ? (arr_13 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) (_Bool)0)))) ^ (((((/* implicit */_Bool) arr_21 [i_1] [i_1] [9U] [i_6])) ? (arr_1 [i_1] [i_2]) : (arr_5 [i_2]))));
                var_22 = ((/* implicit */int) arr_11 [i_2]);
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) : (var_12))))))));
            }
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                arr_27 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_21 [i_1] [i_1] [i_1] [i_1]) | (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) 2116590987U))));
                /* LoopSeq 3 */
                for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    var_24 = ((((/* implicit */long long int) -2147483636)) <= (((arr_26 [i_1] [i_2] [i_7] [i_8]) + (((/* implicit */long long int) ((/* implicit */int) (short)8327))))));
                    arr_31 [i_8] [i_7] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (unsigned char)240);
                }
                for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_2)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) var_1)) : (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)4)))), (arr_5 [i_7])))));
                    var_26 &= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_1))))) + (1640356884U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3656451979U))))))));
                }
                for (unsigned int i_10 = 1; i_10 < 9; i_10 += 2) 
                {
                    var_27 ^= ((((((arr_29 [i_10 + 1] [i_7] [i_7] [i_2] [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) < (arr_20 [(unsigned char)5] [i_1] [i_1]));
                    var_28 ^= ((/* implicit */unsigned char) var_10);
                    var_29 ^= ((/* implicit */unsigned int) ((int) max((arr_4 [i_10] [i_10 + 1]), (arr_4 [i_10] [i_10 - 1]))));
                    arr_38 [i_10 - 1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_10 + 1]))) * (1285806119U)))) ? (((((/* implicit */_Bool) arr_10 [i_10 + 1] [i_10 - 1] [i_10 + 1] [(_Bool)1])) ? (((/* implicit */unsigned int) arr_10 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10])) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) >= (((var_12) & (((/* implicit */long long int) 2116590987U))))))))));
                    var_30 ^= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_10 + 1] [i_10] [i_10 + 1] [i_10 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (9223372036854775807LL))));
                }
                var_31 ^= arr_21 [i_1] [i_2] [i_7] [i_7];
            }
            for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                arr_42 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) -8618951365583397708LL))));
                arr_43 [i_2] [i_2] |= ((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_33 [i_1] [i_1] [i_1] [i_1] [i_2] [i_11])))));
            }
            var_32 |= ((/* implicit */short) max((((/* implicit */long long int) (((((_Bool)1) ? (arr_1 [i_1] [i_2]) : (((/* implicit */int) var_11)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_0 [(unsigned char)12])))) ? (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (var_6)))));
            var_33 ^= ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */long long int) 98304U)) : (min((((/* implicit */long long int) 8386560U)), (-3418533544444009173LL))))) + (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_3 [i_1]))))) * (2044415256U))))));
            arr_44 [i_1] [i_2] |= ((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_5)), (min((var_6), (((/* implicit */long long int) 3816328314U)))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) -2147483636)) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)8)))))));
        }
        var_34 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))) ? (((/* implicit */long long int) var_10)) : (var_6))));
    }
    var_35 = ((((((/* implicit */int) var_13)) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10))) < (((var_2) ? (3211331558U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_12 = 1; i_12 < 7; i_12 += 4) 
    {
        var_36 = ((/* implicit */unsigned char) ((((arr_10 [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12 - 1]) + (2147483647))) << (((var_10) - (1449939692U)))));
        arr_47 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_12] [i_12])) ? (((/* implicit */int) (unsigned char)181)) : (1015112865)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_40 [i_12] [i_12] [i_12] [i_12 - 1])));
    }
    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
    {
        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) 4294967295U))));
        var_38 = ((/* implicit */unsigned int) -2147483636);
    }
}
