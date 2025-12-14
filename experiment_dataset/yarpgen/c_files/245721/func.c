/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245721
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
    var_10 = ((/* implicit */int) min((((unsigned char) ((short) var_0))), (((unsigned char) max((1494452439), (((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 1; i_4 < 9; i_4 += 3) 
                            {
                                var_11 = ((/* implicit */unsigned char) var_9);
                                var_12 = ((/* implicit */signed char) var_6);
                            }
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1])) || (((/* implicit */_Bool) arr_8 [i_1 + 1] [0U] [i_1 - 1] [i_1 - 1]))))));
                            var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) arr_0 [i_1 + 1])))));
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */short) min((10010915250974048474ULL), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)3227)) : (((/* implicit */int) (short)-20675)))))));
                var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_7 [i_1 + 1])))), (((/* implicit */int) arr_7 [i_1 - 1]))));
                var_15 = max((((/* implicit */int) (!(((/* implicit */_Bool) ((int) (_Bool)1)))))), ((~((~(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (signed char i_5 = 1; i_5 < 9; i_5 += 3) 
                {
                    for (int i_6 = 4; i_6 < 8; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 7; i_7 += 2) 
                        {
                            {
                                var_16 -= ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned short) arr_21 [(unsigned short)2] [(unsigned short)2] [i_1 - 1] [i_5 + 1] [i_6 + 2] [i_7 + 2] [i_7]))), (max((arr_21 [i_0] [i_0] [i_1 - 1] [i_5 - 1] [i_6 - 2] [i_7 + 2] [i_7]), (arr_21 [i_1] [i_1] [i_1 + 1] [i_5 - 1] [i_6 - 3] [i_7 - 1] [i_7])))));
                                var_17 = ((/* implicit */int) min((((unsigned char) 2118886196U)), (arr_5 [i_5 + 1] [i_5 - 1] [i_5 - 1])));
                                arr_23 [i_0] [i_1] [i_1] [i_1] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((int) arr_4 [i_1]))) ? (((/* implicit */int) ((short) arr_20 [i_0] [i_0] [i_1] [i_1]))) : (max((((/* implicit */int) arr_17 [i_7])), (arr_4 [i_1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
