/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53278
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
    var_15 = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) var_13)) ? (484175945067360792ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) (signed char)-1)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            arr_6 [i_0] [i_1 - 1] = max((((/* implicit */unsigned long long int) arr_1 [i_1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1]))) & (arr_0 [i_1 + 1] [i_1 + 1]))));
            var_16 = ((/* implicit */unsigned long long int) var_12);
        }
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0])))))));
    }
    for (signed char i_2 = 2; i_2 < 23; i_2 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 2; i_3 < 23; i_3 += 3) 
        {
            var_18 = ((signed char) arr_10 [i_2 - 2]);
            var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 17264454959056070756ULL)) ? (((/* implicit */int) arr_7 [i_3 - 2])) : (((/* implicit */int) arr_7 [i_3 - 1]))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_2 - 1] [i_3 + 1] [i_3 + 1])))))));
            var_21 = ((/* implicit */unsigned short) arr_13 [i_3 - 2] [i_3 - 2]);
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)6995)) : (((/* implicit */int) (signed char)63))));
        }
        arr_14 [i_2] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 + 1] [i_2 + 1])) ? (arr_13 [(signed char)19] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)27)))))))) ? (min((max((12562352270020185954ULL), (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)127))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((var_8), ((signed char)35))), (var_4))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 1; i_5 < 23; i_5 += 2) 
            {
                var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (signed char)113))));
                /* LoopSeq 4 */
                for (signed char i_6 = 3; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                    {
                        var_24 *= ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-1))))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((unsigned long long int) arr_25 [i_2] [i_6] [i_6 - 3] [i_6 - 2] [i_5 - 1] [i_2] [i_2])))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_4])))));
                        var_27 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (arr_13 [i_2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-55)))))));
                    }
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_6] [i_6 - 2] [i_6 - 2] [i_6] [(signed char)14])) ? (((/* implicit */int) arr_23 [i_6 + 2] [i_6 + 2] [i_6 - 2] [i_6 - 3] [i_4])) : (((/* implicit */int) (unsigned short)54844))));
                        arr_29 [i_4] [i_4] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -8784997034579252510LL))));
                    }
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) (+(arr_20 [i_6 - 1] [i_6 + 2] [i_5 + 1] [i_6])));
                        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_2 - 2]))));
                        var_31 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (signed char)-41))))));
                    }
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_4] [i_4]))));
                        var_33 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_27 [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)61096)) : (((/* implicit */int) (signed char)-1)))) != (((/* implicit */int) (unsigned short)23537))));
                    }
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_2 + 1])) ? (((((/* implicit */_Bool) arr_31 [i_2] [i_5])) ? (arr_20 [i_2] [(signed char)14] [i_5] [i_6 - 1]) : (9223372036854775807LL))) : (-6642552746957576626LL)));
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_6 + 2] [i_6 - 2] [i_6 - 3] [(signed char)21])) ? (((/* implicit */int) arr_26 [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6 - 1])) : (((/* implicit */int) arr_26 [i_6 + 2] [i_6 - 1] [i_6 + 2] [i_6 - 2]))));
                }
                for (signed char i_11 = 3; i_11 < 22; i_11 += 4) /* same iter space */
                {
                    arr_39 [i_4] [i_4] [i_5 - 1] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) <= (((((/* implicit */_Bool) arr_28 [i_2] [i_4] [i_5] [i_5] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_4]))) : (268435455ULL)))));
                    var_36 = ((/* implicit */signed char) ((var_0) / (arr_31 [i_2 - 2] [i_5 + 1])));
                    var_37 = ((/* implicit */unsigned long long int) ((signed char) arr_18 [4ULL] [i_5 + 1] [i_5]));
                    arr_40 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_2] [i_11 - 1] [i_4] [i_4] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_2] [i_11 - 1] [i_5] [i_11 - 3] [i_4]))) : (429996914738305053LL)));
                    var_38 = (unsigned short)51429;
                }
                for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_10 [i_5]))))) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_11 [i_2 - 2] [i_2 + 1] [i_2 - 2]))));
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_32 [i_2] [i_2] [18LL] [i_2] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-104)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        var_41 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_13] [i_5] [i_5 - 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (arr_45 [i_12] [i_12])));
                        var_42 = ((/* implicit */signed char) 8388607LL);
                    }
                    var_43 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) (signed char)-43))));
                }
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [14LL] [14LL] [i_4] [i_5] [i_14])) ? (arr_19 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126)))))) ? (((/* implicit */int) arr_47 [i_5 + 1] [i_5 - 1] [i_5])) : (((/* implicit */int) arr_46 [i_4] [i_4]))));
                    arr_48 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_2] [i_4] [i_2] [i_4] [i_5]))))) ? (((/* implicit */int) arr_8 [i_2 - 1])) : (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_36 [(unsigned short)22] [i_2 + 1] [i_5] [(signed char)11] [i_2])) : (((/* implicit */int) (signed char)-1))))));
                }
            }
            var_45 = ((/* implicit */unsigned long long int) var_11);
            arr_49 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_2 + 1] [i_4])) ? (((/* implicit */int) arr_42 [(signed char)14] [(signed char)14] [22ULL] [i_4] [i_4] [i_4])) : (((/* implicit */int) (unsigned short)1))));
        }
        for (signed char i_15 = 1; i_15 < 21; i_15 += 4) 
        {
            var_46 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_21 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13288246031786305690ULL)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)-40))))) : (min((5821370218581706217ULL), (217474236671062357ULL))))), (max((max((((/* implicit */unsigned long long int) arr_47 [(signed char)20] [i_2] [i_2])), (arr_16 [i_2 + 1]))), (((unsigned long long int) var_5))))));
            var_47 ^= ((/* implicit */long long int) (+(((/* implicit */int) max((min((arr_28 [i_2 - 2] [i_15] [(signed char)9] [1ULL] [i_2 - 2]), ((signed char)(-127 - 1)))), ((signed char)127))))));
            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))) : (14551748333142881222ULL)));
            var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(27551672862546724LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_15])) && ((!(((/* implicit */_Bool) arr_24 [i_15] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1]))))))) : (((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) arr_8 [i_2 - 2])) : (((/* implicit */int) arr_7 [i_2 - 2]))))));
        }
    }
    var_50 -= max((((((unsigned long long int) (unsigned short)23655)) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) min((var_3), (var_9))))))));
}
