/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22803
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
    var_16 = ((/* implicit */int) min((var_16), ((-(((/* implicit */int) var_15))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = var_4;
        var_17 = ((signed char) (-(((((/* implicit */int) (short)27402)) + (((/* implicit */int) (unsigned char)223))))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((((357205977U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)27399))))), (((((/* implicit */int) (short)27407)) != (((/* implicit */int) (short)-27409)))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_19 = ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51390)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_3]) : (((/* implicit */int) var_15)))))))) * (((/* implicit */int) (unsigned short)29324)));
                        var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-3))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_15))) ^ (arr_1 [i_3]))) : (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_1)))), (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (short)27391)) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_14 [i_0 + 2] [i_1] [i_2] [i_0 + 2] = ((/* implicit */unsigned short) (short)27402);
                    }
                } 
            } 
        } 
        var_21 = (+((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-20094)) ? (964627845) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (var_3))));
    }
    for (long long int i_4 = 1; i_4 < 13; i_4 += 4) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */long long int) var_15);
        var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)27387)) ? ((-(705801501))) : (((((/* implicit */int) (unsigned short)48968)) ^ (arr_5 [i_4]))))), (((((/* implicit */int) ((arr_12 [12] [i_4] [i_4] [i_4] [i_4 - 1]) != (((/* implicit */int) var_6))))) | (var_4)))));
    }
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_5 = 3; i_5 < 12; i_5 += 4) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */signed char) ((var_3) % (((/* implicit */long long int) 964627848))));
        var_24 |= ((/* implicit */signed char) ((arr_5 [i_5 - 1]) / (arr_5 [i_5 + 1])));
        var_25 = arr_3 [i_5 - 3] [i_5 - 3] [i_5];
    }
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_22 [i_6])) ? (arr_22 [i_6]) : (arr_22 [i_6]))), (((/* implicit */long long int) var_14)))))));
        var_27 -= ((/* implicit */int) (signed char)3);
        var_28 = ((/* implicit */long long int) ((signed char) arr_22 [i_6]));
        arr_25 [i_6] = ((/* implicit */signed char) (~((+(((arr_24 [i_6] [i_6]) << (((((var_10) + (728613323))) - (27)))))))));
    }
    for (long long int i_7 = 3; i_7 < 13; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 12; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 4; i_11 < 13; i_11 += 1) 
                        {
                            {
                                var_29 ^= ((int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 8214761705442269391LL)) ? (((/* implicit */int) (signed char)61)) : (var_5)))) | (((((/* implicit */_Bool) var_8)) ? (4558796795056338309LL) : (arr_13 [16LL] [i_10] [(unsigned short)5] [i_10])))));
                                var_30 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(var_10)))), (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))) : (2554995161U)))));
                                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((arr_5 [i_11 - 4]) % (arr_5 [i_11 - 2]))) : (arr_5 [i_11 - 2]))))));
                                var_32 = ((/* implicit */signed char) arr_12 [(_Bool)1] [i_8 + 1] [i_9] [i_10] [i_8]);
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */signed char) var_5);
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((min((-1958371500), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_1 [i_7]))))))) ^ (((int) (short)-27429)))))));
                }
            } 
        } 
        arr_41 [i_7 - 2] [i_7] = ((/* implicit */signed char) min((1340125509), (((/* implicit */int) (_Bool)0))));
    }
}
