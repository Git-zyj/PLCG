/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243101
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_10 [i_1] [i_2] [i_3] [i_0] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967271U)) ? ((-(63))) : (((((/* implicit */_Bool) -301832177)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))) % ((+(((/* implicit */int) var_8))))));
                                var_11 = min((((/* implicit */int) var_2)), (((((/* implicit */int) (short)4637)) / (262375945))));
                                var_12 ^= ((/* implicit */int) var_6);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_6)))));
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */unsigned long long int) var_3);
    var_15 = ((/* implicit */short) max((16U), (((/* implicit */unsigned int) (((+(((/* implicit */int) var_9)))) * (((/* implicit */int) var_4)))))));
    var_16 = ((/* implicit */unsigned short) var_1);
}
