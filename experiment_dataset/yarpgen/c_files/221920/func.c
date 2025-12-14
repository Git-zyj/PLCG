/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221920
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (var_12)));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-78)) <= (((/* implicit */int) (signed char)77)))))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0 - 1] [i_1 - 1] [i_2] [i_3] [i_4 + 1])) >= (((/* implicit */int) (signed char)43))));
                            arr_11 [i_4] [i_3] [i_1] [i_1] [1U] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_1 [(signed char)8] [i_4])) ? (arr_7 [i_1] [i_1 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] = ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1 - 1])));
                arr_13 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned char) arr_8 [i_0 + 1] [i_1 - 2] [i_2] [i_1 - 3] [i_0 - 1]));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    var_20 ^= ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) arr_15 [i_0] [i_1 + 1] [i_2] [i_5])) : (((/* implicit */int) (signed char)-57))))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1] [(unsigned short)4])));
                    arr_17 [i_0 + 1] [(signed char)5] [i_1] = ((/* implicit */short) var_13);
                }
            }
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_0 - 1] [i_1] [i_1] [i_1 - 1])) * (((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1] [i_1] [i_1 - 3]))));
        }
        for (unsigned char i_6 = 3; i_6 < 10; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_7 = 1; i_7 < 9; i_7 += 4) /* same iter space */
            {
                var_22 = ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (arr_19 [i_6 - 3] [i_6 + 1] [i_7 + 2]));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (int i_9 = 2; i_9 < 8; i_9 += 2) 
                    {
                        {
                            arr_27 [i_9 - 1] [i_8] [i_7] [i_6 - 2] [i_0 - 1] = ((/* implicit */short) (-(((/* implicit */int) ((signed char) (unsigned char)227)))));
                            var_23 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)58449))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) ((arr_15 [i_7 + 2] [i_7 + 2] [i_7] [i_7 + 2]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26056)) ? (((/* implicit */int) (unsigned short)58449)) : (((/* implicit */int) arr_9 [i_7] [i_7] [i_6 - 2] [i_7] [i_0 - 1])))))));
                var_25 = ((/* implicit */_Bool) ((((1073740800) + (((/* implicit */int) (unsigned char)148)))) ^ (((/* implicit */int) arr_14 [i_7]))));
            }
            for (short i_10 = 1; i_10 < 9; i_10 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_22 [i_0] [i_6 - 3] [i_6 - 3] [i_10 - 1]))));
                arr_31 [i_0] [i_10] [i_10 - 1] = ((/* implicit */short) arr_16 [i_0] [i_0] [i_10] [i_10 + 2]);
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)835)) * (((/* implicit */int) arr_22 [i_10] [i_0 - 2] [i_0 - 1] [i_0 - 2]))))) ? (((/* implicit */int) (short)28129)) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)835)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned char)239))))));
                var_28 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2])) ? (var_10) : (arr_19 [i_0 - 2] [i_6 - 3] [3ULL])))));
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (unsigned short)58449))));
            }
            arr_32 [i_0 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)11501)) || (((/* implicit */_Bool) (short)28129)))))));
        }
        for (short i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                var_30 -= arr_22 [i_0] [i_11] [i_12] [i_12];
                var_31 = ((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0] [i_11] [i_11]);
                var_32 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)32767))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 3; i_14 < 10; i_14 += 3) 
                    {
                        {
                            var_33 ^= ((unsigned char) arr_9 [i_0] [i_13] [i_13] [i_0] [i_14 - 1]);
                            var_34 ^= ((/* implicit */unsigned char) ((signed char) (((_Bool)1) || (((/* implicit */_Bool) -73151262)))));
                            var_35 += ((/* implicit */signed char) ((arr_30 [i_0] [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) arr_30 [i_0] [i_0 - 1] [i_13])) : (((/* implicit */int) (short)28129))));
                        }
                    } 
                } 
            }
            var_36 = arr_9 [i_11] [i_11] [i_0 - 2] [i_11] [i_0];
            arr_44 [i_11] = ((/* implicit */unsigned char) arr_14 [i_11]);
        }
        arr_45 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_41 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (+(((/* implicit */int) var_0))))))) || ((!(var_17)))));
        arr_46 [i_0 - 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_35 [i_0 - 2] [i_0 - 2]))));
        /* LoopSeq 1 */
        for (signed char i_15 = 0; i_15 < 11; i_15 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                arr_52 [i_0 + 1] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? ((~(((/* implicit */int) (unsigned short)64692)))) : (((/* implicit */int) arr_36 [i_0 + 1] [(signed char)4] [i_0 + 1] [(signed char)4]))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17168316115583433308ULL)) ? (((/* implicit */int) (unsigned short)4096)) : (((/* implicit */int) (unsigned short)47605))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_15]))) : (arr_41 [6ULL] [i_16] [i_15] [i_15] [i_0 + 1])))));
                arr_53 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_15] = ((/* implicit */long long int) (+((-(((((/* implicit */int) (unsigned short)61439)) % (((/* implicit */int) (_Bool)1))))))));
            }
            arr_54 [i_15] = ((/* implicit */short) arr_8 [i_0 + 1] [(_Bool)1] [i_0 + 1] [i_0] [i_0]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_37 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)13036)) <= (((((/* implicit */int) (unsigned short)58121)) + (((/* implicit */int) (unsigned short)26578))))));
                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_13)));
            }
            /* LoopNest 3 */
            for (long long int i_18 = 0; i_18 < 11; i_18 += 4) 
            {
                for (int i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    for (signed char i_20 = 1; i_20 < 9; i_20 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */long long int) var_8);
                            var_40 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_15] [i_0] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((288230376151711743LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) 4329752822139334650LL)) ? (2147483640) : (((/* implicit */int) arr_15 [i_20 + 1] [i_19] [i_18] [i_0]))))))))) : (((unsigned long long int) ((((/* implicit */_Bool) 2147483640)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (signed char)-116)))))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned char i_21 = 3; i_21 < 15; i_21 += 3) 
    {
        var_41 = ((/* implicit */long long int) ((signed char) var_3));
        var_42 = ((/* implicit */signed char) (short)13120);
        var_43 = (unsigned short)0;
    }
    for (unsigned char i_22 = 4; i_22 < 15; i_22 += 3) 
    {
        arr_74 [i_22] = ((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned short)19222)), (2139095040))) ^ (((/* implicit */int) (unsigned short)53969))));
        var_44 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (short)13120))) ? (((((_Bool) (unsigned short)65532)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((arr_73 [(unsigned char)0] [(signed char)6]) <= (((/* implicit */unsigned long long int) -288230376151711725LL))))))) : ((((((-(((/* implicit */int) (unsigned short)35282)))) + (2147483647))) << ((((((~(((/* implicit */int) (unsigned short)10300)))) + (10322))) - (21)))))));
        arr_75 [i_22] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_72 [i_22 - 3]))))) == (6476991438707283449ULL)));
        arr_76 [i_22] = ((/* implicit */short) (-(((arr_73 [i_22] [i_22]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_22])))))));
        var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) (~(5192982072268377308LL))))));
    }
}
