/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24894
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
    var_15 = ((/* implicit */int) var_0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [(unsigned char)21] [i_0] = ((/* implicit */signed char) max((max((arr_8 [i_0] [i_2]), (arr_8 [(_Bool)1] [i_1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((max((arr_17 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]), (((/* implicit */unsigned long long int) var_7)))) == ((~(arr_17 [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1])))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(min((arr_11 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 + 1]), (((/* implicit */unsigned int) (_Bool)0)))))))));
                                var_18 = (-(((((/* implicit */_Bool) arr_14 [(unsigned char)7] [i_4 + 1] [i_4] [(short)6] [i_4 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_3] [i_4 + 1] [i_3] [i_3] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 3) 
        {
            var_19 = ((/* implicit */_Bool) (unsigned char)69);
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6 - 1] [i_6 - 1]))) : (var_7))))));
        }
        arr_22 [i_5] [i_5] &= arr_7 [i_5] [i_5] [i_5];
        var_21 -= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((((/* implicit */unsigned long long int) var_0)) | (var_11))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_5] [i_5] [i_5]))))))));
    }
    var_22 = ((/* implicit */int) max((var_5), (((/* implicit */long long int) (+(((/* implicit */int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
}
