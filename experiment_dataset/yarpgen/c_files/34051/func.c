/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34051
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
    var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_10)), (var_13)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_18 ^= ((/* implicit */_Bool) ((var_9) % (((/* implicit */unsigned int) (~(max((((/* implicit */int) var_3)), (var_5))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) min((max((4747765300133113395ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)65525)), (var_10)))))), (min((((((/* implicit */_Bool) var_9)) ? (13698978773576438221ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)31)) + (((/* implicit */int) var_12)))))))));
                var_19 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((unsigned char) var_15))))))));
                var_20 -= (-(min((((/* implicit */unsigned int) var_14)), (510U))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_4);
}
