/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221375
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)245))))), (var_5))))));
        var_21 -= ((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) 11716954040094562263ULL))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)50)))));
        /* LoopSeq 3 */
        for (short i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_1] [i_2]))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) arr_2 [15U] [i_2])))))))));
            arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (arr_4 [i_1 + 1]) : (((/* implicit */int) (unsigned short)25))));
        }
        for (int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_11 [12ULL] [14ULL] &= (~(((/* implicit */int) var_2)));
            arr_12 [i_1] = var_15;
        }
        for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            var_24 |= ((/* implicit */unsigned long long int) ((arr_1 [(_Bool)1] [(_Bool)1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 + 3])))));
            arr_16 [i_1] [(unsigned char)10] [i_4] = ((/* implicit */short) (!(((((/* implicit */int) arr_13 [i_1 + 3])) <= (((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 3; i_5 < 13; i_5 += 4) 
            {
                arr_20 [i_1] [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) (!(var_7)));
                arr_21 [i_4] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_24 [i_1] [i_4] = ((/* implicit */int) (-(arr_19 [i_5 - 3] [i_5] [i_5])));
                    var_25 = ((/* implicit */signed char) var_3);
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4] [0]))) : (-9223372036854775807LL)))))))));
                }
            }
            var_27 = ((/* implicit */_Bool) (signed char)(-127 - 1));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 4) 
        {
            var_28 *= ((/* implicit */int) (+(-9223372036854775807LL)));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 15; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_38 [i_1] = ((/* implicit */unsigned int) (+(0ULL)));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_7 - 2] [i_9 - 1])) ? (arr_22 [11LL] [i_1] [i_7 - 2] [i_9 - 1]) : (arr_22 [i_1] [i_1] [i_7 - 2] [i_9 + 1])));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) var_2))));
                var_31 = ((/* implicit */unsigned long long int) arr_32 [i_1] [i_1] [(short)15] [i_1] [i_8] [i_8]);
                var_32 *= ((/* implicit */signed char) var_4);
            }
        }
        for (int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            /* LoopSeq 4 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1 + 3])) || (((/* implicit */_Bool) arr_4 [i_1]))));
                            arr_50 [i_1] [i_11] [i_12] [i_13] [i_14] = ((/* implicit */long long int) (~(((/* implicit */int) arr_47 [i_1 + 2] [i_1] [i_12] [i_1 + 2] [9U]))));
                        }
                    } 
                } 
                arr_51 [i_1] [i_11] [i_12] [i_12] = ((/* implicit */long long int) (signed char)10);
                arr_52 [i_1] = ((/* implicit */_Bool) ((int) (+(3297311783623436921ULL))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (unsigned short)35273)) : (((/* implicit */int) (unsigned char)92))))))));
                arr_57 [i_1] = ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) (((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) 3800439369U))))) : (((/* implicit */int) var_4)));
                var_35 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1] [i_1] [(short)9] [i_1 + 2] [i_1] [i_1] [i_1]))) - (18446744073709551615ULL))) - (((/* implicit */unsigned long long int) (-(2458723491U)))));
                arr_58 [i_11] [i_11] [i_15] [i_15] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 550479144490382219LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11))))));
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((15149432290086114668ULL) + (((/* implicit */unsigned long long int) 9223372036854775775LL)))) >> (((((arr_35 [i_11] [i_11] [i_11] [i_11] [i_1 + 3] [i_11] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (15149432290086114668ULL))) - (15149432290086114615ULL))))))));
            }
            for (signed char i_16 = 2; i_16 < 13; i_16 += 2) 
            {
                arr_61 [i_1] [i_11] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_1] [i_11] [i_16] [i_1] [i_16])) + (((/* implicit */int) (unsigned char)163))))) ? (((unsigned int) 301482453U)) : (1836243805U)));
                arr_62 [i_1 + 2] [i_1] [i_16 + 1] = ((/* implicit */unsigned int) (~((-(-1585196948870406075LL)))));
            }
            for (unsigned int i_17 = 0; i_17 < 16; i_17 += 4) 
            {
                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (((2293014863U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))))));
                var_38 = ((/* implicit */_Bool) min((var_38), (var_10)));
            }
            var_39 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 + 4])) / ((-(((/* implicit */int) (unsigned char)3))))));
            var_40 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_15 [i_1] [i_1]))));
        }
        var_41 = ((/* implicit */_Bool) ((arr_15 [i_1 - 1] [i_1]) ? (((/* implicit */int) arr_47 [i_1 + 3] [i_1] [i_1 + 1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_15 [i_1 + 3] [i_1]))));
    }
    for (unsigned short i_18 = 0; i_18 < 11; i_18 += 2) 
    {
        arr_69 [i_18] = (-(((/* implicit */int) ((unsigned char) arr_64 [i_18] [i_18] [i_18] [i_18]))));
        var_42 = ((/* implicit */int) arr_19 [i_18] [i_18] [i_18]);
        arr_70 [i_18] [i_18] = ((/* implicit */_Bool) max((var_3), (arr_28 [i_18])));
    }
    var_43 = ((/* implicit */long long int) ((max(((~(9ULL))), (((/* implicit */unsigned long long int) (+((-2147483647 - 1))))))) & (var_0)));
    var_44 = ((/* implicit */int) min((var_44), ((+(((/* implicit */int) var_13))))));
}
