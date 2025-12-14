/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190146
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_17 = ((/* implicit */unsigned int) ((signed char) arr_3 [i_0] [i_2]));
                    arr_9 [i_0] [(short)3] [i_0] = ((/* implicit */unsigned int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0])))));
                }
                for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    var_18 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-16448)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (signed char)80))))));
                    var_19 = ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (arr_10 [i_3] [i_3 + 1] [i_3 - 1])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        arr_16 [i_1] [i_3 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_11 [4LL] [i_4])))))));
                        var_20 = ((/* implicit */short) arr_14 [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (int i_5 = 2; i_5 < 9; i_5 += 1) 
                        {
                            arr_21 [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) arr_12 [i_5 + 1] [i_5 - 1] [i_5] [i_3 + 1]);
                            var_21 = ((/* implicit */int) ((signed char) (~(arr_20 [i_0]))));
                        }
                        var_22 -= ((/* implicit */unsigned long long int) arr_8 [i_0] [i_3 + 1] [i_3] [i_3 + 1]);
                    }
                }
                for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    var_23 = ((/* implicit */int) min((((/* implicit */unsigned int) var_12)), (((((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (arr_6 [i_6] [i_1]))))) ^ (var_9)))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 8; i_8 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) min((max((((/* implicit */long long int) ((short) (unsigned short)16320))), (((((/* implicit */long long int) ((/* implicit */int) var_10))) & (var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max((((/* implicit */short) arr_14 [6LL] [i_7])), (arr_8 [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_6] [i_7])))))));
                                var_25 += var_4;
                                var_26 = ((/* implicit */unsigned char) arr_1 [i_0]);
                                var_27 = ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                }
                var_28 -= ((/* implicit */signed char) ((short) ((((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [9LL] [i_1] [i_0] [7] [i_0] [i_0]))) <= (var_15)))))));
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) (short)3968))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))));
}
