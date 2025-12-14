/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20048
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_2]))) ? ((+(((((/* implicit */_Bool) -1019715222214793382LL)) ? (1668991246U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (var_5)));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) 2625976049U)))));
                    var_16 = 6598812428231903693LL;
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((var_9), (((/* implicit */short) ((_Bool) min((((/* implicit */int) (unsigned short)52290)), (var_6)))))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) var_12)), (var_4))))))))));
}
