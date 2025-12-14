/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195882
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned short) var_14);
            arr_6 [i_1] = var_7;
            arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((int) var_16)));
        }
        arr_8 [i_0] = ((int) arr_1 [i_0 - 1] [i_0 - 1]);
    }
    for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */int) max((var_19), ((+(((/* implicit */int) var_12))))));
        var_20 = ((/* implicit */signed char) (-((+(((/* implicit */int) var_4))))));
        var_21 = ((/* implicit */unsigned short) arr_1 [i_2 - 1] [i_2]);
    }
    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */_Bool) arr_4 [i_3 + 1]);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_13)) < (max((arr_2 [i_3 + 1] [i_3 - 1] [13U]), (arr_2 [i_3 - 1] [i_3] [i_3]))))))));
        arr_15 [i_3] = ((/* implicit */int) ((arr_13 [14]) * (((/* implicit */unsigned int) var_10))));
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            var_23 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3])))))));
            arr_19 [i_3] = ((/* implicit */unsigned short) 1610708673697009774ULL);
            var_24 = ((/* implicit */unsigned char) var_14);
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (int i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) ((((arr_2 [i_5] [i_5] [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (((arr_2 [i_5] [i_5] [i_5]) * (arr_2 [(unsigned char)6] [i_6] [i_5])))));
                        arr_31 [i_8] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */int) arr_12 [i_8]))))) ? (((/* implicit */int) var_9)) : (var_10)))) ? ((-((+(arr_28 [i_8] [i_6] [i_5]))))) : (var_13)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            for (int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        for (int i_12 = 3; i_12 < 10; i_12 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) max((var_26), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)0))))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_22 [i_12 + 1] [i_12 + 1] [i_5]))))))));
                                var_27 *= (_Bool)1;
                            }
                        } 
                    } 
                    arr_44 [i_10] [i_9] [4] [i_10] = ((/* implicit */long long int) ((((((867234949) << (((var_18) - (16340905142187149022ULL))))) + (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    var_28 |= ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (867234942) : (((/* implicit */int) (unsigned char)49)))))));
    var_29 = ((/* implicit */unsigned char) (+(var_0)));
}
