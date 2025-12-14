/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248130
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
    /* LoopSeq 4 */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_3 [8ULL] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 4] [i_0 - 4])) <= (((/* implicit */int) arr_0 [i_0 - 4] [i_0 - 1]))))) | (((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])) - (var_9)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)3)), (3787372972U)));
    }
    for (long long int i_1 = 4; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) ((((arr_6 [(_Bool)1]) & (var_0))) | (((((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 3])) - ((-(((/* implicit */int) arr_1 [i_1] [i_1]))))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned int i_3 = 4; i_3 < 8; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_14 = var_7;
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) max((var_10), (((/* implicit */unsigned long long int) var_7)))))) ? (((int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) : (1723815132137435225ULL)))) : (((/* implicit */int) var_4))));
                            arr_17 [i_4] [i_2] [(_Bool)1] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_15 [i_1] [i_3] [i_4] [i_5]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 515964315U)), (var_8))))))) : (((((/* implicit */_Bool) ((int) (signed char)98))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_3 + 3])) ? (arr_7 [i_1 - 4] [i_3 + 1]) : (arr_7 [i_1 - 3] [i_3 + 3])));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_3 - 4] [i_2 + 1] [i_1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((var_0) | (((/* implicit */int) (signed char)32))))) : (((((/* implicit */_Bool) var_4)) ? (arr_14 [i_1] [i_2 + 1] [(_Bool)1] [(signed char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_2])))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_18 *= ((/* implicit */long long int) ((((unsigned int) arr_10 [i_1 - 3] [i_1 - 3] [i_3 - 1])) * (((/* implicit */unsigned int) ((/* implicit */int) min((arr_19 [i_1 - 4] [i_2 + 1] [i_3 - 4]), (((/* implicit */unsigned short) arr_12 [i_1 - 1] [i_2 + 1] [i_2 + 1]))))))));
                            var_19 = ((((((int) max((var_5), (((/* implicit */unsigned long long int) var_1))))) + (2147483647))) << ((((+(((var_10) / (((/* implicit */unsigned long long int) arr_18 [i_1 + 1] [i_2] [i_3 + 3] [i_4] [i_7])))))) - (7805417001ULL))));
                            var_20 = ((/* implicit */int) ((unsigned short) min((max((arr_15 [i_2] [i_3] [i_4] [i_7]), (((/* implicit */int) var_3)))), (((/* implicit */int) max((var_1), (((/* implicit */short) var_7))))))));
                            var_21 = ((/* implicit */short) (-(min((arr_22 [i_1 + 1] [8] [i_1] [i_1] [i_1]), (((((/* implicit */_Bool) arr_14 [i_2] [i_2] [10] [i_2 + 1])) ? (arr_22 [i_7] [i_7] [i_3 + 1] [i_4] [i_7]) : (((/* implicit */int) var_7))))))));
                        }
                        var_22 = ((/* implicit */long long int) min((((/* implicit */short) ((signed char) (short)(-32767 - 1)))), (((short) arr_18 [i_1 + 1] [i_1] [i_2 + 1] [i_2] [i_3 + 3]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            arr_31 [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_8] [i_8] [i_8]))));
            var_23 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_28 [i_9])) ? (var_0) : (((/* implicit */int) var_4)))));
            /* LoopNest 2 */
            for (long long int i_10 = 3; i_10 < 16; i_10 += 3) 
            {
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    {
                        var_24 = ((/* implicit */int) arr_36 [i_10 - 3] [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1]);
                        arr_37 [i_8] [i_10] [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7)))) || (((/* implicit */_Bool) ((short) (short)(-32767 - 1))))));
                        var_25 = ((unsigned long long int) arr_36 [i_10 - 3] [(_Bool)0] [i_10 - 1] [i_11] [i_11]);
                        var_26 = ((/* implicit */short) (+(((/* implicit */int) arr_30 [i_10 - 2] [i_10 - 2] [i_10 - 1]))));
                    }
                } 
            } 
            var_27 = ((/* implicit */short) var_7);
        }
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_40 [i_8] [16LL] [i_12] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_25 [i_12]))));
            arr_41 [i_12] [i_12] [i_12] = ((/* implicit */int) var_4);
        }
        for (int i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            arr_46 [i_8] [i_13] = ((/* implicit */short) var_10);
            var_28 = ((/* implicit */unsigned int) ((int) var_3));
        }
        var_29 = ((/* implicit */short) var_0);
        arr_47 [i_8] [i_8] = ((/* implicit */_Bool) arr_42 [i_8]);
    }
    /* vectorizable */
    for (unsigned int i_14 = 1; i_14 < 14; i_14 += 2) 
    {
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_14] [i_14 - 1] [i_14] [i_14 + 1])) ? (var_8) : (arr_35 [i_14] [i_14 - 1] [13LL] [i_14 + 1])));
        /* LoopSeq 2 */
        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_14 + 1])) ? (((/* implicit */int) arr_25 [i_14 - 1])) : (((/* implicit */int) arr_33 [4] [i_14] [4]))));
            var_32 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_14] [i_14]))) : (274844352512LL)))) ? (((arr_29 [1LL] [1LL]) ? (arr_26 [6ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_14] [i_15] [8]))))) : (((((/* implicit */_Bool) 0U)) ? (var_10) : (((/* implicit */unsigned long long int) -2087652513))))));
        }
        for (int i_16 = 1; i_16 < 12; i_16 += 1) 
        {
            arr_54 [i_14] [i_14] [i_14] = (((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? ((+(1994681622))) : (arr_42 [i_14 + 1]));
            arr_55 [i_14] [i_16] = ((/* implicit */int) var_2);
            var_33 = var_7;
        }
    }
    var_34 = ((/* implicit */int) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (var_5))), (((/* implicit */unsigned long long int) ((unsigned short) var_9))))), (((/* implicit */unsigned long long int) var_2))));
    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) max((19U), (((/* implicit */unsigned int) (short)-23241))))) || (((_Bool) (short)-30219))));
    var_36 = ((/* implicit */unsigned long long int) var_1);
}
