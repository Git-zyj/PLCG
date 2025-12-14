/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222857
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
    var_14 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((arr_3 [i_1]) | (arr_3 [i_0]))) != (arr_3 [i_0])));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_12 [15ULL] [i_2] [i_2] [14LL] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [0LL]))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194)))));
                            arr_13 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [i_0] [i_1] [i_2] [i_2])))) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))));
                            var_16 = ((/* implicit */unsigned char) 2198956146688ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = (short)-9988;
}
