/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242614
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_0 + 1]), (((/* implicit */signed char) (_Bool)0))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (arr_1 [i_0]))))));
                var_15 = ((/* implicit */unsigned char) ((((((3638740503U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))))) << ((((+((-(((/* implicit */int) var_13)))))) + (8640)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_7);
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 8893757205214272310ULL))) ? (3638740525U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))))))) ? (3638740521U) : (((unsigned int) (-(((/* implicit */int) (unsigned short)5105))))));
}
