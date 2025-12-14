/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232670
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
    var_17 = ((/* implicit */int) min((((unsigned int) var_6)), (((/* implicit */unsigned int) ((((/* implicit */int) max((var_5), (var_6)))) + (1949785620))))));
    var_18 ^= ((/* implicit */long long int) (~(((((/* implicit */int) var_6)) % ((-(((/* implicit */int) (unsigned char)126))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((long long int) var_0)))));
                                arr_12 [i_4] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_2] [i_3])) || (((/* implicit */_Bool) 3282361266U))));
                            }
                        } 
                    } 
                    var_20 = var_2;
                }
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */signed char) (~(arr_0 [i_0])));
        var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) ((unsigned char) -438025159)))));
    }
    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        var_22 = ((/* implicit */int) max((var_22), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [16LL])))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [(unsigned char)6])), (arr_4 [2LL] [2LL])))))) ? (max((((((/* implicit */int) arr_8 [i_5] [i_5] [(signed char)12] [(signed char)0])) % (((/* implicit */int) var_14)))), (((/* implicit */int) arr_6 [(unsigned char)2] [i_5] [10] [(unsigned char)2])))) : ((~(((/* implicit */int) var_13))))))));
        var_23 = ((((/* implicit */long long int) ((min((((/* implicit */int) arr_8 [(unsigned char)2] [(unsigned char)2] [i_5] [i_5])), (-1433570532))) & ((~(((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]))))))) - (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]))))), (((long long int) arr_1 [i_5])))));
        arr_16 [0] |= ((/* implicit */long long int) arr_9 [i_5] [i_5] [(unsigned char)16] [i_5] [i_5]);
        /* LoopSeq 3 */
        for (signed char i_6 = 4; i_6 < 6; i_6 += 1) 
        {
            arr_20 [8] [i_5] [8] = ((/* implicit */int) (!(((/* implicit */_Bool) -1949785621))));
            arr_21 [i_5] = ((/* implicit */int) min((((/* implicit */long long int) arr_7 [i_5] [i_5] [i_6])), (var_8)));
            var_24 = ((/* implicit */unsigned long long int) var_14);
        }
        for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                for (signed char i_9 = 3; i_9 < 9; i_9 += 4) 
                {
                    {
                        arr_31 [i_5] [i_7] [(unsigned char)4] [9] = ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_9 - 3]))) | (max((((/* implicit */long long int) arr_19 [i_5] [i_5])), (var_8)))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((long long int) arr_8 [i_8] [i_9 - 3] [i_9 - 2] [i_8])) / (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_8] [i_9 + 1] [i_9 - 3] [i_8]))))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */int) min((var_26), (max((arr_18 [i_5] [i_5] [0]), (((/* implicit */int) ((((/* implicit */int) arr_5 [16ULL] [2ULL])) <= (((/* implicit */int) arr_7 [i_7] [(signed char)18] [i_5])))))))));
            var_27 = ((/* implicit */unsigned char) var_13);
            arr_32 [i_5] [4LL] [(unsigned char)2] &= ((/* implicit */signed char) arr_24 [i_5] [i_5] [0ULL] [i_7]);
            arr_33 [i_5] [(unsigned char)2] &= ((/* implicit */signed char) var_8);
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 8; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                for (long long int i_12 = 1; i_12 < 9; i_12 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [6] [i_12 + 1] [i_12] [i_12])) ? (((/* implicit */int) arr_19 [8ULL] [i_12 - 1])) : (((/* implicit */int) arr_6 [(unsigned short)16] [i_12 - 1] [i_12] [i_12 - 1])))))));
                        var_29 = ((/* implicit */int) ((unsigned int) (-(var_9))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_5] [(unsigned short)19] [i_10] [i_10]))));
        }
    }
    /* LoopNest 3 */
    for (signed char i_13 = 0; i_13 < 25; i_13 += 2) 
    {
        for (signed char i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            for (long long int i_15 = 2; i_15 < 24; i_15 += 1) 
            {
                {
                    arr_50 [i_15] [19LL] [19LL] [19LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((0) << ((((+(var_9))) + (1784562529))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned short) max((min((arr_51 [i_13] [i_13] [i_13] [i_13]), (((/* implicit */int) (unsigned char)125)))), (((((/* implicit */_Bool) arr_44 [i_15 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16))))));
                        var_32 -= ((/* implicit */long long int) ((unsigned char) ((unsigned char) var_1)));
                        /* LoopSeq 1 */
                        for (long long int i_17 = 2; i_17 < 21; i_17 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((int) var_11))), (arr_52 [i_13] [i_13] [i_16] [i_16]))) - (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((((/* implicit */int) (unsigned char)39)), (var_9))))))));
                            arr_55 [i_17] [i_16] [i_16] [i_16] [(unsigned char)23] [i_14] [i_13] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
                        }
                    }
                    arr_56 [i_14] [i_14] [i_13] = ((/* implicit */long long int) ((min((((arr_47 [6U] [6U]) | (-6))), (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)127)))))) >= (var_15)));
                }
            } 
        } 
    } 
}
