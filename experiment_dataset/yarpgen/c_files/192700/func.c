/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192700
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_15)), (arr_1 [i_0]))))) < (((unsigned long long int) (short)16566))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_1] [i_0])))))))));
                var_21 += ((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned char)6] [i_0]))) + (((long long int) var_16))))));
                var_22 ^= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)223))));
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)30))) == (((long long int) -1LL))));
                var_23 = ((/* implicit */short) ((((/* implicit */int) var_15)) % ((+(((/* implicit */int) (unsigned short)43689))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~((+(((var_18) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43688))))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (+(-7348904765931729549LL))))) ? (((/* implicit */int) (unsigned short)61810)) : ((~(((/* implicit */int) ((-1510938681) < (((/* implicit */int) arr_6 [i_2] [i_3 - 1])))))))));
            arr_11 [(unsigned char)7] = var_5;
            var_27 |= ((/* implicit */unsigned char) arr_9 [7ULL] [i_3] [i_2]);
        }
        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            arr_16 [i_2] [i_4] [i_4] = ((/* implicit */_Bool) var_19);
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (+(((((((/* implicit */int) var_8)) % (((/* implicit */int) var_11)))) >> (((((((/* implicit */_Bool) -8230018196527489722LL)) ? (arr_8 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))))) + (2892168174325305513LL))))))))));
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) var_4))));
            var_31 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28389))) : (5396344252662221875ULL)))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
        }
        /* LoopSeq 4 */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 7; i_7 += 2) 
                {
                    {
                        var_32 -= ((/* implicit */signed char) var_15);
                        var_33 = (+((+(min((17650707523504639964ULL), (((/* implicit */unsigned long long int) (unsigned char)8)))))));
                        arr_25 [i_6] [i_5] = ((/* implicit */unsigned long long int) (-((+(((((((/* implicit */int) arr_7 [i_2])) + (2147483647))) >> (((((/* implicit */int) var_2)) - (48667)))))))));
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (-(2057854720424240482LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_5])))))) : (((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))) : (14343144595750297518ULL))))))))));
                    }
                } 
            } 
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (min((((/* implicit */unsigned long long int) arr_10 [i_2] [i_2])), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2]))))))));
            var_36 ^= ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) var_11)))));
            arr_26 [i_2] [i_2] = ((int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_5])) : (((/* implicit */int) (short)0))));
        }
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                for (unsigned short i_10 = 1; i_10 < 9; i_10 += 4) 
                {
                    {
                        var_37 = ((/* implicit */unsigned short) ((unsigned long long int) ((16ULL) + (((/* implicit */unsigned long long int) ((arr_15 [i_9] [i_8] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [i_2] [i_2] [i_9] [i_10 + 2]))))))));
                        arr_36 [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) (((~(arr_3 [i_2]))) >> (((((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-30323)))) - (32719))))));
                        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) arr_7 [i_2]))));
                        arr_37 [i_2] [i_8] [i_9] [i_9] [i_8] [i_10] = ((/* implicit */unsigned char) ((int) var_17));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((unsigned long long int) (+(((/* implicit */int) arr_10 [i_8] [i_2]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
        }
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                var_40 = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_12 - 1])) >> (((var_10) + (7559952491646728596LL)))));
                var_41 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)123)) && (((/* implicit */_Bool) (short)23343))));
            }
            var_42 -= ((/* implicit */long long int) arr_34 [i_2] [(signed char)9] [i_11] [(signed char)9] [i_11]);
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (!(((/* implicit */_Bool) min((arr_44 [i_2] [i_11] [i_13]), (min((16233020092123806091ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_15 = 3; i_15 < 10; i_15 += 4) /* same iter space */
                        {
                            var_44 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_44 [i_2] [i_14] [(short)6]) : ((-(((((/* implicit */_Bool) var_17)) ? (arr_47 [i_2] [i_11] [i_13] [i_14] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40)))))))));
                            var_45 = ((/* implicit */unsigned short) arr_0 [(_Bool)1] [i_2]);
                            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-23323))))) ? (min((arr_47 [i_15 + 1] [i_15] [i_15] [i_15] [i_15]), (((/* implicit */unsigned long long int) arr_48 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15] [i_15 + 1] [i_15])))) : (((/* implicit */unsigned long long int) min((arr_48 [i_15 - 3] [i_15] [i_15] [i_15] [i_15 - 2] [i_15] [i_15]), (((/* implicit */long long int) arr_34 [i_15 - 2] [i_15 - 2] [i_15 - 2] [i_15 - 2] [i_15 - 2])))))));
                        }
                        for (unsigned char i_16 = 3; i_16 < 10; i_16 += 4) /* same iter space */
                        {
                            arr_54 [i_13] [i_16] = (unsigned short)0;
                            arr_55 [i_2] [i_11] [(short)8] [i_2] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_46 [i_13] [i_13])))) ? (arr_27 [i_16 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_13] [i_13]))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_17 = 3; i_17 < 10; i_17 += 4) /* same iter space */
                        {
                            arr_59 [i_13] [3LL] [i_17 - 3] [i_13] [i_13] = ((/* implicit */long long int) ((unsigned char) ((_Bool) (short)23338)));
                            var_47 -= ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_19)))));
                            arr_60 [i_2] [i_11] [0LL] [(short)6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_2] [i_2] [i_2] [i_17]))) : (var_3)))) ? ((+(2213723981585745549ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_17 + 1] [i_17 - 2])))));
                        }
                    }
                } 
            } 
            var_48 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((int) arr_50 [i_2] [i_11] [i_11] [6ULL] [i_2])))))));
        }
        for (long long int i_18 = 1; i_18 < 9; i_18 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                for (int i_20 = 2; i_20 < 8; i_20 += 2) 
                {
                    {
                        arr_69 [i_2] [i_18] = ((/* implicit */long long int) arr_18 [i_2]);
                        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (short)-28389)), (arr_49 [i_2] [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_20] [i_18] [i_19] [i_20])) ? (((/* implicit */int) var_11)) : (-1104574016))))))) ? (((((((/* implicit */_Bool) (short)-28389)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (short)28389)))) ^ (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)203)) % (((/* implicit */int) arr_52 [i_2] [i_2] [(unsigned short)5] [i_19] [i_20]))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 11; i_21 += 1) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 4) 
                {
                    {
                        arr_74 [i_18] [i_22] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) arr_20 [i_18 - 1] [i_18 - 1] [i_21] [i_22])))));
                        arr_75 [i_18] [i_18] [i_18] [i_18] [i_2] = ((/* implicit */unsigned char) min(((+(min((8ULL), (((/* implicit */unsigned long long int) (signed char)126)))))), (((/* implicit */unsigned long long int) (signed char)-121))));
                    }
                } 
            } 
            arr_76 [i_18] = ((/* implicit */int) arr_4 [i_2] [i_18]);
            /* LoopNest 3 */
            for (unsigned char i_23 = 2; i_23 < 9; i_23 += 3) 
            {
                for (unsigned char i_24 = 0; i_24 < 11; i_24 += 3) 
                {
                    for (unsigned long long int i_25 = 1; i_25 < 10; i_25 += 3) 
                    {
                        {
                            arr_86 [i_25] [i_18] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_2] [i_18] [i_18] [i_23] [i_24] [i_25 - 1]))) % (((((/* implicit */_Bool) (short)-4430)) ? (((/* implicit */unsigned long long int) arr_70 [i_2])) : (var_7)))))) ? ((((~(arr_79 [i_2] [i_18] [5LL]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_32 [(unsigned short)4] [i_18] [i_24])) : (((/* implicit */int) (short)-23323))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) arr_63 [i_2])), (var_17)))), (((((/* implicit */_Bool) var_10)) ? (-6907452608512659830LL) : (((/* implicit */long long int) arr_0 [i_2] [2LL])))))))));
                            var_50 = ((/* implicit */unsigned long long int) var_15);
                        }
                    } 
                } 
            } 
        }
        var_51 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (unsigned char)204))));
    }
}
