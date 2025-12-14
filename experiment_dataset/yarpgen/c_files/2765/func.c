/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2765
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
    var_19 = ((/* implicit */unsigned long long int) var_18);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_14)))))) & (((/* implicit */int) var_10))));
    var_21 &= ((/* implicit */_Bool) var_13);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) var_12);
        var_23 = ((/* implicit */unsigned long long int) var_6);
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) min((((15911484678439262920ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */int) var_13)) : (arr_1 [i_1] [i_1])))))), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
        arr_7 [i_1] = (-(min((((/* implicit */int) var_7)), (arr_1 [i_1] [i_1]))));
    }
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        var_25 = -2147483629;
        var_26 ^= ((/* implicit */unsigned char) var_6);
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    {
                        var_27 = arr_13 [i_2] [i_3] [i_4] [i_5];
                        var_28 = ((/* implicit */int) ((((((((/* implicit */_Bool) (short)30977)) ? (arr_10 [i_2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) | (((/* implicit */unsigned int) ((/* implicit */int) (short)31002))))) >> (((/* implicit */int) arr_3 [i_5]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_7 = 2; i_7 < 16; i_7 += 4) 
        {
            arr_22 [(short)10] [i_7] = ((/* implicit */unsigned int) var_9);
            arr_23 [i_6] [i_6] = ((/* implicit */short) var_18);
            var_29 -= ((/* implicit */unsigned long long int) 461402422);
        }
        for (int i_8 = 1; i_8 < 13; i_8 += 4) 
        {
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((min((var_9), (var_9))) & (((/* implicit */unsigned long long int) ((arr_1 [i_8] [i_8 + 2]) & (((/* implicit */int) arr_6 [i_8]))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30949))))))));
            var_31 *= ((/* implicit */_Bool) min((((unsigned long long int) ((((/* implicit */int) var_1)) / (var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_21 [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60402)))))) ? (var_18) : (((/* implicit */int) ((unsigned char) arr_18 [i_8]))))))));
            var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) ((unsigned int) var_10))))));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 2; i_9 < 16; i_9 += 4) 
            {
                var_33 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))));
                var_34 = (-(((((/* implicit */_Bool) 2113301221)) ? (((((/* implicit */unsigned long long int) var_12)) + (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_8 + 3])) - (((/* implicit */int) var_14))))))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        {
                            arr_36 [i_9] [i_8 - 1] [i_9] [i_10] [i_10] [(signed char)2] &= ((int) var_16);
                            var_35 = ((/* implicit */int) var_5);
                            var_36 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_19 [i_11])) ? (arr_21 [i_10]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_6]))))), (((/* implicit */unsigned long long int) var_16))));
                        }
                    } 
                } 
            }
            for (short i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                var_37 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_0))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_12)) : (2695700276U)))), (arr_17 [i_8 - 1])))));
                arr_40 [i_8] [i_12] [i_8] [i_6] = ((/* implicit */unsigned long long int) arr_39 [i_6] [1U] [i_12]);
            }
            arr_41 [i_6] [i_8 + 4] = ((/* implicit */unsigned short) ((max(((+(var_5))), (((/* implicit */unsigned long long int) var_11)))) <= (arr_17 [12])));
        }
        arr_42 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */int) ((14099023583447933019ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17092)))))) : ((~(((/* implicit */int) max((arr_37 [i_6] [i_6] [i_6]), (arr_29 [i_6] [i_6] [i_6]))))))));
        arr_43 [i_6] = ((/* implicit */unsigned char) min((max(((+(arr_0 [i_6]))), (((/* implicit */unsigned int) ((15933752681885311693ULL) != (var_9)))))), (((/* implicit */unsigned int) var_7))));
    }
}
