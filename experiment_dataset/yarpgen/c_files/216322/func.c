/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216322
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
    var_11 = ((/* implicit */int) min((((/* implicit */long long int) (-(((int) var_9))))), (((((/* implicit */_Bool) max((399842676), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */long long int) var_10)), (-8287936361031177024LL)))))));
    var_12 = ((/* implicit */int) ((long long int) var_8));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((((long long int) var_2)), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) + (arr_2 [i_0])))))))));
                arr_5 [i_1] = ((/* implicit */unsigned int) (+((~(var_10)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 4])) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) (-(arr_1 [i_3]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((+(((((/* implicit */_Bool) -14LL)) ? (((/* implicit */unsigned int) var_6)) : (arr_10 [i_0] [i_0] [i_0 + 4] [i_0] [i_1] [i_3]))))))))));
                            arr_11 [i_3] [i_2] [i_1] [i_2] [i_0 - 1] = ((/* implicit */short) 11);
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) max((var_2), (((/* implicit */int) arr_7 [i_0] [i_1] [3ULL]))))))));
            }
        } 
    } 
}
