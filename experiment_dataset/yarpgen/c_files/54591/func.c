/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54591
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [(_Bool)1] [i_2] [i_0] = arr_2 [i_0] [i_0];
                        var_11 = ((/* implicit */unsigned int) (-(arr_4 [i_0] [i_0] [i_0])));
                    }
                } 
            } 
            arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (short)-10294))) ? (4503599627370495ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (1331082696U) : (arr_3 [3LL] [3LL]))))));
        }
        for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                for (unsigned short i_6 = 4; i_6 < 11; i_6 += 3) 
                {
                    {
                        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -6247644062085670916LL)) % (max((1565036041369681489ULL), (((/* implicit */unsigned long long int) (short)-150)))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_22 [(short)6] [i_0] = ((/* implicit */unsigned long long int) 8577586693417769976LL);
                            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) -8577586693417769996LL))))))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                        {
                            var_14 = ((/* implicit */signed char) (~((~(((342740812U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_6 - 2] [i_0] [i_6 + 2])) ? (((/* implicit */int) ((short) arr_9 [i_4] [i_4 + 1] [i_6 - 1] [(signed char)5]))) : (((/* implicit */int) ((signed char) arr_8 [i_4 + 1] [i_6 + 2] [i_0] [i_6 + 2])))));
                            arr_26 [i_0] [i_4 - 1] [i_5] [i_0] [i_8] = ((/* implicit */unsigned int) arr_15 [i_5] [i_4 + 2]);
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [i_5] [i_8] [(unsigned short)11] [i_4 - 1])))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31))) - (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(signed char)12] [(signed char)12] [(_Bool)1] [10U])))));
                        }
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0]))) : (arr_1 [i_6 + 2])));
                            var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)141))));
                            var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((arr_24 [i_9] [(short)6] [i_5] [i_0] [12LL] [i_0]) || (((/* implicit */_Bool) arr_17 [i_0] [i_4 - 1] [i_5] [i_6 + 1] [i_9])))));
                            arr_30 [i_6] [i_0] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) ((long long int) arr_25 [i_0] [i_0] [i_6 - 1]));
                            var_20 = ((/* implicit */signed char) -1);
                        }
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
                        {
                            arr_33 [i_10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) 1331082696U))) - (((((/* implicit */_Bool) arr_5 [i_10] [i_10])) ? (arr_14 [i_0] [i_6 + 2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [(unsigned short)4])))))))) < (((((/* implicit */_Bool) 18442240474082181120ULL)) ? (18442240474082181121ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6 - 2] [i_0] [i_4 + 1])))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 1331082707U)) : (arr_21 [i_10] [4LL] [i_4])))) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)158))) : (arr_32 [i_0] [i_4 + 1] [i_5] [i_6] [(unsigned char)4] [i_6] [(short)12]))) : (((/* implicit */long long int) arr_17 [i_0] [i_4] [i_0] [i_5] [i_6 - 1]))))) ? (arr_29 [i_0] [i_4 + 1]) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))))))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_11 = 3; i_11 < 12; i_11 += 3) 
            {
                for (unsigned int i_12 = 1; i_12 < 11; i_12 += 2) 
                {
                    for (unsigned char i_13 = 3; i_13 < 12; i_13 += 4) 
                    {
                        {
                            arr_41 [i_0] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) -9223372036854775796LL)) ? (arr_31 [i_0] [i_13 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_4 + 2] [i_11 - 2] [i_4 + 2])))))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_27 [i_4 - 1] [i_4 - 1] [i_13 + 1] [i_11 - 3]))))))));
                        }
                    } 
                } 
            } 
        }
        var_23 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (long long int i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            var_24 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])), (var_9)))));
            /* LoopNest 2 */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_17 = 2; i_17 < 10; i_17 += 2) 
                        {
                            arr_53 [i_0] [i_16] [i_15] [i_15] [i_14] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(4146769614U)))) ? (var_2) : (((/* implicit */unsigned long long int) arr_38 [i_15] [i_15] [i_0] [i_15 - 1]))));
                            arr_54 [i_17 + 3] [i_17] [i_16] [i_0] [(unsigned char)7] [i_14] [i_0] = ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_15 - 1] [i_17] [i_15 - 1] [i_15 - 1])) ? (((/* implicit */unsigned long long int) ((long long int) arr_15 [i_0] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-141))) + (0ULL))));
                            var_25 += ((/* implicit */unsigned long long int) arr_47 [i_14] [i_17] [i_14]);
                        }
                        var_26 = min((((/* implicit */short) (_Bool)1)), (((short) ((arr_24 [(unsigned short)3] [5ULL] [i_14] [(unsigned short)3] [i_0] [i_0]) ? (4503599627370487ULL) : (((/* implicit */unsigned long long int) 4146769619U))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_27 += ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)2635)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_52 [i_18] [i_18] [i_18] [i_0] [i_0])) : ((+(4503599627370506ULL))));
            /* LoopNest 3 */
            for (short i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                for (unsigned long long int i_20 = 1; i_20 < 12; i_20 += 3) 
                {
                    for (long long int i_21 = 1; i_21 < 10; i_21 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) ((int) arr_59 [i_20 + 1] [i_20 - 1] [i_20 - 1] [i_0]));
                            arr_68 [i_21] [i_0] [11LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_59 [i_20] [i_20 + 1] [i_20] [i_0])) ? (var_1) : (var_6)));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 4) 
        {
            var_29 = ((/* implicit */unsigned int) arr_4 [i_0] [i_22] [i_0]);
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_36 [i_0] [2ULL]))));
            /* LoopNest 2 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                for (long long int i_24 = 1; i_24 < 11; i_24 += 3) 
                {
                    {
                        var_31 += ((/* implicit */unsigned int) var_5);
                        arr_79 [i_0] [i_22] [i_23] [i_0] [i_22] = ((/* implicit */signed char) ((arr_13 [i_24 + 2] [i_24 + 2] [i_22]) | (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_22] [i_22] [i_22] [i_22] [i_0] [i_0])))));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_52 [i_24 + 2] [i_24 + 2] [i_24 + 2] [i_24 + 2] [i_24 + 1])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_25 = 4; i_25 < 12; i_25 += 2) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) arr_37 [i_0] [i_22] [i_0] [i_26]))));
                        arr_84 [i_0] [i_0] [i_22] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_15 [i_26] [i_22]))));
                        arr_85 [i_0] [i_22] [i_22] [i_0] = ((/* implicit */unsigned long long int) 8577586693417769976LL);
                    }
                } 
            } 
        }
    }
    for (short i_27 = 1; i_27 < 24; i_27 += 2) 
    {
        /* LoopNest 3 */
        for (short i_28 = 2; i_28 < 23; i_28 += 4) 
        {
            for (long long int i_29 = 0; i_29 < 25; i_29 += 3) 
            {
                for (int i_30 = 0; i_30 < 25; i_30 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_31 = 1; i_31 < 23; i_31 += 4) 
                        {
                            var_34 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(arr_89 [i_27] [i_28 + 2])))) ? (((/* implicit */unsigned long long int) 915448911U)) : (((((/* implicit */_Bool) 4294967295LL)) ? (8166641667944932350ULL) : (((/* implicit */unsigned long long int) 7765875691303997003LL))))))));
                            arr_98 [19ULL] [i_29] [i_29] [i_30] [i_31] = (((!((_Bool)1))) ? (((/* implicit */long long int) 645475596U)) : (((long long int) var_2)));
                        }
                        var_35 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) min(((unsigned char)187), (((/* implicit */unsigned char) var_3))))) == (((/* implicit */int) var_3))))) % (arr_90 [i_29])));
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) max(((-(((/* implicit */int) arr_93 [i_27] [(_Bool)1] [i_27] [i_27])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-151)) : (((/* implicit */int) arr_93 [0] [14U] [14U] [i_27]))))) ? (((((/* implicit */int) arr_91 [i_27] [14ULL] [i_27] [(_Bool)1])) | (((/* implicit */int) arr_91 [i_27] [(short)4] [20LL] [i_27])))) : (((((/* implicit */_Bool) 268435455)) ? (((/* implicit */int) (short)-1127)) : (((/* implicit */int) arr_96 [i_27 - 1] [i_27] [i_27])))))))))));
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (~(((/* implicit */int) max((var_0), (((/* implicit */unsigned char) arr_88 [i_27] [i_27] [i_27]))))))))));
    }
    var_38 = ((/* implicit */unsigned long long int) ((signed char) ((min((var_1), (((/* implicit */long long int) var_0)))) >> (((/* implicit */int) (_Bool)1)))));
    var_39 = ((/* implicit */signed char) -16);
}
