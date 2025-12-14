/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224857
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [(short)5] [(short)5] [i_2]))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(((((_Bool) 2305843008945258496LL)) ? (var_10) : (((/* implicit */int) (!(((/* implicit */_Bool) 791661033U))))))))))));
                    var_17 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_3))))))) / (((unsigned long long int) 6973794806681632932LL)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) (!((!((_Bool)1)))))) != (((/* implicit */int) var_4)))))));
    var_19 = ((/* implicit */short) 2147483632ULL);
    var_20 = ((/* implicit */signed char) 2677261773U);
}
