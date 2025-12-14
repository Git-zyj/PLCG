/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233228
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) 3)) & (var_4))), (((/* implicit */long long int) min((-13), (((/* implicit */int) var_13)))))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) 3)) ? (3) : (3)))))) : (max(((-(var_4))), (((/* implicit */long long int) (+(var_15))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [(unsigned char)22] [i_0] = ((/* implicit */short) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_14))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (-1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-4) : (-3))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) -1245287523))) >> ((((~(arr_1 [i_0]))) + (1538196956705937371LL)))));
    }
}
