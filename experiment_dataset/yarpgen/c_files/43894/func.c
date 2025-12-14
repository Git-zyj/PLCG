/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43894
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
    var_11 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) var_3)))), ((-(((((/* implicit */_Bool) 2508716349U)) ? (2059042983) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) ((max((((int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3)))))) < (((/* implicit */int) var_3))));
            var_13 = ((/* implicit */signed char) ((unsigned int) min((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1]))));
            /* LoopNest 3 */
            for (short i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 4; i_4 < 24; i_4 += 2) 
                    {
                        {
                            var_14 ^= ((/* implicit */unsigned long long int) ((signed char) var_5));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_4 - 3] [i_1])) - (((((/* implicit */_Bool) arr_4 [i_4 - 1] [i_1])) ? (((/* implicit */int) arr_4 [i_4 - 1] [i_1])) : (((/* implicit */int) arr_4 [i_4 - 4] [i_1]))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */long long int) (signed char)-117);
        }
        arr_15 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */short) var_10)), ((short)-16591))))))), (max((((/* implicit */unsigned int) (-(arr_3 [i_0 + 1])))), (max((((/* implicit */unsigned int) (short)16591)), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [6])))))));
        arr_16 [i_0] = ((/* implicit */int) ((signed char) var_5));
        var_17 = ((/* implicit */signed char) arr_7 [(signed char)20] [(signed char)20] [(short)20] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [8ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_8 [2] [(unsigned short)20])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
        var_18 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) -65536))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((unsigned int) (_Bool)0));
        var_20 = ((/* implicit */unsigned char) (short)16590);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            for (short i_8 = 2; i_8 < 12; i_8 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 3; i_10 < 12; i_10 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_10 - 1] [(_Bool)1] [i_8 - 2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8 + 1])))));
                            var_22 = ((/* implicit */unsigned long long int) arr_8 [i_10] [i_10]);
                        }
                        for (signed char i_11 = 4; i_11 < 10; i_11 += 2) 
                        {
                            var_23 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)40738))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (short)24246))) - (arr_10 [i_6] [i_7] [i_7] [i_7] [i_11] [i_11])))));
                            arr_36 [(unsigned short)8] [i_7] [(unsigned short)8] [i_7] [i_11 - 1] [i_11] &= ((/* implicit */short) 5500714621511243363ULL);
                        }
                        var_24 = ((/* implicit */_Bool) arr_4 [i_6] [i_6]);
                        var_25 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        arr_37 [i_9] [i_8] [i_6] [i_7] [i_6] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_6] [i_9])) ? (((/* implicit */int) arr_35 [i_6] [i_6] [i_7] [i_8 - 1] [i_8] [4LL] [i_9])) : (((/* implicit */int) arr_7 [i_8] [i_7] [i_8] [(short)8]))))) / (var_1)));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) (_Bool)0);
                                var_27 = arr_29 [i_6] [i_6] [i_6] [i_6];
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_14 = 2; i_14 < 11; i_14 += 2) 
        {
            for (int i_15 = 3; i_15 < 9; i_15 += 2) 
            {
                {
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((signed char) arr_2 [i_6])))));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_14 - 2] [i_14 - 1]))) * (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) + (arr_46 [i_6] [i_14] [i_6])))));
                    var_30 = ((/* implicit */short) ((arr_30 [i_6] [i_6] [i_14] [i_14]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-109)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 2) 
    {
        var_31 = ((/* implicit */signed char) (-2147483647 - 1));
        /* LoopSeq 1 */
        for (unsigned long long int i_17 = 4; i_17 < 21; i_17 += 2) 
        {
            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) arr_56 [13U] [i_16]))));
            /* LoopNest 2 */
            for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                for (short i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    {
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_6 [i_16] [i_16] [i_16] [i_17])))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_4 [i_17] [i_17])) : (arr_11 [i_16] [i_17] [i_18] [i_17] [i_17])))), (max((((/* implicit */unsigned long long int) 1752925520)), (arr_53 [i_16]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_16])) && (((/* implicit */_Bool) arr_0 [i_16])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_16] [i_17] [i_18] [10U]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1561182864U))))))));
                        var_34 = ((/* implicit */short) min((956142813), (((/* implicit */int) (short)-19380))));
                    }
                } 
            } 
        }
    }
    var_35 = ((/* implicit */unsigned char) ((((min((-1924205852994011789LL), (((/* implicit */long long int) var_10)))) ^ (((/* implicit */long long int) ((unsigned int) var_7))))) & (((/* implicit */long long int) ((var_6) & (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)114))))))))));
}
