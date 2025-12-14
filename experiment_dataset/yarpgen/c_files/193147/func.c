/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193147
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
    var_13 = ((/* implicit */unsigned long long int) ((signed char) ((((173970256) == (((/* implicit */int) (short)-32757)))) ? (((((/* implicit */int) var_8)) + (173970249))) : ((~(((/* implicit */int) var_9)))))));
    var_14 = ((/* implicit */short) (~(max((((/* implicit */unsigned int) var_3)), (min((var_11), (((/* implicit */unsigned int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((short) ((_Bool) 1566186904U))))));
                var_16 = ((/* implicit */short) ((((/* implicit */int) (!(((((/* implicit */_Bool) (short)-25736)) || (((/* implicit */_Bool) -2002085885))))))) <= (((/* implicit */int) max((((/* implicit */unsigned short) ((173970259) == (((/* implicit */int) arr_4 [i_0] [(unsigned short)9] [i_0]))))), (arr_3 [i_1]))))));
            }
        } 
    } 
}
