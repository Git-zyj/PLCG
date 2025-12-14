/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210199
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 3] [i_1] [i_2]);
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) (~(((arr_0 [i_0] [i_1 + 1]) ^ (arr_0 [i_1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned char) (_Bool)1);
                                arr_14 [i_0] [i_0] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) (unsigned char)0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_3);
    var_14 = ((/* implicit */long long int) var_7);
}
