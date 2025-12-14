/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242209
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
    var_13 &= ((/* implicit */_Bool) var_11);
    var_14 |= ((/* implicit */unsigned char) (~(min((var_9), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((((2914139016814264568ULL) + (11948774176010244025ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (((((/* implicit */_Bool) (-(11948774176010244025ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_2] [i_1])))) : (6497969897699307590ULL)))));
                    var_15 = ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) var_0)))));
                }
            } 
        } 
    } 
}
