/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205964
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
    var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_11), (min((((/* implicit */unsigned long long int) var_8)), (var_2)))))) && (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) < (var_6)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((((3563419636484299217LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_19))));
                var_22 = ((/* implicit */unsigned int) ((signed char) 562949953421311LL));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) max((arr_6 [i_0] [i_0]), (((/* implicit */short) arr_0 [i_0]))))))))));
            }
        } 
    } 
}
