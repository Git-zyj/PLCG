/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49844
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
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) var_1)), ((~(((/* implicit */int) var_12))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_22 = ((/* implicit */long long int) var_10);
            /* LoopSeq 1 */
            for (int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                /* LoopSeq 3 */
                for (int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_3] [(unsigned char)14])) ? ((+(2708742774U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    arr_11 [i_3] [i_3] [i_2] = ((/* implicit */_Bool) var_5);
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_1] [i_2 - 3] [i_3] [i_4] [i_2] [i_1] = ((/* implicit */long long int) 1586224511U);
                        var_24 += ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 1586224522U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_1 [i_0]))));
                    }
                    for (int i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        var_25 = ((((/* implicit */_Bool) arr_14 [i_5 + 1] [i_2 - 3] [i_2 - 3])) ? (((/* implicit */int) arr_6 [i_5 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 2])) : (((/* implicit */int) arr_6 [i_5 - 1] [i_2 + 1] [i_2] [i_3])));
                        arr_20 [i_0] [i_1] [i_3] [i_3] [i_5] [i_2] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_2 - 2] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (((/* implicit */unsigned int) arr_12 [i_2])) : (2708742800U)))) : (148843042470951627LL)));
                    }
                    for (int i_6 = 1; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        var_26 *= ((/* implicit */_Bool) var_15);
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0]))));
                        arr_24 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_1] [i_6] [7]);
                        arr_25 [i_0] [i_1] [i_2] [i_3] [(signed char)20] = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6 + 1] [i_6] [i_6] [i_6] [i_6 - 1] [i_1] [i_1])) ? (arr_23 [i_6] [i_6] [i_6 + 1] [(signed char)3] [i_6 + 1] [i_6] [(signed char)3]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    }
                    arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_2] [i_3] [i_0] [i_0] [i_1])))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_3] [i_2] [i_3] [i_1] [15U] [10U])))));
                }
                for (int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                {
                    arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_13 [i_2 + 2] [i_2 + 2] [i_2 - 3] [i_2 - 1] [i_2 + 2] [i_2 + 1]) ? (((/* implicit */int) arr_13 [i_2 - 2] [i_2 + 2] [i_2 - 2] [i_2 - 1] [i_2 - 3] [i_2 + 1])) : (((/* implicit */int) arr_14 [i_2 + 1] [i_2 + 2] [i_2 + 2]))));
                    arr_30 [i_0] [i_1] [i_7] = ((/* implicit */_Bool) (-(((long long int) var_14))));
                    /* LoopSeq 4 */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        var_28 *= ((/* implicit */short) arr_4 [i_0] [i_0]);
                        arr_34 [i_0] [i_1] [i_7] = ((/* implicit */_Bool) arr_9 [i_0] [i_1] [0U] [i_7] [i_0] [i_7]);
                        var_29 ^= (((!(((/* implicit */_Bool) 1586224511U)))) ? (((((/* implicit */_Bool) 2708742785U)) ? (((/* implicit */unsigned int) 67108864)) : (2708742800U))) : (((((/* implicit */_Bool) (signed char)-31)) ? (1586224511U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
                        var_30 |= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
                        var_31 = ((/* implicit */signed char) ((arr_17 [i_0] [i_1] [i_1] [i_2 - 3] [i_7] [i_7] [i_1]) ? (((/* implicit */int) arr_17 [i_2 - 2] [i_2] [i_2] [i_2 - 3] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_17 [i_2 - 1] [i_2] [i_2] [i_2 - 2] [i_2] [i_2] [i_8]))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        arr_37 [i_0] [i_1] [i_2] [i_1] [i_9] = 1586224498U;
                        arr_38 [i_9] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2 - 3] [i_2] [i_2])) ? (arr_27 [i_0] [i_2 + 1] [i_2]) : (arr_27 [i_0] [i_2 + 2] [i_2 + 2])));
                        var_32 = ((/* implicit */int) (-(arr_18 [i_0] [i_1] [i_2 - 1] [i_7] [i_1])));
                        arr_39 [i_0] [i_9] [i_7] [(short)16] [i_2 - 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 1586224514U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_9] [i_1] [i_2] [i_7])))) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_0] [i_7] [i_9]))));
                    }
                    for (signed char i_10 = 4; i_10 < 19; i_10 += 1) 
                    {
                        arr_42 [i_10] [i_1] [i_2 + 1] [i_7] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (!(arr_13 [i_2] [i_2] [i_2 + 1] [i_10 - 2] [i_2] [i_10 + 1])));
                        arr_43 [i_0] [i_1] [i_1] [i_10] [i_10] = ((/* implicit */short) arr_27 [i_0] [i_0] [i_0]);
                        var_33 = ((/* implicit */signed char) ((short) 2147483647));
                    }
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        var_34 = ((/* implicit */_Bool) arr_12 [i_0]);
                        var_35 ^= ((/* implicit */_Bool) 973057758);
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_2 - 1]))) : (1586224495U)));
                    }
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)6)) - ((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1] [i_2] [i_7])))))))));
                }
                for (int i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
                {
                    var_38 += ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)16))));
                    arr_48 [i_12] [i_1] [i_2] [i_12] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-64))));
                }
                arr_49 [i_2 - 2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) 2708742781U);
            }
            /* LoopSeq 1 */
            for (int i_13 = 1; i_13 < 20; i_13 += 4) 
            {
                var_39 *= ((/* implicit */short) arr_8 [i_13] [i_1] [i_1] [3LL] [i_0] [i_0]);
                var_40 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            }
            arr_54 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) 1586224489U));
        }
        var_41 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0])))) ? (min((((/* implicit */long long int) ((short) 2708742785U))), ((-(arr_47 [(unsigned short)2] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) min((((/* implicit */long long int) (-(1586224502U)))), ((~(max((arr_52 [i_0] [i_0] [i_0] [i_0]), (554153860399104LL))))))))));
    }
    for (short i_14 = 0; i_14 < 20; i_14 += 2) /* same iter space */
    {
        var_43 += ((/* implicit */unsigned long long int) -7988067020796421232LL);
        var_44 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3953950148U)) ? (2708742807U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-47)), (arr_56 [i_14]))))) : (((((/* implicit */_Bool) arr_45 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_14] [i_14] [10U] [i_14]))) : (1586224531U)))))));
        var_45 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 1586224522U)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)239)))));
        arr_59 [i_14] [i_14] = ((/* implicit */short) max(((-(((/* implicit */int) arr_50 [i_14] [(_Bool)1] [i_14] [i_14])))), ((-((~(((/* implicit */int) arr_6 [i_14] [i_14] [i_14] [i_14]))))))));
        arr_60 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4398029733888LL)) ? (((/* implicit */int) arr_14 [i_14] [(short)1] [i_14])) : (130023424)))) ? (3955417887U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)122)))))));
    }
    for (short i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
    {
        arr_64 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_45 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) : (((/* implicit */int) arr_33 [i_15] [i_15] [i_15] [i_15] [i_15]))))) ? (((/* implicit */unsigned long long int) (-(((int) 2147483644))))) : (arr_5 [i_15])));
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            for (int i_17 = 2; i_17 < 19; i_17 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_18 = 3; i_18 < 17; i_18 += 2) /* same iter space */
                    {
                        var_46 = ((signed char) (~(((((((/* implicit */int) var_2)) + (2147483647))) >> (((134201344U) - (134201339U)))))));
                        var_47 = ((((/* implicit */_Bool) (unsigned char)236)) ? (4398029733888LL) : (((/* implicit */long long int) ((/* implicit */int) (short)3292))));
                    }
                    for (unsigned short i_19 = 3; i_19 < 17; i_19 += 2) /* same iter space */
                    {
                        arr_77 [i_15] [i_16] [i_17 - 1] [i_15] [i_17] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        var_48 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (short)-32759)), (arr_55 [i_15]))), (((/* implicit */unsigned long long int) (~(4503599627370492LL))))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_15] [9LL] [i_15] [i_17] [9LL]))) : (arr_16 [i_19] [i_16] [i_17] [i_19] [i_16] [i_15] [i_15])))))) : (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)1)), (204548512)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-123))))) : (arr_66 [i_17 - 1])))));
                    }
                    for (unsigned short i_20 = 3; i_20 < 17; i_20 += 2) /* same iter space */
                    {
                        arr_80 [i_15] [i_16] [i_17] [i_15] = ((/* implicit */int) var_19);
                        var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -13LL)) ? (((/* implicit */int) arr_17 [i_15] [i_17] [i_17 - 2] [i_20 + 3] [i_20 - 3] [i_20] [i_20 + 1])) : (((/* implicit */int) arr_17 [i_15] [i_15] [i_17 - 2] [i_20] [i_20 - 2] [i_17 - 2] [i_20 - 1])))))))));
                        var_50 += ((/* implicit */long long int) max((((/* implicit */int) var_8)), ((+(((/* implicit */int) (unsigned short)65532))))));
                    }
                    arr_81 [i_15] [i_15] [i_17] = ((/* implicit */signed char) arr_1 [i_15]);
                }
            } 
        } 
        arr_82 [i_15] = ((/* implicit */int) ((short) 4398029733888LL));
        arr_83 [i_15] = ((/* implicit */unsigned char) 204548512);
    }
    for (unsigned char i_21 = 2; i_21 < 17; i_21 += 1) 
    {
        var_51 |= ((/* implicit */long long int) 3955417894U);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_22 = 0; i_22 < 21; i_22 += 4) 
        {
            /* LoopNest 2 */
            for (short i_23 = 2; i_23 < 19; i_23 += 1) 
            {
                for (int i_24 = 0; i_24 < 21; i_24 += 2) 
                {
                    {
                        var_52 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_33 [i_21] [i_22] [8] [8] [8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_21 + 2] [i_22] [i_23 + 1] [i_22] [i_24]))) : (arr_41 [17ULL] [i_22] [i_21 + 4])))));
                        arr_94 [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3565238103U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32758))) : (((((/* implicit */_Bool) 3955417894U)) ? (arr_52 [i_21] [i_22] [i_23] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_21 + 2] [i_22] [i_22] [i_22] [i_22] [i_24])))))));
                    }
                } 
            } 
            arr_95 [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))) : (1586224529U)));
            /* LoopNest 2 */
            for (signed char i_25 = 0; i_25 < 21; i_25 += 1) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        arr_103 [i_21 + 3] [i_22] [i_21 + 3] [i_21] = ((/* implicit */signed char) (unsigned short)43563);
                        arr_104 [i_21 - 1] [i_22] [i_21] [i_25] [i_22] [(unsigned char)15] = ((/* implicit */unsigned char) ((arr_52 [(short)13] [i_22] [i_22] [i_22]) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                    }
                } 
            } 
        }
        arr_105 [i_21] = ((/* implicit */_Bool) (+((-(var_11)))));
    }
    var_53 = ((/* implicit */_Bool) (~((((((-(((/* implicit */int) var_5)))) + (2147483647))) >> ((((~(1610612736))) + (1610612743)))))));
}
