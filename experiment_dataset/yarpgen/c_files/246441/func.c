/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246441
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_3))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4)))) && (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9)))))) && (((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (var_3))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (!(((var_6) >= (((unsigned long long int) var_8))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (-(var_10)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (var_7))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_9)))))))));
                        var_18 = ((/* implicit */unsigned short) (((!((!(var_12))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) var_8))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_11)))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (var_3))))));
                        arr_13 [i_2] [i_2] [i_2] [i_4] [i_2] [i_1 - 1] |= ((/* implicit */unsigned short) ((((var_3) % (((/* implicit */int) var_9)))) / (((/* implicit */int) var_12))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_20 &= ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) & ((~(var_13)))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            for (short i_7 = 4; i_7 < 10; i_7 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_8 = 4; i_8 < 10; i_8 += 2) 
                    {
                        arr_27 [i_5] [i_7] [i_7 - 4] [i_5] = ((/* implicit */signed char) ((var_2) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) var_2))));
                        arr_28 [i_5] [i_6 + 1] [i_7] [i_8] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_9)))));
                    }
                    for (short i_9 = 2; i_9 < 10; i_9 += 4) 
                    {
                        arr_31 [i_5] [i_6] [i_7] [i_9 + 1] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                        var_21 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_34 [i_5] [i_6] [i_10] [0ULL] [i_7 + 1] &= ((/* implicit */short) (((!(((/* implicit */_Bool) var_0)))) ? (var_13) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_5)) < (var_10))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 9; i_11 += 1) 
                    {
                        var_23 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43421)) + (((/* implicit */int) (unsigned short)43409))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((_Bool) var_8)))));
                        arr_37 [i_7] [i_7] = ((/* implicit */_Bool) var_1);
                    }
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */int) var_14))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) % (var_11))) : (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
                    arr_38 [i_5] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43394)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))))));
                    var_25 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_4)))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_5)) : (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)6498)) ? (((/* implicit */int) (unsigned short)22104)) : (((/* implicit */int) (unsigned short)22140))))) : (var_7)))));
    var_27 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)43416))));
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((var_10) % (var_10)))) ? (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : ((~(var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) var_14)) != (((/* implicit */int) var_12))))))))));
    var_29 += ((/* implicit */signed char) var_5);
}
