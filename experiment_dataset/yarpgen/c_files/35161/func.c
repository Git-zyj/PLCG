/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35161
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
    var_17 = ((/* implicit */unsigned char) (signed char)-105);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) ((((var_13) ^ (var_8))) / (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (short)-11162)))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_19 = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_12)) + (((/* implicit */int) (_Bool)1)))));
                arr_6 [i_2] = ((/* implicit */_Bool) arr_1 [i_0] [i_2]);
            }
            for (signed char i_3 = 4; i_3 < 24; i_3 += 3) 
            {
                arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (unsigned short)20)) : (((/* implicit */int) var_15)))))));
                arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_12);
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) -8629925495560509377LL)) ? (2735082880U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))));
                            var_21 = ((/* implicit */long long int) 24U);
                            var_22 ^= ((/* implicit */short) ((signed char) arr_17 [i_3 - 4] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_5 - 1] [i_5 - 1]));
                            arr_18 [i_0] [i_0] [i_0] [i_4 - 1] [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) arr_7 [i_5] [i_4 + 2] [i_4 + 2]);
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
            {
                arr_24 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (unsigned char)13))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 23; i_9 += 4) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_9])) ^ (((/* implicit */int) var_5))));
                            arr_31 [i_7] [i_6] [i_7] [i_8] [i_0] = ((/* implicit */_Bool) arr_0 [i_9]);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0])))));
                var_25 = ((/* implicit */signed char) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65533)) % (((/* implicit */int) arr_14 [i_0] [i_0] [i_10] [i_6] [i_0] [i_0])))))));
            }
            for (long long int i_11 = 1; i_11 < 22; i_11 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_12 = 1; i_12 < 23; i_12 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        arr_42 [i_12] [i_13] [i_12] [i_11 + 3] [i_12] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)7077)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_6] [i_0] [i_13])) : (274877906943ULL)));
                        var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) ((var_8) <= (((/* implicit */long long int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    arr_43 [i_12] = ((/* implicit */unsigned char) (~(((unsigned int) var_7))));
                }
                for (signed char i_14 = 1; i_14 < 23; i_14 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */short) ((var_10) % (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))));
                    var_29 = ((/* implicit */_Bool) ((unsigned char) arr_29 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_11 + 3]));
                }
                arr_47 [i_0] [i_6] = ((/* implicit */unsigned char) ((arr_22 [i_0] [i_11 + 2] [i_6] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
            }
            for (short i_15 = 1; i_15 < 24; i_15 += 2) 
            {
                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)31))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) (unsigned short)65533)))))));
                var_32 = ((/* implicit */signed char) ((((var_7) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_45 [i_0] [i_0] [i_6] [i_0] [i_0] [i_15 + 1])))) | ((+(var_3)))));
            }
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))))))));
            arr_51 [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) ((arr_17 [i_0] [i_0] [i_6] [i_6] [i_6] [i_6]) ? (((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6] [i_0]))));
        }
        arr_52 [i_0] |= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)10917))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
    {
        var_34 *= (!(((/* implicit */_Bool) (short)-16827)));
        arr_55 [i_16] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)29599))))) & (((/* implicit */int) (_Bool)1))));
        arr_56 [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned long long int) (signed char)33)), (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */signed char) (_Bool)1)))))))) && (((/* implicit */_Bool) var_8))));
        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (2735082905U))))) <= (min((15313857785281633567ULL), (((/* implicit */unsigned long long int) 1559884430U)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            var_36 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_18 + 1] [i_18 + 1] [i_18 + 1])) && (((/* implicit */_Bool) arr_16 [i_17] [i_17] [i_18 + 1] [i_18 + 1] [i_18 + 1]))));
            arr_63 [i_17] [i_18 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_18 + 1] [i_18 + 1] [i_18 + 1])) / (((/* implicit */int) arr_29 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1]))));
            arr_64 [i_17] = ((/* implicit */_Bool) ((unsigned int) var_3));
        }
        arr_65 [i_17] [i_17] = ((/* implicit */unsigned short) var_14);
        var_37 ^= ((/* implicit */signed char) ((arr_54 [i_17] [i_17]) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
    }
    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_20 = 0; i_20 < 12; i_20 += 3) 
        {
            arr_71 [i_20] [i_20] [i_19] = ((/* implicit */unsigned short) (-((-(14078061422581126618ULL)))));
            var_38 *= ((/* implicit */signed char) (_Bool)1);
            arr_72 [i_19] [i_20] = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */long long int) arr_46 [i_19] [i_19] [i_20])))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_73 [i_19] [i_20] [i_20] = ((/* implicit */signed char) 1559884391U);
            var_39 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(2735082934U)))) + (((((/* implicit */_Bool) arr_27 [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (9287594642838573816ULL)))));
        }
        /* vectorizable */
        for (unsigned short i_21 = 0; i_21 < 12; i_21 += 3) 
        {
            var_40 = ((/* implicit */unsigned char) var_12);
            var_41 = ((/* implicit */unsigned long long int) (signed char)-49);
        }
        var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) (unsigned short)23573))));
    }
}
