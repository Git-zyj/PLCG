/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224928
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
    var_11 -= ((/* implicit */_Bool) 2661077407U);
    var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))));
    var_13 = max((((/* implicit */unsigned int) ((unsigned char) 603867774U))), ((~((-(1860480913U))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0 + 1]))))) : (((((/* implicit */_Bool) 2900143198U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2271561059U)))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
            var_15 = (~(((unsigned int) ((unsigned int) 41036061U))));
            var_16 = ((unsigned char) var_1);
            var_17 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))));
        }
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            arr_11 [i_0] [i_0] [i_0] = 1935742427U;
            arr_12 [i_0] = ((/* implicit */_Bool) 3165321425U);
            arr_13 [i_0] = ((/* implicit */unsigned int) ((_Bool) (unsigned char)199));
        }
        arr_14 [i_0] = ((/* implicit */_Bool) ((unsigned int) max((1214163086U), (2271561052U))));
        arr_15 [i_0] = ((/* implicit */unsigned int) ((2023406253U) != (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)82), (((/* implicit */unsigned char) arr_0 [(_Bool)1]))))))));
        /* LoopSeq 4 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) min((((unsigned char) var_0)), (((/* implicit */unsigned char) var_5))));
            arr_18 [i_0] [i_0] [i_0] = ((_Bool) (-(((((/* implicit */_Bool) 324633593U)) ? (2434486394U) : (1508782111U)))));
        }
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            var_19 -= ((/* implicit */unsigned int) arr_0 [5U]);
            arr_23 [i_0] [5U] [i_0] = ((/* implicit */_Bool) min((min((arr_3 [i_0] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned int) var_6)))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_9))))), (min((((/* implicit */unsigned int) (_Bool)1)), (1515858519U)))))));
        }
        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            arr_28 [i_0] [i_5] [i_5] = ((1420319946U) ^ (177545363U));
            var_20 = ((unsigned int) (unsigned char)253);
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_31 [(unsigned char)0] [i_0] = (+(((((/* implicit */_Bool) (unsigned char)0)) ? (80559148U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(2208377001U)))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned char)255))));
                arr_36 [i_0] [i_0 + 1] [i_6] = (+(var_2));
                var_22 = (unsigned char)233;
            }
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)172))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) 2023406237U)) ? (var_3) : (2023406257U))) : (((unsigned int) var_8))));
                    arr_41 [i_0] [i_8] [5U] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / ((+(1303277777U))));
                }
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    var_25 = 2584682712U;
                    var_26 = ((/* implicit */unsigned int) ((((unsigned int) var_9)) > (2933199131U)));
                    var_27 -= ((/* implicit */unsigned int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) ((arr_29 [i_0] [i_8] [i_8]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                }
                var_28 ^= arr_16 [i_8];
                var_29 = ((/* implicit */unsigned int) max((var_29), ((+(arr_9 [i_0 + 1] [i_6] [i_6])))));
            }
        }
    }
    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
    {
        var_30 -= ((/* implicit */unsigned char) max((4121813036U), (((/* implicit */unsigned int) (unsigned char)174))));
        var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)185), (var_6))))) == (var_4)))), (((unsigned char) ((((/* implicit */_Bool) 3014780047U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))))));
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            for (unsigned int i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                {
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(1011190691U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) arr_45 [i_13] [2U]))))) : (((unsigned int) (unsigned char)209)))), (((min((((/* implicit */unsigned int) var_1)), (4253931255U))) << (((/* implicit */int) (_Bool)0)))))))));
                    var_33 = ((/* implicit */unsigned char) min((var_33), (max((((/* implicit */unsigned char) ((_Bool) arr_50 [(unsigned char)6]))), ((unsigned char)209)))));
                    arr_52 [i_11] [i_12] [i_13] [i_12] = var_4;
                }
            } 
        } 
    }
}
