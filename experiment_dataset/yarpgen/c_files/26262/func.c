/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26262
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
    var_15 ^= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2]))) >= (arr_9 [i_0] [(unsigned short)10] [i_1 + 3] [i_1])))) : (((/* implicit */int) (_Bool)0))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (int i_4 = 4; i_4 < 15; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] [i_4] [(short)12] |= ((/* implicit */short) ((((/* implicit */int) arr_6 [i_0 + 3] [i_0 - 1])) >> (((((/* implicit */int) arr_2 [i_0] [i_2 + 1])) + (30535)))));
                            var_17 |= ((/* implicit */signed char) var_7);
                        }
                    } 
                } 
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_18 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */int) arr_12 [i_0 + 1] [i_1] [i_5 - 1] [(_Bool)1] [i_0] [(_Bool)1] [(signed char)5]);
                var_18 = ((/* implicit */int) (-(arr_9 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5])));
            }
            var_19 *= var_1;
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_21 [i_0] [i_6] [15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (short)1526)))))));
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                arr_26 [i_0] [i_7] [i_7] [i_0 + 3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)12)) <= (((/* implicit */int) (signed char)74))))) ^ (arr_11 [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0] [i_0] [i_6])));
                arr_27 [i_0] [(short)4] |= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)8] [i_0] [i_6] [i_7] [i_6])) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) var_11))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_0 + 2] [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_3 [(short)10])))) : (((/* implicit */int) (_Bool)0))));
            }
            for (int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [4LL])) && (((/* implicit */_Bool) (short)-11884)))))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_6])) : (((/* implicit */int) var_1))));
            }
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) ((arr_23 [i_0] [i_0 - 1] [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_9]))));
                        arr_35 [i_0] [i_9] [i_9] [i_9] = (+(149829015));
                    }
                } 
            } 
        }
        var_24 = ((/* implicit */unsigned short) ((signed char) arr_13 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0 + 3]));
    }
    /* LoopSeq 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)56))))))) ? ((~(((/* implicit */int) arr_7 [i_11] [i_11])))) : (((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)1)), (var_5))), (((/* implicit */unsigned short) arr_7 [i_11] [i_11])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_12 = 4; i_12 < 16; i_12 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                var_26 = arr_37 [i_11];
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)2507)) ? (((((/* implicit */_Bool) arr_38 [i_13])) ? (((/* implicit */int) (short)-12397)) : (arr_17 [(short)6] [i_11] [i_11] [i_11]))) : (((/* implicit */int) var_6))));
                /* LoopSeq 1 */
                for (signed char i_14 = 1; i_14 < 16; i_14 += 3) 
                {
                    var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [(signed char)2] [i_12 - 2]))));
                    var_29 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)501)) : (((/* implicit */int) (signed char)-12))))));
                    /* LoopSeq 4 */
                    for (short i_15 = 3; i_15 < 13; i_15 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_11])) ? (arr_38 [i_14 + 1]) : (((/* implicit */int) var_12))));
                        var_31 = ((((/* implicit */_Bool) arr_25 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (short)7756))) : (arr_25 [i_11]));
                    }
                    for (long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                    {
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned short)30117))) ? (arr_41 [i_12 - 4] [i_14 - 1]) : (((/* implicit */int) (signed char)-74))));
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_13 [i_12 - 3] [i_14 - 1] [i_11] [i_11] [i_13] [i_12])) : (((/* implicit */int) var_3))));
                        arr_53 [i_11] [i_12 - 1] [i_16] [i_14] &= ((/* implicit */unsigned short) (((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 17; i_17 += 4) 
                    {
                        var_34 = ((/* implicit */long long int) arr_19 [i_11] [i_12] [i_12]);
                        var_35 = ((/* implicit */int) ((long long int) -7032199012502013593LL));
                    }
                    for (signed char i_18 = 1; i_18 < 14; i_18 += 2) 
                    {
                        var_36 = (!(((/* implicit */_Bool) (unsigned short)17077)));
                        var_37 |= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (signed char)23)) : (arr_11 [i_18 - 1] [i_18] [i_18] [i_14 + 1] [(short)8] [(short)8])));
                        arr_59 [i_11] [i_11] [i_11] [i_14] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) arr_22 [i_14 - 1] [i_12] [i_13] [i_14 - 1])) : (arr_11 [i_11] [i_12 - 2] [i_13] [i_14 - 1] [i_18] [i_14 - 1])));
                        var_38 = ((/* implicit */_Bool) arr_43 [i_11] [(_Bool)1] [i_13]);
                    }
                }
            }
            for (int i_19 = 0; i_19 < 17; i_19 += 2) 
            {
                arr_64 [i_11] [i_12] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) : ((-(var_0)))));
                var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (!(((/* implicit */_Bool) (~(557423789)))))))));
                var_40 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [(short)16] [i_11])) ? (((/* implicit */int) (short)-26851)) : (((/* implicit */int) (short)-32763))))));
            }
            /* LoopNest 3 */
            for (unsigned short i_20 = 0; i_20 < 17; i_20 += 4) 
            {
                for (int i_21 = 0; i_21 < 17; i_21 += 4) 
                {
                    for (short i_22 = 2; i_22 < 16; i_22 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_12 - 1] [i_12 - 2])) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) arr_34 [i_12 - 2] [i_12 + 1]))));
                            arr_72 [i_11] [i_12] [i_20] [i_11] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_22 - 2])) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (unsigned short)63744))));
                            var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_11] [i_20])) + (((/* implicit */int) (signed char)-15))))) ? (((/* implicit */int) (short)4242)) : (((/* implicit */int) (signed char)-105)))))));
                            var_43 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_48 [i_11] [i_12] [i_20] [i_21] [i_22 - 2] [i_22])) : (((/* implicit */int) var_6)))) << (((((((/* implicit */int) arr_30 [i_22 + 1] [i_12 + 1] [i_11])) + (31436))) - (15)))));
                        }
                    } 
                } 
            } 
        }
        var_44 |= ((/* implicit */short) (-(((/* implicit */int) arr_51 [i_11] [i_11] [i_11] [i_11]))));
    }
    for (signed char i_23 = 2; i_23 < 9; i_23 += 3) 
    {
        arr_75 [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((arr_24 [i_23 - 2]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)4365)))), (((/* implicit */int) arr_68 [i_23 + 1] [i_23 - 1] [i_23 - 1] [i_23] [i_23]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [(signed char)14])) ? (-600985332) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) arr_20 [i_23] [i_23] [i_23]))))))) : (max((((/* implicit */int) max(((short)27440), (var_8)))), (((var_10) * (((/* implicit */int) arr_6 [i_23] [i_23 - 2]))))))));
        arr_76 [i_23] = ((max((max((((/* implicit */long long int) arr_73 [i_23 + 1] [(unsigned short)7])), (var_4))), (((/* implicit */long long int) (signed char)-24)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_39 [(unsigned short)14] [i_23]), (((/* implicit */long long int) (unsigned short)23521))))) ? (((/* implicit */int) arr_40 [i_23 - 1] [(short)12])) : (((/* implicit */int) arr_73 [i_23 - 2] [i_23 + 1]))))));
    }
    var_45 = ((/* implicit */short) var_10);
    var_46 -= ((/* implicit */short) max((((((((/* implicit */_Bool) (short)20906)) ? (((/* implicit */int) (short)32753)) : (var_2))) << (((((/* implicit */int) max(((unsigned short)32767), (var_5)))) - (48366))))), (((/* implicit */int) var_9))));
}
