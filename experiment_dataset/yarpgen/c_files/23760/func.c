/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23760
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-22001)) : (((/* implicit */int) (signed char)93)))))))) : (((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) var_11);
                    var_14 = ((/* implicit */unsigned long long int) (short)-22009);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_15 += (!(((/* implicit */_Bool) min((((((/* implicit */long long int) 117055031U)) - (4150089178749216756LL))), (((/* implicit */long long int) ((arr_8 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                                arr_13 [i_0] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_7 [i_3] [i_1] [i_2] [i_3] [i_4]);
                                var_16 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */unsigned long long int) ((int) arr_4 [i_0] [i_0] [(_Bool)1]))) : (var_5))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((_Bool) (signed char)-116)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 4; i_5 < 23; i_5 += 3) 
    {
        for (signed char i_6 = 1; i_6 < 23; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    var_18 += ((/* implicit */_Bool) var_6);
                    var_19 = arr_18 [i_5] [i_5 - 3] [i_5];
                    var_20 = ((/* implicit */unsigned short) arr_19 [i_5] [i_6 + 1]);
                    arr_21 [i_5] [i_6] [i_5] [i_7] = ((/* implicit */unsigned char) (unsigned short)57915);
                    arr_22 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) ((unsigned char) arr_14 [i_5]))) : (((/* implicit */int) ((short) arr_14 [i_5])))));
                }
            } 
        } 
    } 
}
