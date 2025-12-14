/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204088
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2 - 2] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) <= ((~(6161739150738648993LL))))))));
                    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)220))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [(short)16] [i_4] [i_3] [(short)16] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((unsigned int) ((unsigned int) (unsigned char)60))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) 13LL))))))));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (15211326497056389794ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) ((unsigned int) var_6));
}
