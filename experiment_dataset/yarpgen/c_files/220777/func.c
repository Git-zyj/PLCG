/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220777
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
    var_11 = ((/* implicit */unsigned long long int) var_3);
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5308684989481151665ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-74)))))) : (var_6)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = (_Bool)1;
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_15 = ((/* implicit */signed char) min((var_1), (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_2])), ((-(10608917542431040987ULL)))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                }
            } 
        } 
    }
}
