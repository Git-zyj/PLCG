/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214311
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
    var_19 = ((/* implicit */short) 1473258925382383957ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)39))))), (17183013834624068153ULL)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_13 [(short)2] [i_1 + 3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 10851207204525214563ULL)) ? (16973485148327167658ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_14 [i_0 + 1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (-(max((-2375746542241228221LL), (((/* implicit */long long int) (+(4092026841U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = max((((/* implicit */long long int) var_15)), (min((((/* implicit */long long int) max((2665606386U), (((/* implicit */unsigned int) (unsigned char)109))))), (((((/* implicit */_Bool) var_18)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
    var_22 *= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)2)) != (((/* implicit */int) (short)1216))))), (min((min((((/* implicit */long long int) (_Bool)1)), (7172434139826892472LL))), (((/* implicit */long long int) max(((unsigned short)38082), (((/* implicit */unsigned short) var_18)))))))));
}
