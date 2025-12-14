/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240291
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [i_3] [11LL] [i_0] [i_0] = ((((((/* implicit */int) arr_9 [i_0] [i_4] [i_4] [i_3] [i_4])) - (((/* implicit */int) arr_10 [i_0] [i_3])))) - (((((/* implicit */int) arr_8 [0])) + (((/* implicit */int) (unsigned char)48)))));
                                arr_14 [i_2] [i_2] [i_3] [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) (unsigned char)62);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] |= var_5;
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)150);
                    var_15 = ((/* implicit */unsigned char) min((arr_1 [i_0]), (((unsigned int) arr_5 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [(unsigned char)2] [(unsigned char)2] [i_0] = ((/* implicit */unsigned int) var_2);
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_2] [7])) * (((/* implicit */int) var_12))))))) ? ((-(((/* implicit */int) arr_0 [i_5 + 1])))) : (((int) min((arr_22 [i_6] [(unsigned short)10] [1LL] [i_2] [0LL] [i_0]), (((/* implicit */unsigned short) var_13)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((unsigned int) var_1));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)53)) >= ((-(((/* implicit */int) var_1))))));
}
