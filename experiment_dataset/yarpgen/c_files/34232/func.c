/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34232
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)55682))))) <= (var_10)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_14 [i_3] [i_1] [i_1] [i_1] [(unsigned char)11] [i_1] = ((/* implicit */unsigned short) (+(min((-1), (((/* implicit */int) (_Bool)1))))));
                            var_12 = ((/* implicit */unsigned short) ((unsigned long long int) 1));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)55679)), (-28)));
                arr_15 [i_0] = ((/* implicit */signed char) max((max((var_10), (((/* implicit */unsigned long long int) 8355840)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (708333309U))))));
                arr_16 [i_0] [i_0] [4ULL] = ((/* implicit */short) var_7);
            }
        } 
    } 
    var_14 |= ((/* implicit */short) ((unsigned int) ((int) ((unsigned short) (short)112))));
}
