/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19518
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
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) ((min((var_7), (((/* implicit */int) var_4)))) != (((/* implicit */int) ((var_7) <= (var_7))))))) << (((var_1) - (792335398))))))));
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_3) <= (var_3))))) >= (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) ^ (-6340113374885289586LL))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_3))));
                                arr_13 [i_0] [(_Bool)1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((long long int) (unsigned char)94));
                            }
                        } 
                    } 
                    var_20 ^= max((min((-8213803710673652940LL), (6340113374885289599LL))), (((((/* implicit */long long int) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) & (-6340113374885289595LL))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((6340113374885289586LL), ((-(min((var_3), (((/* implicit */long long int) var_9)))))))))));
                }
            } 
        } 
    } 
}
