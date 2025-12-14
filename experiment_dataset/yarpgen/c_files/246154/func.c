/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246154
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_4] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((arr_11 [i_0] [i_0] [i_0] [i_3] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 + 1])))))) & (((/* implicit */int) ((((/* implicit */int) arr_4 [i_3 - 1])) == (((/* implicit */int) arr_4 [i_3 + 3])))))));
                            var_13 = ((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3] [i_0] [i_4] [(unsigned short)6]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                var_14 += 1117140317U;
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_5]))));
                var_16 = ((/* implicit */long long int) (((-(3726810926U))) >> (((((3177826972U) << (((var_3) - (5252121688627661333ULL))))) - (2801795050U)))));
                arr_18 [i_0] [(unsigned char)4] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)8] [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_8 [i_5] [i_1] [i_1] [i_1] [i_0] [i_0]))));
            }
            var_17 -= ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1]);
            var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)-26944))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36331))) : (1117140323U)))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_10 [9] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61754))) : (arr_11 [i_0] [i_0] [i_1] [i_0] [0U]))), (min((((/* implicit */long long int) arr_2 [i_0])), (var_5))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            var_19 -= ((/* implicit */unsigned char) max((max((((/* implicit */int) (unsigned char)61)), (1412339335))), (((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [i_0])) <= (max((((/* implicit */unsigned int) (short)-31742)), (1117140327U))))))));
            arr_21 [i_0] [i_6] [i_6] = ((/* implicit */int) (((+(min((((/* implicit */unsigned long long int) (unsigned short)61736)), (2305843009213693952ULL))))) ^ (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned char)122)))))))));
            var_20 = max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_6] [(unsigned char)5]))) : (1117140323U))))), (min((((((/* implicit */_Bool) 1117140321U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7132))) : (var_3))), (((/* implicit */unsigned long long int) ((unsigned char) var_7))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_7 = 2; i_7 < 11; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                var_21 = ((/* implicit */long long int) 1117140303U);
                /* LoopSeq 4 */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                {
                    var_22 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)15528))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((unsigned short) -201678028)))));
                }
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) var_3);
                    var_25 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) > (((/* implicit */int) ((signed char) var_12)))))), (((arr_27 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_3))))))));
                    var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_6 [i_7] [i_7 - 2] [i_7 + 1])) * (((/* implicit */int) arr_6 [i_7] [i_7] [i_7 - 2]))))));
                    var_27 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)32767)) == (((/* implicit */int) (unsigned char)6)))) ? (min((-5185811470187561330LL), (((/* implicit */long long int) arr_10 [i_7] [i_7 - 2] [i_7])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_7] [i_7 - 1] [i_7])) ? (((/* implicit */int) arr_15 [i_8] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_10 [i_7] [i_7 - 2] [i_7])))))));
                }
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned int) arr_34 [i_11] [i_11] [i_8] [(unsigned char)11] [(unsigned char)11]);
                    var_29 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((1126260473) != (((/* implicit */int) (unsigned short)27758)))))));
                    arr_38 [i_0] [i_0] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_32 [i_7 + 1] [i_7 - 2])))))));
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((min(((~(((/* implicit */int) (unsigned char)9)))), ((~(((/* implicit */int) (unsigned short)16383)))))) <= (((int) 1117140323U)))))));
                    var_31 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [4LL] [i_7 - 1])) ? (((/* implicit */int) arr_8 [i_0] [i_7] [i_7] [i_7] [i_7] [i_7 + 1])) : (((/* implicit */int) arr_8 [(signed char)0] [i_7] [i_7] [i_7] [i_7] [i_7 - 1]))))) >= (var_2)));
                }
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37765))) : (1117140316U)))));
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)202)) ? (3032739041U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27751))))))));
                    arr_41 [i_0] = ((3177826972U) << (((/* implicit */int) (_Bool)1)));
                }
            }
            /* vectorizable */
            for (unsigned short i_13 = 3; i_13 < 11; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_14 = 1; i_14 < 10; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        {
                            arr_51 [i_0] [i_15] [i_14] = ((/* implicit */unsigned short) (-(arr_5 [i_14])));
                            arr_52 [i_0] [i_7] [i_7 - 2] [i_14 + 2] [0LL] [i_13] [i_14] = ((/* implicit */unsigned short) (+(var_5)));
                            var_34 = ((/* implicit */unsigned char) arr_2 [i_15]);
                            var_35 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [11U] [i_13] [i_14 + 2] [(unsigned short)3]))))) * (((((/* implicit */_Bool) arr_15 [i_7] [i_14] [i_15])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)7))))));
                        }
                    } 
                } 
                var_36 += ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)79))));
            }
            var_37 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_47 [i_7] [i_7 + 1] [i_7 + 1] [i_7 - 2]), (arr_47 [(unsigned char)9] [i_7 + 1] [i_7 + 1] [(unsigned short)7])))) ? (((((/* implicit */_Bool) arr_42 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_7] [i_7 - 1] [i_7 + 1] [i_7]))) : (arr_42 [(unsigned short)7] [i_7] [i_7 - 1] [i_7 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_7 - 2] [i_7 - 1])) || (((/* implicit */_Bool) arr_42 [i_7] [i_7] [i_7 + 1] [i_7 - 2]))))))));
        }
        for (unsigned char i_16 = 2; i_16 < 11; i_16 += 2) /* same iter space */
        {
            var_38 = ((/* implicit */long long int) (-((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_0] [i_16 - 1] [i_0] [i_16] [6] [i_0])) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (_Bool)1))))) : ((+(var_1)))))));
            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (-((-(arr_23 [i_16 + 1] [i_16 - 2]))))))));
        }
    }
    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 3) 
    {
        arr_57 [i_17] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) arr_55 [i_17]))));
        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-91)))))));
        var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) (((-(3177826980U))) * (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_55 [(unsigned short)8])) : (((/* implicit */int) arr_55 [i_17]))))))))))));
        arr_58 [i_17] [i_17] = ((/* implicit */unsigned int) ((-4892731430526610113LL) / ((+(min((-5133014550834400393LL), (((/* implicit */long long int) 1117140313U))))))));
    }
    var_43 = var_8;
}
