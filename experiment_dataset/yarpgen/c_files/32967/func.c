/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32967
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
    var_12 = ((/* implicit */_Bool) min((-3370977723427839359LL), (((/* implicit */long long int) (unsigned short)53767))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_14 [(unsigned char)8] [(_Bool)1] [i_2] = ((/* implicit */_Bool) (unsigned short)11768);
                                arr_15 [i_4] [9] [i_2] [(unsigned char)1] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                                var_13 = ((/* implicit */int) ((unsigned char) ((int) (unsigned short)11772)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned short)53750))))), ((unsigned short)11774)));
                                var_14 |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)11771)) > (((/* implicit */int) (unsigned short)11768))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 9; i_7 += 2) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) var_2);
                                arr_27 [i_8 - 1] [i_7] [i_2] [i_1 + 1] [i_0] = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = (unsigned short)53758;
    var_17 = ((/* implicit */unsigned short) var_11);
    var_18 = ((/* implicit */_Bool) (unsigned short)53758);
}
