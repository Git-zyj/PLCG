/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30352
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
    var_12 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((-1LL) % (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2])))))))))))));
                    arr_6 [i_0] [(unsigned short)23] [i_2] = ((var_3) - (((/* implicit */long long int) var_8)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) max((var_14), (((long long int) ((long long int) var_1)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 12; i_3 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(arr_5 [i_3 + 3] [i_3 + 3] [i_3 + 1]))))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                arr_16 [i_3 + 1] [i_4] [14U] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((arr_15 [i_3] [i_4] [i_5 - 1] [i_4]) ^ (((/* implicit */unsigned int) arr_13 [i_3] [i_3]))))) > (((arr_9 [i_3]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        {
                            arr_23 [i_3] [3ULL] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) arr_20 [i_3 + 1] [i_4] [i_3 + 1] [i_5 + 1] [14] [i_7] [i_7]);
                            arr_24 [i_3] = ((/* implicit */unsigned char) arr_18 [1LL] [6ULL] [(unsigned short)6] [i_7]);
                            arr_25 [i_3] [i_3] [i_5 + 1] [i_6] [i_7] [i_6] &= ((/* implicit */long long int) arr_22 [i_3] [(unsigned short)6] [(unsigned short)6] [i_3 + 3] [i_3 + 1]);
                        }
                    } 
                } 
                var_16 ^= ((/* implicit */int) ((unsigned short) arr_1 [i_3 + 2]));
            }
            /* LoopNest 3 */
            for (long long int i_8 = 2; i_8 < 12; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        {
                            var_17 = ((((((/* implicit */_Bool) var_3)) ? (8053591505188772177LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_10] [i_8 - 1] [i_4]))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_3] [i_3] [i_8] [i_8])))))));
                            arr_36 [(unsigned char)0] [(unsigned char)0] [(signed char)0] [i_9] [(unsigned char)0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)60))));
                            arr_37 [i_3] [i_4] [i_8 + 2] [i_8 + 2] = ((((/* implicit */_Bool) arr_4 [(unsigned char)13] [(unsigned char)13] [(unsigned char)13] [i_3 + 3])) ? (((/* implicit */long long int) -1283237963)) : (-881037688127159561LL));
                            var_18 = ((/* implicit */int) -5767369638924065825LL);
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) 881037688127159534LL))));
                        }
                    } 
                } 
            } 
            var_20 ^= ((/* implicit */unsigned short) ((unsigned long long int) arr_10 [i_3 - 1] [i_4]));
            var_21 ^= ((/* implicit */unsigned short) (-(arr_11 [i_3 - 2] [i_4] [i_4])));
        }
        var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_28 [i_3] [i_3])) : (arr_1 [i_3 + 2])));
        var_23 &= ((((/* implicit */long long int) (~(2147483647)))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_13 [i_3] [12U])) : (-5767369638924065825LL))));
        var_24 ^= ((/* implicit */long long int) (~(((4294967295U) << (((((/* implicit */int) arr_12 [i_3] [i_3 + 3])) - (81)))))));
    }
    for (long long int i_11 = 2; i_11 < 12; i_11 += 2) /* same iter space */
    {
        arr_42 [i_11 - 2] = ((unsigned short) arr_34 [i_11] [i_11] [i_11] [i_11] [i_11 - 2]);
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 14; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                {
                    arr_49 [i_11] [i_12] [i_13] [i_12] = ((/* implicit */unsigned short) ((int) ((unsigned long long int) arr_14 [i_11 - 2] [i_11 - 2] [i_11 - 1])));
                    var_25 = arr_8 [i_11];
                    /* LoopNest 2 */
                    for (long long int i_14 = 1; i_14 < 14; i_14 += 2) 
                    {
                        for (short i_15 = 4; i_15 < 13; i_15 += 3) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -881037688127159561LL)) || (((/* implicit */_Bool) 881037688127159577LL))));
                                var_27 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_12 - 2] [i_14 - 1] [i_14 - 1] [i_14])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_12] [i_11] [i_13]))) + (((((/* implicit */_Bool) 1288809571U)) ? (var_5) : (((/* implicit */long long int) 4294967290U)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_15 + 2] [i_11 - 2])) ^ (((/* implicit */int) arr_28 [i_15 + 2] [i_11 - 2])))))));
                                arr_54 [i_11] [i_12 - 2] [(unsigned char)6] [i_11] [i_11] [i_15] &= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_8 [i_11 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (arr_20 [i_11] [i_11 + 2] [i_11] [i_11 + 1] [i_11 - 2] [i_11] [i_11 - 2])));
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (!(((15024986315065838897ULL) <= (((/* implicit */unsigned long long int) arr_41 [i_11])))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? ((~(2275811536U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -881037688127159577LL))))))) || (((/* implicit */_Bool) var_1))));
            var_31 = ((/* implicit */long long int) (~(arr_52 [i_16] [i_11 + 1] [i_11 + 3] [i_11] [i_11 - 2] [i_11 + 2] [i_11 + 3])));
        }
    }
}
