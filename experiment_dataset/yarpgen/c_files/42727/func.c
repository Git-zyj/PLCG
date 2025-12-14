/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42727
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        arr_2 [i_0 + 2] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [7LL]);
        var_12 -= ((/* implicit */int) -3473825105216434508LL);
    }
    /* LoopSeq 4 */
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        arr_5 [i_1 - 1] = ((/* implicit */unsigned int) (short)-19403);
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((216172782113783808ULL) ^ (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((/* implicit */unsigned long long int) 3917070908136288580LL)) : (216172782113783789ULL)));
            var_14 = arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 2];
            var_15 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)13601))))) ? (4687904842016611495ULL) : (((/* implicit */unsigned long long int) var_0)))));
        }
        var_16 = ((/* implicit */long long int) (unsigned char)124);
        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (((((/* implicit */unsigned long long int) arr_4 [i_1])) + (216172782113783808ULL)))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((arr_3 [i_1]), (max((var_0), (arr_6 [i_1 + 1] [i_1] [i_1]))))))));
    }
    for (long long int i_3 = 4; i_3 < 21; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3 - 3])) ? (((/* implicit */unsigned long long int) arr_4 [i_3 - 2])) : (arr_11 [i_3 - 1])))) ? (((/* implicit */int) ((unsigned char) max((var_1), (((/* implicit */unsigned int) (signed char)-77)))))) : (((((/* implicit */int) (_Bool)0)) << (((min((((/* implicit */unsigned int) var_7)), (var_0))) - (2836854133U)))))));
        var_20 = ((/* implicit */unsigned char) var_2);
        var_21 = ((/* implicit */unsigned long long int) var_3);
        var_22 = ((/* implicit */long long int) ((((arr_6 [i_3 - 4] [(unsigned char)14] [i_3]) / (arr_3 [i_3 - 3]))) > (var_11)));
        /* LoopSeq 4 */
        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            arr_16 [i_4] [i_3 - 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_4] [(_Bool)1]))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 4; i_5 < 18; i_5 += 1) 
            {
                for (unsigned short i_6 = 3; i_6 < 19; i_6 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)255))));
                        arr_22 [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned long long int) max((-3917070908136288592LL), (((/* implicit */long long int) (unsigned short)31769))))) : (216172782113783817ULL)))));
                        arr_23 [i_5] [i_5] [i_5] [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((int) min((((/* implicit */int) arr_21 [i_3] [(unsigned char)15] [i_3] [i_3 + 1])), (var_7))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            arr_27 [i_4] [i_5] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 2776205239U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [4U]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -2001173992)))))));
                            var_24 = ((/* implicit */unsigned short) -2603340262646046228LL);
                        }
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) arr_13 [5U]);
                            var_26 = ((/* implicit */unsigned char) min((var_26), (arr_17 [(short)10] [(short)10] [i_4])));
                            arr_32 [i_3] [i_4] [i_5] [(unsigned short)9] [(unsigned short)9] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 2092108880U)) ? (var_11) : (((/* implicit */unsigned int) var_7))))));
                            var_27 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_8])) || (((/* implicit */_Bool) (unsigned short)8840)))) ? (-7352927353508954204LL) : (((/* implicit */long long int) 2198633775U))))) >= (min(((+(18446744073709551612ULL))), (((/* implicit */unsigned long long int) (unsigned char)132))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 2; i_9 < 19; i_9 += 3) 
                        {
                            var_28 &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_6 - 1] [i_4] [i_6 + 1] [i_6] [i_6] [i_9 + 2]))));
                            arr_36 [i_5] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32621))) : (2523485276U)))) % (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */unsigned long long int) arr_33 [i_3] [(unsigned char)1] [i_5] [i_5] [i_3] [i_3])) : (var_9))));
                            arr_37 [i_4] [i_4] [i_4] [i_9] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_26 [i_3] [i_4] [i_3] [i_6] [i_6] [14U]) : (arr_35 [i_4]))))));
                            var_29 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)4064))));
                        }
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            arr_41 [i_3] [i_5] [i_5] [i_5] [i_6] [i_5] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) (unsigned short)51052)))))));
                            var_30 = (+(2776205238U));
                            var_31 = ((/* implicit */int) (unsigned short)51052);
                        }
                    }
                } 
            } 
            var_32 = ((((/* implicit */_Bool) max(((+(arr_8 [i_3 + 1]))), (((/* implicit */unsigned long long int) arr_39 [(unsigned char)6] [i_3 + 1] [(unsigned char)6] [i_3 + 1] [i_4] [i_3] [(unsigned char)2]))))) ? (arr_6 [i_3] [i_4] [i_3]) : (max((((((/* implicit */_Bool) arr_14 [i_3 - 1] [21U] [i_4])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))))), (((/* implicit */unsigned int) arr_39 [20ULL] [i_3] [i_3 + 1] [i_4] [i_4] [i_4] [i_4])))));
        }
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                arr_46 [16] [16] [i_11] = ((/* implicit */unsigned int) arr_17 [i_3] [i_11] [i_11]);
                var_33 = ((/* implicit */unsigned char) min((var_33), (((unsigned char) var_9))));
            }
            var_34 = ((/* implicit */unsigned char) var_7);
            /* LoopSeq 1 */
            for (long long int i_13 = 3; i_13 < 21; i_13 += 2) 
            {
                arr_49 [i_3 + 1] [i_13] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_39 [i_3] [i_3] [i_13] [i_3] [i_11] [i_13] [i_11]))));
                var_35 = arr_40 [i_3 - 3] [i_13] [i_11] [i_11] [i_11] [i_3 - 3] [20U];
                arr_50 [i_3] [i_11] [i_13] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) min((((/* implicit */unsigned int) arr_20 [i_3] [i_11] [(unsigned short)0])), (arr_45 [i_3] [i_11] [i_3])))));
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((long long int) arr_33 [(unsigned char)18] [i_11] [i_11] [i_11] [i_3 - 1] [i_3 - 1])))) ? (((((18230571291595767799ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55825))))) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_13 [i_3])) & (arr_3 [i_3])))))) : (((/* implicit */unsigned long long int) (~(((arr_26 [19LL] [i_13] [i_13 + 1] [i_13] [i_3] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
            }
            var_37 = ((/* implicit */unsigned long long int) max((((signed char) ((((/* implicit */int) (unsigned short)51035)) << (((var_2) - (9070070060534441478LL)))))), (((/* implicit */signed char) (_Bool)1))));
            /* LoopSeq 2 */
            for (short i_14 = 4; i_14 < 20; i_14 += 3) 
            {
                arr_53 [i_3] [i_11] [i_14] [9U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_3] [i_3] [i_14 + 1])) || (((/* implicit */_Bool) var_7))));
                var_38 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) 0LL)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_45 [i_3] [i_3 - 2] [i_14 - 3])) : (((((/* implicit */unsigned long long int) var_5)) ^ (arr_43 [(unsigned short)15] [(unsigned short)15] [i_14 - 3])))))));
                var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (6955660377100872472ULL) : (((((/* implicit */_Bool) arr_24 [20LL] [i_3] [i_3] [i_3])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_11)))) ? (((unsigned int) arr_45 [i_3] [i_3] [i_3])) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2809273748U)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            }
            for (signed char i_15 = 3; i_15 < 20; i_15 += 3) 
            {
                var_40 -= ((/* implicit */_Bool) var_5);
                var_41 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((signed char) -4019316091930581381LL)), (((signed char) (unsigned char)255)))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned short) var_11);
            var_43 -= ((unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned char)8))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            var_44 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)55946))));
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                var_45 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) 4231800312U))))) ? (min((((/* implicit */long long int) arr_6 [i_18] [i_17] [i_3])), (var_2))) : (((arr_4 [(unsigned short)18]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3 - 3] [i_17] [(unsigned char)16] [i_3 - 3])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (var_7)))) || (((((/* implicit */_Bool) arr_13 [i_3])) && (((/* implicit */_Bool) -1699264914)))))))) : (((((/* implicit */_Bool) (unsigned short)51051)) ? (375609334U) : (1610612736U)))));
                var_46 -= ((/* implicit */unsigned int) arr_13 [i_18]);
                arr_67 [i_17] &= ((/* implicit */unsigned int) ((((long long int) arr_13 [i_17])) == (((/* implicit */long long int) (+(min((16383U), (var_11))))))));
                var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) arr_3 [i_17]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_19 = 2; i_19 < 19; i_19 += 2) 
                {
                    arr_71 [i_3 - 2] [(unsigned char)6] [i_18] [i_19 + 1] [2U] [(unsigned char)6] = var_8;
                    var_48 *= ((((/* implicit */_Bool) (-(var_6)))) ? (arr_35 [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_3 - 3] [i_19] [(_Bool)1]))));
                    var_49 = ((/* implicit */unsigned int) 9223372036854775807LL);
                    var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_25 [i_3] [i_19] [i_17] [i_17] [(unsigned short)0] [20ULL])))) : ((-(var_11))))))));
                }
            }
            var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)130)) ? (11931240499070025208ULL) : (((/* implicit */unsigned long long int) 17LL))));
            arr_72 [i_3 - 1] [i_17] [i_3 - 1] = ((/* implicit */int) min((1758372926U), (var_1)));
        }
    }
    /* vectorizable */
    for (unsigned short i_20 = 0; i_20 < 21; i_20 += 4) 
    {
        var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_20] [i_20] [i_20]))) & (var_9))) : (((/* implicit */unsigned long long int) 2513494270U))));
        var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_45 [i_20] [i_20] [i_20]))) ? (-19LL) : (((/* implicit */long long int) ((-1024) | (((/* implicit */int) var_4)))))));
        var_54 &= ((((/* implicit */_Bool) (unsigned short)51035)) ? (((/* implicit */int) ((-10LL) <= (((/* implicit */long long int) var_5))))) : (((((/* implicit */_Bool) (unsigned short)14500)) ? (((/* implicit */int) (unsigned short)37577)) : (252))));
        var_55 = ((/* implicit */unsigned short) (~(var_5)));
    }
    /* vectorizable */
    for (unsigned char i_21 = 4; i_21 < 15; i_21 += 1) 
    {
        var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) arr_17 [i_21] [i_21] [4LL])) : (((/* implicit */int) (short)-23563))))))));
        arr_78 [i_21] = (unsigned char)239;
    }
    var_57 &= ((/* implicit */unsigned long long int) var_6);
}
