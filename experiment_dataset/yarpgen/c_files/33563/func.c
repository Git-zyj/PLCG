/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33563
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
    var_11 = ((/* implicit */short) ((((var_2) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) var_6)) : (2147483647)))) ? (var_2) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_2))))) + (3329402418446231869LL))) - (8LL)))));
    var_12 &= ((/* implicit */signed char) (-(max((((/* implicit */long long int) max((var_3), (((/* implicit */unsigned short) var_6))))), (min((((/* implicit */long long int) var_4)), (var_2)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) 2147483647)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_13 |= ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned int) var_1);
                            arr_13 [i_0 - 1] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) var_5);
                            arr_14 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_2 + 1] [i_4]))));
                            arr_15 [i_0] [i_0 + 2] [i_1] [i_0] [(unsigned char)1] [i_4] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 568483049U)) ? (-2147483633) : (((/* implicit */int) arr_1 [i_0]))))));
                        }
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+((-(((/* implicit */int) var_0)))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 4; i_5 < 6; i_5 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((signed char) (+(var_5))));
            arr_18 [i_0] = ((/* implicit */short) arr_10 [i_0 - 1] [7ULL] [i_0 - 1] [i_5] [i_5]);
        }
        for (long long int i_6 = 2; i_6 < 8; i_6 += 4) 
        {
            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_0]))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    {
                        arr_26 [i_0] [(short)1] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) arr_1 [i_0]))));
                        var_18 = ((/* implicit */unsigned char) (~(arr_21 [i_0] [i_0])));
                    }
                } 
            } 
        }
        var_19 = ((((/* implicit */_Bool) var_6)) ? (arr_20 [i_0 - 1] [i_0 + 3] [i_0]) : (((/* implicit */unsigned long long int) var_8)));
    }
    for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 1) 
    {
        arr_29 [i_9] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 28755647)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)65527))))) ? ((~(arr_28 [(_Bool)1]))) : (arr_28 [i_9])))));
        var_20 = ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) arr_27 [i_9 + 4])), (var_3)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) : (((((/* implicit */_Bool) (signed char)-9)) ? (arr_28 [i_9 + 4]) : (-28755677)))))));
    }
    var_21 = ((/* implicit */short) var_8);
}
