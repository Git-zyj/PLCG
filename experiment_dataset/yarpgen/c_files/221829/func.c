/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221829
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
    var_12 = ((/* implicit */unsigned int) (short)-32763);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) 3846119633U);
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (int i_3 = 4; i_3 < 8; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */int) arr_4 [i_3]);
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
                            var_16 |= ((/* implicit */unsigned char) ((arr_5 [i_0 - 1] [i_1]) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (signed char)-115))))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned short) var_2);
                            arr_14 [i_5] [i_0 + 2] [i_0 + 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2833224959U)) ? (((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59460))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)126)))))));
                            arr_15 [i_0] [i_0] [i_2] [i_5] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0])) + (1))))));
                            arr_16 [(_Bool)1] [i_1] [i_2] [i_0] |= ((((/* implicit */_Bool) var_9)) ? (-1) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (var_6)))));
                        }
                        arr_17 [i_0] [i_0] [i_2] [i_1] [i_3] = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) / (var_7)))));
                        arr_18 [7] [7] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_12 [i_2] [i_1 - 2] [i_2] [i_1 - 2] [i_1 - 2] [i_2] [i_0 + 1]) : (var_7)));
                        var_18 = ((/* implicit */long long int) (+((-(arr_3 [i_0] [i_0] [(short)0])))));
                    }
                } 
            } 
            arr_19 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [(unsigned char)4] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned long long int) var_7)) : (((unsigned long long int) arr_0 [i_0]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_19 = ((/* implicit */int) var_9);
            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) arr_7 [1LL])) > (((/* implicit */int) (unsigned short)6227)))))));
        }
        arr_22 [(short)3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [4U] [4U] [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            var_21 = var_10;
            arr_26 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(signed char)2]);
        }
    }
    var_22 = ((min((max((((/* implicit */long long int) (signed char)114)), (var_7))), (var_7))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_4)) >= (var_2))))));
}
