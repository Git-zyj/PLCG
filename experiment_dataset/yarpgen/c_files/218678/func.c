/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218678
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
    var_10 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_1 + 2])) / (((/* implicit */int) arr_1 [i_1 + 1])))) / (((/* implicit */int) ((short) arr_1 [i_1 - 1])))));
                        var_12 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1 - 1] [i_1] [i_2])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) var_0)))));
                        var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((arr_2 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1299543974563411721LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48480))))))))))));
                        arr_10 [(short)9] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), (arr_7 [0U] [0U] [i_2])));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((((((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)4] [0ULL])))) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                {
                    arr_20 [i_6] = ((/* implicit */unsigned int) (_Bool)1);
                    arr_21 [i_4] [(_Bool)1] [i_5] [i_5] = ((/* implicit */unsigned char) 489935523U);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                {
                    var_15 *= ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) arr_0 [i_7] [i_8])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))))))), (((/* implicit */long long int) var_8))));
                    arr_28 [i_8] [i_7] [11LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [(unsigned char)13] [i_8])) ? (var_3) : (((/* implicit */long long int) ((int) (_Bool)1)))))) && (((/* implicit */_Bool) var_3))));
                    arr_29 [i_4] [i_7] [i_4] = ((/* implicit */_Bool) max((((long long int) (!(((/* implicit */_Bool) var_1))))), (((/* implicit */long long int) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))))))));
                }
            } 
        } 
    }
    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        arr_33 [i_9] = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned int) min((arr_7 [(unsigned short)18] [i_9] [i_9]), (((/* implicit */unsigned char) (_Bool)0))))), (max((var_9), (arr_6 [i_9] [(short)17] [(_Bool)1]))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-((-(((int) var_4)))))))));
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) var_8)) % (((((/* implicit */_Bool) ((long long int) 1007516420U))) ? (arr_30 [i_9]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_9] [18LL] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_1)) : (arr_31 [i_9]))))))));
        /* LoopNest 3 */
        for (long long int i_10 = 1; i_10 < 15; i_10 += 2) 
        {
            for (short i_11 = 3; i_11 < 15; i_11 += 2) 
            {
                for (short i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    {
                        arr_44 [i_10] [0U] [i_11] [0U] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((arr_2 [i_9]) + (((/* implicit */unsigned long long int) var_3)))) <= (((/* implicit */unsigned long long int) ((arr_37 [(unsigned char)15] [i_11]) | (((/* implicit */long long int) arr_8 [i_9] [i_9] [i_9] [i_9] [i_9])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_9])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_9] [i_10] [i_11] [i_12] [i_10])) && (((/* implicit */_Bool) arr_34 [i_9] [i_11 - 1] [i_12])))))) : (max((((/* implicit */unsigned int) var_2)), (var_9)))))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((signed char) var_6)))));
                        arr_45 [i_10 - 1] [(unsigned char)0] [(unsigned char)0] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) arr_34 [0ULL] [i_10] [i_12]);
                        var_19 = ((/* implicit */unsigned int) max((var_19), (min((((((/* implicit */_Bool) arr_1 [i_12])) ? (((/* implicit */unsigned int) arr_31 [i_11 - 3])) : (arr_4 [i_10] [i_11 + 1] [i_12]))), (((((unsigned int) (_Bool)1)) << (((((int) arr_4 [12LL] [i_10] [i_11])) + (1047799259)))))))));
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_12] [i_12] [i_9])) << (((((/* implicit */int) ((unsigned char) var_0))) - (146))))) << (((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 2928341426U))))))))));
                    }
                } 
            } 
        } 
        var_21 ^= ((/* implicit */signed char) ((((((/* implicit */int) var_7)) / (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) var_0))));
    }
    for (int i_13 = 1; i_13 < 9; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 4) 
            {
                {
                    arr_52 [i_13 + 4] [i_13 + 3] [(unsigned char)8] [i_13] |= ((/* implicit */long long int) var_1);
                    arr_53 [i_15] [i_14] [i_13 + 3] = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                for (short i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_19 = 1; i_19 < 11; i_19 += 3) 
                        {
                            arr_65 [i_13 + 2] [i_16] [i_13 + 2] [i_13 + 2] [i_19] = ((/* implicit */_Bool) var_3);
                            var_22 = ((/* implicit */int) ((((arr_51 [(unsigned char)5] [i_17] [i_13]) % (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_16])))));
                        }
                        for (unsigned int i_20 = 4; i_20 < 10; i_20 += 3) 
                        {
                            arr_69 [i_13] [i_13] [i_16] [i_17] [0] [12U] [i_16] = ((/* implicit */long long int) var_0);
                            arr_70 [i_16] [i_18] [i_17] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((var_2) ? (((long long int) ((((/* implicit */_Bool) arr_62 [i_13] [(unsigned short)12] [(_Bool)1] [i_16] [i_20])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_35 [i_13] [i_13] [(unsigned char)6]))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            var_23 += ((/* implicit */long long int) var_9);
                        }
                        var_24 = ((/* implicit */unsigned short) var_8);
                        arr_71 [(_Bool)1] [i_16] [i_17] [i_16] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_16 [i_13 + 3] [i_13 + 2] [i_13 + 4])) ? (((((/* implicit */_Bool) arr_61 [i_13 + 3] [i_13] [i_16] [i_16] [i_16] [i_18])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_13 + 3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)511)))))));
                    }
                } 
            } 
        } 
    }
}
