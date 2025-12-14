/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44329
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
    var_13 = ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned char) (signed char)68)), ((unsigned char)136))))) ? (min((0ULL), (((/* implicit */unsigned long long int) 3342639882112963271LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) ((long long int) 3342639882112963271LL))))));
                    var_15 = ((/* implicit */short) (!(((_Bool) 0ULL))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (((var_4) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))))));
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) ((unsigned char) var_2))))))));
}
