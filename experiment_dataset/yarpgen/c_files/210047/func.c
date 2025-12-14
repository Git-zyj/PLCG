/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210047
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
    var_11 = ((/* implicit */unsigned short) var_5);
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)68)))), (((/* implicit */int) var_2)))) + (15704))) - (3))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_0] = min((((/* implicit */unsigned int) (!(((_Bool) arr_0 [i_0] [8LL]))))), (var_0));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) max((var_13), ((-(var_9)))));
                            arr_10 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((int) arr_5 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 2]))), (arr_8 [i_1])));
                            arr_11 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)128)) || (((/* implicit */_Bool) (short)-129))));
                            var_14 = ((/* implicit */_Bool) min((var_14), ((_Bool)0)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) min((min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) min((arr_5 [i_0] [i_0] [i_0] [i_1]), (((/* implicit */short) arr_3 [i_0] [i_0] [i_0]))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) max(((short)-129), (((/* implicit */short) arr_3 [(short)23] [i_1] [13ULL]))))), (max((var_1), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_1] [i_1])))))))));
            }
        } 
    } 
}
