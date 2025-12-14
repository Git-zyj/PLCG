/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200719
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
    var_14 &= ((/* implicit */signed char) min((max((((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_15 |= ((/* implicit */signed char) (+(var_2)));
        arr_4 [i_0] = (~(((/* implicit */int) var_3)));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            var_16 -= ((((/* implicit */_Bool) ((signed char) 243606102752511869ULL))) ? (((/* implicit */int) ((signed char) (unsigned char)128))) : (((/* implicit */int) (signed char)112)));
                            arr_18 [i_0] [i_1] [i_2] [i_4] [16] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)21)) <= (arr_8 [i_0] [i_2] [i_3] [i_4])));
                            var_17 ^= ((/* implicit */short) arr_3 [i_3]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_22 [(signed char)13] [i_2] [i_2] [19] [i_5] &= ((/* implicit */signed char) (+(1033815248)));
                            var_18 += ((/* implicit */long long int) (short)-11115);
                        }
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_1] [i_3] [i_6])) % (((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_2] [i_6] [i_2]))));
                            arr_26 [i_0] |= ((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_3] [i_6] [i_0])) >= (((/* implicit */int) arr_5 [i_0] [i_6]))));
                            var_19 |= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        }
                        var_20 = ((/* implicit */unsigned char) ((var_1) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)26667)))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_2] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1674746081U)))) ? (arr_24 [i_3] [(short)12] [i_0] [(short)15] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-26677)))))));
                        var_22 = ((/* implicit */short) ((var_13) - ((-(((/* implicit */int) var_9))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5646792828351352946LL)) ? (((/* implicit */int) var_0)) : (var_8)));
                    }
                    var_24 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((min((((/* implicit */int) var_11)), (arr_11 [i_0]))) < ((+(-1607802478))))))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) arr_0 [i_0]))), (max((((/* implicit */int) (signed char)114)), (arr_6 [i_0])))))) % (min((((/* implicit */unsigned int) arr_21 [i_2] [i_2] [i_2] [i_1] [i_1] [(signed char)17] [i_0])), (1700703734U))))))));
                    var_26 = ((/* implicit */short) ((signed char) ((((((/* implicit */_Bool) (short)26667)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (signed char)-4)))) - (((((/* implicit */int) arr_5 [i_0] [i_1])) % (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2])))))));
                }
            } 
        } 
        arr_27 [i_0] |= ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_27 = ((/* implicit */unsigned short) arr_3 [i_0]);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                for (long long int i_10 = 2; i_10 < 15; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        {
                            var_28 = min((-2129191900), ((~((~(((/* implicit */int) (signed char)73)))))));
                            arr_44 [i_11] [i_10] [i_9] [i_8] = ((((/* implicit */_Bool) min((var_8), (1717475090)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_20 [i_7] [i_8] [i_9] [i_10 - 1] [13] [i_9]))))) : (((/* implicit */int) arr_39 [i_10 - 2])));
                        }
                    } 
                } 
            } 
            arr_45 [(signed char)10] [i_7] [11] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) (signed char)127)), (var_7)))) != (arr_8 [i_7] [i_7] [i_8] [i_8])));
        }
        for (int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
        {
            var_29 -= arr_5 [i_7] [16LL];
            var_30 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_37 [i_12] [(_Bool)0] [(_Bool)0] [(_Bool)0])) ? (((/* implicit */int) arr_31 [i_7])) : (((int) (signed char)(-127 - 1)))))));
            var_31 |= arr_15 [i_12] [i_12] [i_7] [i_7];
            arr_48 [17] [i_7] = ((((/* implicit */_Bool) (+(var_12)))) ? (((((((/* implicit */_Bool) arr_13 [i_7] [i_12] [7LL] [7LL] [i_12] [i_7])) ? (((/* implicit */int) (signed char)-44)) : (-1221311256))) | (((/* implicit */int) arr_31 [i_7])))) : (max(((~(((/* implicit */int) arr_42 [i_7] [0ULL] [i_7] [i_7] [i_7])))), ((~(((/* implicit */int) (signed char)-127)))))));
        }
        arr_49 [i_7] = ((/* implicit */unsigned char) var_13);
        /* LoopNest 2 */
        for (short i_13 = 0; i_13 < 18; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                {
                    var_32 = ((/* implicit */unsigned int) (signed char)59);
                    arr_56 [i_13] [i_13] [i_14] [i_13] = (-(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (arr_2 [i_14]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9))))))));
                    arr_57 [i_13] [i_13] [i_13] = ((/* implicit */int) arr_0 [i_7]);
                }
            } 
        } 
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        arr_61 [i_15] = ((/* implicit */short) arr_10 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]);
        arr_62 [i_15] = ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)107)) || (((/* implicit */_Bool) ((arr_14 [i_15] [i_15] [i_15] [i_15] [i_15]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))))))))) | (min((((((/* implicit */int) (unsigned char)128)) % (arr_36 [i_15] [i_15]))), (((/* implicit */int) arr_53 [i_15] [i_15] [i_15])))));
        /* LoopNest 2 */
        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) 
        {
            for (signed char i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                {
                    var_33 = ((/* implicit */signed char) arr_43 [i_15] [i_16]);
                    var_34 *= ((/* implicit */int) min((min(((((_Bool)1) || (((/* implicit */_Bool) (signed char)4)))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (signed char)-109)))))), (((((/* implicit */_Bool) 1697252831)) || (((/* implicit */_Bool) (unsigned short)0))))));
                    /* LoopSeq 1 */
                    for (short i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_19 = 2; i_19 < 17; i_19 += 4) /* same iter space */
                        {
                            var_35 |= ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)-89)) != (min((50392720), (((/* implicit */int) arr_58 [i_15] [i_15])))))));
                            var_36 &= (+(((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [17] [17] [i_17]))) : (var_1))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) arr_42 [i_16] [i_18] [i_17] [i_16] [i_15])) : (arr_8 [i_15] [i_16] [i_15] [i_16]))))))));
                        }
                        for (signed char i_20 = 2; i_20 < 17; i_20 += 4) /* same iter space */
                        {
                            var_37 = ((/* implicit */int) max((var_37), (((int) max((((((/* implicit */_Bool) var_2)) ? (0) : (var_8))), (((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) arr_47 [i_15] [i_15] [i_15])) : (((/* implicit */int) (_Bool)1)))))))));
                            var_38 |= ((/* implicit */signed char) arr_17 [i_15] [i_16] [i_17] [i_18] [i_15] [i_18]);
                        }
                        var_39 = ((/* implicit */unsigned short) min((((signed char) max((arr_46 [3ULL] [i_18] [i_18]), (((/* implicit */unsigned char) var_10))))), (((/* implicit */signed char) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (int i_21 = 3; i_21 < 17; i_21 += 1) 
                        {
                            var_40 = ((/* implicit */short) -1353559004);
                            arr_80 [i_16] [i_16] [i_15] [i_18] [i_16] [i_16] [i_21 - 2] = ((/* implicit */_Bool) var_13);
                        }
                        var_41 = ((/* implicit */signed char) -2129191900);
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_16])) ? (arr_24 [i_15] [i_16] [i_17] [i_18] [i_18]) : (((/* implicit */int) arr_9 [i_15] [i_16] [i_17] [i_18]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_31 [i_15])) < (((/* implicit */int) var_6)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_16]))) | (3812177514U)))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned char) (~((~(arr_63 [i_22] [(signed char)12] [i_22])))));
        arr_83 [i_22] [i_22] = arr_39 [(signed char)14];
    }
}
