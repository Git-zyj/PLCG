/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198573
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
    var_10 += 623493726;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) min(((~(var_6))), (((((/* implicit */int) arr_4 [i_0 - 3])) << (((/* implicit */int) arr_4 [i_0 - 3]))))));
                arr_6 [i_0] [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (var_7))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 27U)) ? (623493726) : (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */int) arr_1 [i_0 - 1])) * (((/* implicit */int) arr_1 [i_0 - 2])))) : (((((/* implicit */int) (unsigned short)53716)) * (((((/* implicit */int) (signed char)-116)) * (((/* implicit */int) arr_5 [i_0]))))))));
                var_12 = ((/* implicit */_Bool) var_9);
                var_13 = ((/* implicit */unsigned char) arr_5 [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) (-(min(((~(4294967295U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)17)))))))));
}
