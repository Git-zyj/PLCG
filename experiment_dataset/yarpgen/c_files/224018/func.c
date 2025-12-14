/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224018
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
    var_12 &= ((/* implicit */int) var_1);
    var_13 = ((/* implicit */long long int) var_1);
    var_14 *= ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 7; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] = ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_2] [i_3] [i_0]);
                                var_15 &= ((/* implicit */unsigned char) ((((max((var_1), (((/* implicit */unsigned int) var_4)))) ^ (var_1))) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        {
                            var_16 ^= ((/* implicit */unsigned char) (_Bool)1);
                            var_17 = ((/* implicit */signed char) ((((arr_14 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [3LL]) * (((/* implicit */int) ((((/* implicit */int) arr_6 [i_5] [i_1] [i_0 + 1])) > (arr_10 [(signed char)4] [i_0] [i_0] [(signed char)0])))))) & (((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_11))))) << (((min((((/* implicit */int) var_11)), (var_2))) - (37959)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
