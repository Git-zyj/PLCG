/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221638
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_0))));
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (-(((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) 3055201333806020290LL);
                    var_12 = ((/* implicit */int) -1LL);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((int) (!((_Bool)1))));
                                var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((9223372036854775805LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), ((-(var_7)))))) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -964860163))))), (min((arr_12 [i_0] [i_1] [i_2] [(signed char)10] [i_4] [i_4] [i_2 - 1]), (((/* implicit */unsigned int) -2006343472)))))) : ((~(arr_11 [20ULL] [20ULL] [i_3] [20ULL] [20ULL])))));
                                var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))));
                                var_16 = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_2] [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */_Bool) var_7);
}
