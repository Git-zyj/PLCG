/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211186
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) (unsigned char)7)), (((unsigned long long int) var_9)))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_12 ^= ((/* implicit */unsigned char) var_9);
                            arr_12 [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!((_Bool)0)))) : ((((((_Bool)1) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) (_Bool)1)))) + ((~(((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */int) (_Bool)1);
                var_14 += ((/* implicit */unsigned short) (signed char)28);
            }
        } 
    } 
}
