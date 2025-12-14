/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232373
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_5 [(signed char)12] [i_1] [(signed char)12] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_1]) : (var_1)));
            var_10 = arr_0 [i_1] [i_1];
            arr_6 [i_0] = arr_3 [i_0] [(short)12] [i_0];
        }
        for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            var_11 = 1568008208U;
            /* LoopNest 2 */
            for (signed char i_3 = 3; i_3 < 13; i_3 += 4) 
            {
                for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_12 &= ((/* implicit */_Bool) var_9);
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((4276988347U), (arr_14 [(signed char)2] [(unsigned short)4] [12ULL] [i_0] [(signed char)2])))) || (((/* implicit */_Bool) 17978955U))))), (min((((/* implicit */unsigned int) min((arr_0 [(unsigned char)13] [(signed char)11]), ((short)-19772)))), (min((arr_3 [i_2] [i_2] [i_0]), (((/* implicit */unsigned int) arr_13 [(_Bool)1] [i_2] [i_2] [i_4])))))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_14 = ((/* implicit */unsigned int) var_7);
                /* LoopSeq 4 */
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 2])) ^ (((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 1]))));
                    arr_20 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((long long int) arr_16 [(signed char)1] [13U] [(signed char)1] [(signed char)1]));
                    arr_21 [i_5] [i_6] = ((/* implicit */unsigned int) 3862552376567782927LL);
                }
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    var_16 *= ((/* implicit */unsigned int) ((-3862552376567782924LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)35)))));
                    var_17 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [8U] [8U]))) - (arr_18 [1U] [i_2 + 1])));
                    arr_25 [i_0] [i_5] [(unsigned char)7] [i_7] = ((/* implicit */unsigned short) ((17978939U) & (1568008209U)));
                }
                for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 3) 
                {
                    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) 17978939U)) ? (2726959087U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32753)))));
                    arr_28 [(unsigned short)8] [(_Bool)1] [i_5] [12] [i_0] [(unsigned short)8] &= arr_9 [i_2 + 1] [i_8];
                }
                for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    var_19 -= ((/* implicit */signed char) arr_11 [4LL] [4LL] [i_9] [2U]);
                    arr_32 [12U] [i_5] = ((unsigned char) ((((/* implicit */_Bool) (short)-27421)) ? (3862552376567782921LL) : (((/* implicit */long long int) var_1))));
                }
            }
            var_20 ^= ((/* implicit */unsigned short) arr_26 [2U] [i_0] [(signed char)0] [i_2] [6U] [i_2]);
        }
    }
    /* vectorizable */
    for (signed char i_10 = 4; i_10 < 9; i_10 += 2) 
    {
        arr_35 [i_10] = ((/* implicit */unsigned int) (-(18446744073709551603ULL)));
        var_21 = ((/* implicit */long long int) (signed char)40);
    }
    for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
    {
        var_22 = ((/* implicit */short) min((((var_4) >= (((/* implicit */unsigned long long int) arr_9 [i_11] [i_11])))), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (arr_9 [i_11] [i_11])))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            for (int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                {
                    arr_44 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(var_1))), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) min((arr_31 [i_11] [i_11] [i_12] [i_13] [i_13]), (var_0))))))));
                    arr_45 [(signed char)7] [i_11] [(signed char)7] = ((signed char) (-(min((((/* implicit */unsigned int) var_9)), (var_3)))));
                    arr_46 [i_11] = ((/* implicit */_Bool) (+(arr_40 [i_12] [i_12] [i_13])));
                    var_23 = ((/* implicit */unsigned int) ((min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_1)) <= (arr_12 [i_11] [(_Bool)1] [i_12] [i_13])))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-1)) <= (((/* implicit */int) (unsigned char)0))))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((4276988340U), (((/* implicit */unsigned int) var_5)))), (min((arr_9 [i_12] [i_11]), (((/* implicit */unsigned int) var_0))))))) ? (((/* implicit */int) min((min((arr_13 [(signed char)9] [(signed char)11] [i_13] [(unsigned short)2]), (((/* implicit */short) var_5)))), (((/* implicit */short) ((((/* implicit */unsigned long long int) 4276988340U)) == (17304665840876230097ULL))))))) : (((/* implicit */int) (((+(((/* implicit */int) (signed char)-1)))) > (((/* implicit */int) ((arr_30 [i_11] [i_11] [i_11] [4U]) > (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 2) 
        {
            var_25 = (~(((/* implicit */int) arr_13 [(unsigned char)12] [(unsigned char)12] [i_11] [6U])));
            arr_50 [i_11] [i_11] = arr_39 [i_11] [i_11] [i_14];
            var_26 = ((/* implicit */signed char) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_11] [i_14] [i_14] [i_11])))));
        }
        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            var_27 = ((/* implicit */signed char) ((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_1 [i_15])) : (arr_18 [i_11] [i_11]))) != (((/* implicit */unsigned long long int) arr_9 [i_15] [i_15]))))) >> (((/* implicit */int) var_5))));
            arr_53 [i_11] [i_11] = ((/* implicit */signed char) (+(((arr_11 [i_11] [i_11] [(signed char)4] [i_11]) & (arr_11 [i_11] [i_11] [i_11] [i_11])))));
            var_28 &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-(var_4)))) ? (288230376151711744LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_15] [i_11]))))), (((/* implicit */long long int) var_0))));
            arr_54 [i_11] [(signed char)4] [i_11] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_24 [i_11] [i_15] [i_15] [1U] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2))), (((/* implicit */unsigned long long int) ((3862552376567782915LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))))))));
        }
    }
    var_29 |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
}
