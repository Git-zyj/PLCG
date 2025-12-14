/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242070
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
    var_19 = ((/* implicit */unsigned long long int) max((((((min((((/* implicit */long long int) var_13)), (7192022651019026073LL))) + (9223372036854775807LL))) << (((min((8U), (((/* implicit */unsigned int) var_8)))) - (8U))))), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_10)), (var_1))) == (var_9))))));
    var_20 = ((/* implicit */unsigned long long int) ((max((0ULL), (((/* implicit */unsigned long long int) var_5)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)0) ? (-11) : (((/* implicit */int) var_2))))) < ((~(12390067960234929953ULL)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [20ULL] [i_0] = ((/* implicit */unsigned short) var_11);
        arr_4 [8ULL] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 7802504877570641003ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) -709207478)) < (var_10)))) | (((/* implicit */int) (_Bool)1))));
        arr_9 [i_1] [i_1] = ((((/* implicit */_Bool) arr_7 [i_1])) ? (((arr_0 [i_1] [17]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)20] [i_1]))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7802504877570641003ULL))));
    }
    for (long long int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) ((arr_11 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [i_2])) <= (((/* implicit */int) arr_6 [i_2] [i_2]))))))));
                        arr_22 [i_2] [4LL] [(_Bool)1] = ((/* implicit */int) (((!(((/* implicit */_Bool) 10058612730768705131ULL)))) || (((/* implicit */_Bool) 7802504877570641015ULL))));
                    }
                } 
            } 
            var_24 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3 + 1])))))));
        }
        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
        {
            var_25 = 398433700U;
            arr_26 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_2] [i_6 + 2] [(unsigned short)3] [(signed char)2])) * (((/* implicit */int) arr_5 [i_6 + 1]))))) : (((((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_6]))) : (10058612730768705131ULL))) >> (((((/* implicit */int) (unsigned char)114)) - (112)))))));
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                arr_29 [6U] [i_2] [5] [4] = ((/* implicit */unsigned short) arr_0 [i_2] [(signed char)3]);
                var_26 ^= ((var_3) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) 1325558025)) : (9223372036854775807LL)))) ? (7466010899975295236ULL) : (10058612730768705133ULL))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_7)) % (((/* implicit */int) arr_17 [i_2] [i_7])))), (((/* implicit */int) max((arr_16 [8LL] [i_6] [5] [i_7]), (((/* implicit */signed char) var_6)))))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                arr_34 [i_2] [i_6] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((-1325558005) - (((/* implicit */int) (_Bool)1))))), (2745129941U)))) ? (max((arr_11 [i_6 + 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [7ULL] [i_2])) || ((_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_6 + 1] [i_2] [i_6 + 1])) && (((/* implicit */_Bool) 9ULL))))))));
                arr_35 [i_2] [i_2] [(_Bool)1] [7ULL] = (((-(var_9))) ^ ((~(((var_1) - (10644239196138910602ULL))))));
                arr_36 [i_2] [0] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_8] [i_2] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_19 [(unsigned char)0] [4LL] [i_6] [7ULL]))))) : (8388131342940846504ULL)))));
                arr_37 [i_2] [i_2] = max((((/* implicit */int) arr_5 [i_6 + 1])), (((((709207479) & (((/* implicit */int) arr_25 [i_2] [i_2] [(unsigned char)3])))) & (((/* implicit */int) (!(((/* implicit */_Bool) 0))))))));
                arr_38 [10ULL] [i_6] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (+(7802504877570640994ULL))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 11073736741329565802ULL)) || (((/* implicit */_Bool) 8388131342940846513ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6 + 2] [i_6 + 2] [i_6 + 1]))) : (((var_3) ? (((/* implicit */unsigned int) var_17)) : (var_14)))))) : ((-((-(0ULL)))))));
            }
            for (int i_9 = 4; i_9 < 10; i_9 += 3) 
            {
                arr_42 [9ULL] [i_2] [i_9] [8U] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_15 [(short)7] [i_9 - 2] [i_9 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(arr_13 [6ULL] [(short)2] [(signed char)0]))))))));
                arr_43 [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_18 [(signed char)6] [3ULL] [i_2] [i_9] [(_Bool)0])), (var_10)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) var_12))))))), (((((/* implicit */_Bool) arr_1 [i_6 - 1] [i_2])) ? (((/* implicit */int) arr_1 [i_6 - 1] [i_2])) : (((/* implicit */int) arr_17 [i_6 + 2] [i_2]))))));
                arr_44 [(unsigned char)6] [i_2] [(_Bool)0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) min(((unsigned char)243), ((unsigned char)250))))))) ? ((+(min((8388131342940846504ULL), (((/* implicit */unsigned long long int) arr_32 [i_2] [i_2] [3ULL] [(unsigned char)2])))))) : (7184476311500355941ULL)));
            }
        }
        var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (var_1) : (((/* implicit */unsigned long long int) 434086721))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : ((-(((/* implicit */int) arr_19 [(_Bool)0] [(unsigned short)2] [i_2] [i_2]))))))), (max((arr_31 [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) max((var_6), (var_3))))))));
        arr_45 [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) var_0);
        var_28 = ((/* implicit */unsigned long long int) var_17);
    }
}
