/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5367
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
    for (unsigned long long int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((unsigned short) var_8)))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))))) : ((+((+(((/* implicit */int) var_9))))))));
                    var_18 = ((/* implicit */int) var_12);
                    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_1);
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */int) var_10)))))))));
    var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) var_4)))) : ((~(((/* implicit */int) var_10))))))));
}
