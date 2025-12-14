/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36736
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
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)41)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) ? (var_4) : (var_0)));
                    var_15 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) (unsigned char)24);
    var_17 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) 24663531U)), (((((/* implicit */_Bool) (signed char)0)) ? (var_4) : (((/* implicit */unsigned long long int) -1770494816)))))), (((/* implicit */unsigned long long int) (signed char)-61))));
}
