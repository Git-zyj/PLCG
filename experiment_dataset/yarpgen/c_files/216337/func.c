/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216337
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
    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
    var_14 = ((/* implicit */int) (signed char)99);
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((512) ^ (512))) >= ((+(-1835695753))))))) < ((~(((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            {
                var_16 = (((((~(var_2))) / (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])))) * (((/* implicit */int) ((var_2) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51342)))))))));
                var_17 = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 4]))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) / (arr_1 [i_0 + 1]))));
            }
        } 
    } 
}
