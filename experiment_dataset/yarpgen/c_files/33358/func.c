/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33358
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [(unsigned short)5] [i_1] [i_1] [i_3] [(unsigned short)9] [i_3] = ((/* implicit */_Bool) var_4);
                                var_10 = max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)18)))), (((/* implicit */int) ((unsigned char) arr_0 [i_2] [i_3]))));
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) ((unsigned char) (short)-2616))) * (((/* implicit */int) min((((/* implicit */short) var_0)), (arr_0 [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_11 |= ((/* implicit */long long int) min((((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned char)238)))), (((/* implicit */int) ((_Bool) var_6)))));
}
