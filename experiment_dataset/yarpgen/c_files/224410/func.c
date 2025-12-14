/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224410
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_11 = ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)4096)))))))) : (min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (-8940398589969587269LL)))), (((((((/* implicit */int) (short)-21061)) + (2147483647))) << (((((/* implicit */int) (unsigned short)4096)) - (4096))))))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(-2060229313)))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_6))))));
            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_7))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */short) arr_3 [i_0 + 2]);
                            var_14 = var_3;
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((arr_10 [i_0] [i_0] [i_0 + 3] [i_1] [i_0 - 1] [i_0 + 1] [i_1]) % (((/* implicit */long long int) (-(((/* implicit */int) var_9))))))))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 7; i_5 += 4) 
                        {
                            arr_14 [i_0] [(_Bool)1] [i_2] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)155), (var_9))))));
                            var_16 = ((/* implicit */unsigned int) var_5);
                            var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_1] [i_5 - 2] [i_0 + 2] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned short)61416)) ? (arr_3 [(unsigned short)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 2]))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_2 [i_0 + 1] [i_5 + 3])), ((unsigned char)155))))));
                        }
                        for (unsigned int i_6 = 3; i_6 < 10; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1)))))));
                            var_19 = ((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_15 [i_0 + 3] [(short)5] [i_2] [i_3]))));
                        }
                        for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            arr_21 [i_1] [i_1] [i_2] [i_3] [i_2] = max((((/* implicit */short) min(((unsigned char)164), ((unsigned char)230)))), (var_0));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_0] [1U])), (((var_4) & (((/* implicit */unsigned int) 1134367278))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)58)), (1399260398)))) : (var_4))))));
                        }
                        arr_22 [(unsigned char)3] [i_1] [i_0 + 2] [i_3] = ((/* implicit */short) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) (short)7159))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)97))))) : ((+(4294967287U)))))));
                    }
                } 
            } 
        }
        for (unsigned char i_8 = 3; i_8 < 9; i_8 += 2) 
        {
            arr_27 [i_8] [i_8] [i_8] = ((/* implicit */int) var_2);
            var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)19211)) : (((/* implicit */int) (short)-1))))));
        }
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                for (unsigned int i_11 = 2; i_11 < 9; i_11 += 3) 
                {
                    {
                        var_23 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) - (min((arr_33 [i_10] [i_9] [i_10]), (((/* implicit */unsigned long long int) var_2))))))));
                        var_24 ^= (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))) : (8U));
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [(short)7] [i_11]))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) 394657594))));
                        var_27 = ((/* implicit */signed char) var_9);
                    }
                } 
            } 
        } 
    }
}
