/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25052
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((var_3), (((min((((/* implicit */unsigned long long int) (unsigned short)31)), (18416984983882968136ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                    arr_7 [i_0] [i_0] [i_2 - 1] = ((/* implicit */signed char) ((unsigned char) var_13));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_0 + 2])), (var_10)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) / (29759089826583480ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65519))))));
                        var_16 ^= ((/* implicit */unsigned int) arr_5 [i_3] [i_3]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */long long int) var_3);
                            arr_15 [i_0] [(signed char)17] [i_0 + 1] [i_3] [i_0] [i_1] = ((/* implicit */_Bool) ((arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0 + 2] [i_0])) : (((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_0 + 3] [i_0]))));
                            var_18 += ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15101))) * (var_9))));
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] [i_2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31)) ? (29759089826583483ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15101)))))) || (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2 - 1])));
                            arr_17 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 29759089826583482ULL))) ? (((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18174914281952668589ULL))) : (((((/* implicit */unsigned long long int) var_4)) + (3988472687721704563ULL)))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_11))));
                            arr_20 [i_0 + 1] [i_1] [i_2 + 1] [i_0] [i_1] [i_0 + 1] = ((/* implicit */_Bool) var_12);
                            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_13 [i_3] [i_2 - 1] [i_2] [i_2] [i_2 + 1] [4LL] [i_3]), (((/* implicit */long long int) arr_5 [i_0 + 2] [i_3]))))) ? (arr_9 [i_3] [i_1] [i_2] [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_8)))))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_6 + 1]))))) + ((((_Bool)1) ? (((/* implicit */long long int) -1951073610)) : (var_4)))))) ? (((/* implicit */int) ((((/* implicit */int) (!(arr_10 [i_6])))) > (((/* implicit */int) var_8))))) : (min((((((/* implicit */_Bool) (short)6433)) ? (arr_21 [i_6] [i_6 + 1]) : (((/* implicit */int) arr_4 [i_6] [i_6] [i_6 + 1])))), (((/* implicit */int) (short)6433)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        {
                            arr_36 [i_7 + 1] [i_9] = ((/* implicit */short) ((signed char) var_13));
                            arr_37 [i_6] [i_6] [i_8] [i_9] [i_10] |= ((/* implicit */_Bool) var_9);
                            var_22 ^= arr_27 [i_8] [i_9] [i_10];
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            var_23 = ((/* implicit */int) arr_0 [i_6 + 1]);
                            var_24 = ((/* implicit */_Bool) arr_41 [i_6] [i_7 + 2] [i_7 + 2] [i_12 - 1] [i_7 + 2] [i_7 + 2]);
                        }
                        var_25 = ((/* implicit */_Bool) var_7);
                        /* LoopSeq 1 */
                        for (signed char i_14 = 1; i_14 < 12; i_14 += 3) 
                        {
                            var_26 += var_1;
                            var_27 *= ((/* implicit */int) ((((/* implicit */int) ((_Bool) (unsigned char)30))) < (((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (unsigned char)44)) : (-518940736)))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_0))));
                        }
                        var_29 = arr_12 [(signed char)14];
                    }
                } 
            } 
            arr_47 [i_6 + 1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((((/* implicit */int) (unsigned char)49)) - (37)))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_50 [i_6] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_15] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) min(((unsigned short)65527), (((/* implicit */unsigned short) arr_6 [i_6] [i_6] [i_15]))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_6 [i_6] [i_6 + 1] [i_15])))))));
            arr_51 [i_6] [i_15] [i_6 + 1] = ((/* implicit */long long int) ((_Bool) (unsigned char)76));
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_30 = ((/* implicit */signed char) max((var_30), ((signed char)-99)));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (2176451047254269482LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-29522)))));
                            var_32 ^= ((/* implicit */unsigned short) min((arr_9 [i_16] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]), (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_16] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])))));
                        }
                        for (int i_19 = 1; i_19 < 13; i_19 += 3) 
                        {
                            var_33 += ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_17])) >> (((((/* implicit */int) arr_49 [i_16] [i_15] [i_16])) - (24)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)15120))) : (((1041696513734569040LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))))))));
                            var_34 += ((/* implicit */long long int) ((unsigned char) min((arr_5 [i_6 + 1] [i_16]), (arr_5 [i_6 + 1] [i_16]))));
                        }
                        for (unsigned short i_20 = 1; i_20 < 12; i_20 += 2) 
                        {
                            var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_6 + 1] [i_15] [i_17] [9U])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6)));
                            arr_67 [i_17] [i_6 + 1] [i_6 + 1] [i_16] [i_17] [i_20 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(var_12))), (arr_19 [i_6 + 1] [i_15] [i_16] [i_17] [i_20])))) ? (arr_62 [i_6] [i_6] [i_15] [i_16] [i_16] [(signed char)12] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (-1041696513734569041LL) : (-1041696513734569041LL))))))));
                        }
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_31 [i_6 + 1]))) ? (((/* implicit */unsigned long long int) arr_13 [i_6] [i_15] [i_16] [i_16] [i_16] [i_17] [i_17])) : (var_9)));
                    }
                } 
            } 
        }
    }
    for (signed char i_21 = 0; i_21 < 16; i_21 += 3) 
    {
        arr_70 [i_21] |= ((var_4) == (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26023))) : (0U)))));
        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) max((((unsigned int) 0U)), (((/* implicit */unsigned int) ((arr_3 [(_Bool)1] [(_Bool)1] [(_Bool)1]) < (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_8)), ((signed char)51)))))))))))));
    }
    /* vectorizable */
    for (long long int i_22 = 0; i_22 < 23; i_22 += 4) 
    {
        var_38 += ((/* implicit */_Bool) 29759089826583480ULL);
        var_39 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_71 [i_22] [i_22])) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) var_13))))));
        /* LoopSeq 3 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_40 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
            /* LoopNest 3 */
            for (short i_24 = 1; i_24 < 21; i_24 += 2) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (long long int i_26 = 0; i_26 < 23; i_26 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_77 [i_22] [i_24 - 1] [i_24] [i_25]))));
                            var_42 = ((/* implicit */signed char) var_0);
                        }
                    } 
                } 
            } 
        }
        for (signed char i_27 = 4; i_27 < 21; i_27 += 4) 
        {
            var_43 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 129766094U)) > (var_4))))) * (var_9)));
            arr_87 [i_27] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_75 [i_27 + 2] [i_27] [i_22]) : ((-(var_6)))));
            var_44 = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) : (2192170674U));
        }
        for (signed char i_28 = 0; i_28 < 23; i_28 += 2) 
        {
            var_45 = ((/* implicit */unsigned short) var_8);
            var_46 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-100))));
            /* LoopNest 2 */
            for (unsigned int i_29 = 0; i_29 < 23; i_29 += 1) 
            {
                for (short i_30 = 0; i_30 < 23; i_30 += 4) 
                {
                    {
                        var_47 |= ((/* implicit */short) ((((/* implicit */int) arr_94 [i_22] [i_28] [i_28] [i_30])) * (((/* implicit */int) arr_94 [i_22] [i_22] [i_29] [i_30]))));
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_83 [i_22] [i_30] [i_29] [i_29] [i_30]))));
                    }
                } 
            } 
            arr_97 [i_22] [i_22] = ((/* implicit */_Bool) ((signed char) (signed char)-112));
        }
        arr_98 [i_22] [i_22] = ((long long int) 3163411006U);
    }
}
