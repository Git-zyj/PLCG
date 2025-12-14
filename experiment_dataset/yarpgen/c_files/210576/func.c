/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210576
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
    var_16 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */long long int) var_10))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(max((((long long int) (_Bool)1)), (((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)))))))))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_6))))) ^ (min((min((8967199752764712848LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3 + 2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)65535)) - (65519)))));
                            var_19 = ((int) arr_2 [i_1] [i_1]);
                            var_20 *= ((/* implicit */long long int) ((((/* implicit */long long int) min((-1), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) < (((-8967199752764712848LL) + (8967199752764712837LL)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) (-(max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20038))) / (-8967199752764712853LL))), (max((var_15), (((/* implicit */long long int) arr_0 [i_0]))))))));
            }
        } 
    } 
}
