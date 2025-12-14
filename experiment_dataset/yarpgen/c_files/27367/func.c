/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27367
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_8 [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) max((((unsigned int) (unsigned char)192)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (unsigned char)158)))))));
                            arr_9 [i_1] = ((/* implicit */unsigned char) 1981450222);
                        }
                    } 
                } 
                arr_10 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_9))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3955015255U)) ? (((((/* implicit */long long int) 32767U)) & ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((unsigned int) (unsigned char)192))))))));
            }
        } 
    } 
    var_11 += ((/* implicit */short) (signed char)(-127 - 1));
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
}
