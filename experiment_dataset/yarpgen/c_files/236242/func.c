/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236242
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_9 [19U] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_5 [i_1] [i_0] [i_3 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_6 [i_0] [i_3 + 1] [i_2])) : (((/* implicit */int) arr_6 [i_3] [i_3 + 1] [i_2])))))));
                        var_21 -= ((/* implicit */unsigned int) (_Bool)0);
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(((var_15) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 2]))))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 4; i_4 < 20; i_4 += 2) 
                        {
                            arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32763)) < (((/* implicit */int) arr_13 [i_0] [i_0] [18U] [i_4]))));
                            var_23 -= ((((/* implicit */_Bool) 2U)) ? (var_0) : (((((/* implicit */_Bool) (unsigned short)0)) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)0)) : ((-2147483647 - 1))));
                        }
                        for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            var_25 |= ((/* implicit */unsigned char) ((max((arr_7 [i_5] [i_5]), (arr_7 [i_2] [i_2]))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
                            arr_18 [i_0] [i_0] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) arr_1 [i_3 + 1])) : (((/* implicit */int) (short)(-32767 - 1)))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 - 1]))) + (arr_12 [i_0] [i_3 - 1] [i_3 + 1])))));
                            arr_19 [i_0] [i_0] = max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (0U));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) 4294967281U)) ? (((arr_0 [6U] [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [20] [i_6] [i_6])))))))));
        var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_4 [(unsigned short)12] [i_6] [(unsigned short)12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32763))) : (max((max((0U), (0U))), (((/* implicit */unsigned int) var_18))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_26 [i_7] [i_7] |= (-(((/* implicit */int) (short)-32764)));
        arr_27 [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (signed char)(-127 - 1))))));
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_25 [i_7] [i_7]))));
        var_29 *= 4U;
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        arr_30 [i_8] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) % (4294967284U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_8]))));
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            arr_34 [i_8] [i_8] = ((/* implicit */int) (+(arr_2 [i_9])));
            /* LoopNest 3 */
            for (unsigned int i_10 = 1; i_10 < 10; i_10 += 3) 
            {
                for (signed char i_11 = 2; i_11 < 13; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_9])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_9] [i_9])) ? (((/* implicit */int) arr_1 [i_11])) : (((/* implicit */int) arr_32 [i_10]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65510))) & (var_6)))));
                            var_31 |= ((/* implicit */short) (signed char)106);
                        }
                    } 
                } 
            } 
            arr_43 [i_8] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */int) ((short) (-2147483647 - 1)))) % (((((/* implicit */int) arr_37 [i_8])) + (((/* implicit */int) var_4))))));
        }
    }
    var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
}
