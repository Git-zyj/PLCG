/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38144
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0] [i_0])), (-14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32642)) || (((/* implicit */_Bool) 14)))))) : (arr_1 [i_0 + 1]))))))));
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) -14))));
        var_13 = ((/* implicit */unsigned short) -14);
    }
    for (signed char i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((max((566308709U), (1514044821U))) | (((/* implicit */unsigned int) -15)))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59)))));
        var_14 = ((/* implicit */short) -35);
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
    {
        var_15 += (-(arr_7 [i_2]));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(arr_1 [i_2 + 1]))))));
        var_17 = ((/* implicit */int) arr_1 [i_2]);
        /* LoopSeq 3 */
        for (unsigned short i_3 = 2; i_3 < 13; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                for (signed char i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_0 [i_5] [i_4]))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 2; i_6 < 13; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-(arr_14 [i_6] [i_4] [i_2]))))));
                            var_20 = ((/* implicit */unsigned short) arr_0 [i_3] [i_6 + 1]);
                            arr_20 [i_4] [i_5 + 3] [i_4] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_3 - 2] [i_2 + 1])) <= (((/* implicit */int) ((18558398) < (arr_11 [i_3]))))));
                            arr_21 [i_2] [i_3] [i_2] [i_5] [i_4] [i_2] = ((/* implicit */_Bool) (signed char)127);
                        }
                    }
                } 
            } 
            var_21 = arr_4 [(short)8];
            var_22 ^= ((/* implicit */unsigned short) -14);
            arr_22 [i_3] [i_3 - 2] = arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3 - 1];
        }
        for (unsigned short i_7 = 2; i_7 < 13; i_7 += 3) /* same iter space */
        {
            arr_25 [i_2] = ((/* implicit */signed char) arr_4 [8LL]);
            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_19 [i_2] [i_2] [i_2] [i_7] [i_2]) >> (((arr_23 [i_7] [i_2] [i_2]) - (2880820594747907417ULL))))))));
            var_24 = ((/* implicit */_Bool) arr_4 [(unsigned short)4]);
        }
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                var_25 ^= ((/* implicit */unsigned short) arr_30 [i_2 + 1]);
                var_26 = ((/* implicit */unsigned int) (unsigned char)3);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_33 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) arr_3 [i_10]);
                var_27 = arr_15 [i_2 + 1] [i_2];
            }
            for (int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 14; i_13 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_5 [i_8] [i_8])) : (arr_37 [(unsigned short)1] [i_8] [i_11] [i_2 - 1] [i_8])));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (unsigned short)43373))));
                        }
                    } 
                } 
                arr_41 [i_2] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_2])) ? (arr_19 [(_Bool)1] [i_2] [i_8] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8128))))))));
                arr_42 [i_8] = (+(((/* implicit */int) arr_30 [i_2])));
            }
            for (signed char i_14 = 0; i_14 < 14; i_14 += 3) 
            {
                var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_8] [i_8] [i_14]))) == (((((/* implicit */_Bool) (unsigned short)26648)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (arr_26 [i_14] [i_8])))));
                var_31 = ((/* implicit */int) (short)32763);
            }
            /* LoopNest 2 */
            for (signed char i_15 = 3; i_15 < 10; i_15 += 3) 
            {
                for (int i_16 = 1; i_16 < 12; i_16 += 3) 
                {
                    {
                        var_32 -= ((/* implicit */unsigned int) (unsigned short)22185);
                        var_33 = ((/* implicit */_Bool) min((var_33), ((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-21466)))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_17 = 3; i_17 < 12; i_17 += 1) 
            {
                for (unsigned short i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)59287)) - (((/* implicit */int) arr_45 [i_8])))))));
                        var_35 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [(unsigned short)10] [(unsigned short)10])) || (((/* implicit */_Bool) arr_3 [i_2 - 1]))));
                        var_36 = arr_44 [i_8] [i_2 + 1] [i_2 - 1];
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (long long int i_19 = 0; i_19 < 14; i_19 += 3) /* same iter space */
        {
            arr_61 [i_2] [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-26851)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) arr_24 [i_2 - 1]))));
            arr_62 [i_2] |= ((/* implicit */signed char) ((unsigned int) arr_19 [i_2] [i_2 - 1] [i_2] [i_2] [i_2 + 1]));
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [4U] [4U])) * (((/* implicit */int) arr_32 [i_2] [i_2] [(unsigned short)12] [i_2 - 1]))));
            var_38 = ((/* implicit */short) (-(((/* implicit */int) (short)21466))));
        }
        for (long long int i_20 = 0; i_20 < 14; i_20 += 3) /* same iter space */
        {
            var_39 = ((short) ((((/* implicit */_Bool) arr_35 [i_2] [i_2 + 1] [i_2 + 1])) ? (arr_18 [i_20] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            arr_65 [i_20] = ((/* implicit */unsigned int) arr_0 [i_2 - 1] [i_2 + 1]);
            var_40 &= ((/* implicit */int) (!((_Bool)1)));
            var_41 += ((/* implicit */long long int) (-(((/* implicit */int) arr_63 [i_2 - 1] [0ULL]))));
        }
    }
    var_42 = ((/* implicit */unsigned char) var_9);
}
