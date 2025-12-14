/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27537
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
    var_14 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) ((unsigned short) ((((long long int) arr_10 [i_0] [i_1 - 2] [i_2] [i_3] [i_4])) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)31135)))))))));
                                arr_16 [8U] [i_0] [i_2] [(unsigned short)2] [i_4] [i_4 - 1] = ((/* implicit */short) (+(((/* implicit */int) (short)31135))));
                                var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (unsigned char)255))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (unsigned char)1)) : (1424621643)));
                }
            } 
        } 
    } 
}
