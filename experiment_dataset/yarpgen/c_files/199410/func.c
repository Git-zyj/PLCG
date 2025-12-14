/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199410
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
    var_14 |= ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [0LL] [i_0] [i_0] [i_0] = (~(((unsigned int) ((arr_2 [(short)0]) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
                    arr_9 [8U] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) 2578428132U)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_2))) / (((/* implicit */long long int) 3439623317U)))), (((/* implicit */long long int) 2578428112U))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((var_15), (1716539195U)));
                                arr_15 [i_0] [i_2] [i_0] [i_3 - 1] [i_4] = ((/* implicit */unsigned long long int) var_3);
                                arr_16 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_2] [i_1] [i_4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142))) | (55089637688416294ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((var_9), (((/* implicit */unsigned long long int) (unsigned short)17384)))))))));
                                var_17 = ((/* implicit */unsigned long long int) ((short) var_12));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (+(var_4)));
}
