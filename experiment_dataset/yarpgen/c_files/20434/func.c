/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20434
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_1 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(596942182)))) || (((/* implicit */_Bool) ((unsigned char) arr_4 [i_1 - 1] [i_1 - 1] [i_2 - 2])))));
                    var_11 += ((/* implicit */long long int) ((int) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (arr_3 [i_1 - 1]))));
                    var_12 = ((/* implicit */int) arr_5 [4ULL]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) (~(((/* implicit */int) (_Bool)1))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
}
