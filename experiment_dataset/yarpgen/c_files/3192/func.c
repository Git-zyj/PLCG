/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3192
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned short) arr_1 [i_0] [i_0 + 3]))), (var_4)));
        var_16 ^= ((/* implicit */_Bool) (-((-(arr_0 [i_0 + 2] [i_0 + 4])))));
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_0 - 2] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_4 [2LL] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_0])) : (var_12)))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 = ((/* implicit */int) arr_1 [i_0] [i_2]);
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_18 |= ((/* implicit */short) min((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_12 [i_0 - 2] [i_1 - 1])))), (((/* implicit */int) (unsigned char)5))));
                            var_19 = ((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1]);
                            var_20 = ((/* implicit */signed char) arr_0 [i_0] [i_3]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_2] [4U] [i_1] [i_0] [i_0 + 4])) ? (arr_13 [i_0] [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */long long int) var_12)))) != (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_2] [i_1] [i_0]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)15973)))) - ((-(var_6))))) : ((+(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [(short)10] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_14 [1U] [i_2] [i_2])) : (var_6)))))));
            }
            arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [(_Bool)1])) ? (((((/* implicit */int) var_0)) - (((/* implicit */int) arr_4 [i_1] [i_1])))) : (((/* implicit */int) ((short) arr_7 [i_1 - 2] [i_1 - 3] [i_1 - 2])))));
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_22 += ((/* implicit */short) (+(arr_13 [i_0] [i_5] [i_5] [i_6] [i_5])));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max((var_12), (var_9))))));
                        }
                    } 
                } 
            } 
        }
        arr_25 [i_0] [i_0] = ((/* implicit */unsigned short) ((((_Bool) ((var_0) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (arr_1 [i_0] [i_0]))))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_24 [i_0 + 4] [(short)4] [i_0] [i_0] [i_0] [i_0 - 2] [i_0])) ? (arr_10 [i_0] [i_0 - 1] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [(signed char)9] [1] [i_0 - 1] [i_0])))))))));
    }
    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
    var_25 = var_11;
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                var_26 = ((((/* implicit */_Bool) ((((arr_28 [(short)2] [(short)18]) - (((/* implicit */long long int) ((/* implicit */int) var_15))))) + (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_27 [(unsigned char)0] [(unsigned char)0])), (min((((/* implicit */unsigned short) var_13)), ((unsigned short)65535)))))));
                var_27 = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) (!(var_7)))), (var_6)))));
            }
        } 
    } 
}
