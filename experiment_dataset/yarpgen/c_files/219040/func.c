/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219040
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
    var_14 |= ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) min(((((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11)))) & (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_0]), (arr_0 [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((_Bool) max((arr_5 [i_3 - 3]), (arr_5 [i_3 - 2])))))));
                                var_17 -= ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_0)));
}
