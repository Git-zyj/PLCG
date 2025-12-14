/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44730
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
    var_12 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (unsigned char)126)) : (((((/* implicit */int) var_3)) % (((/* implicit */int) (unsigned short)53793))))));
    var_13 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [(unsigned short)2] [i_0] [i_1] = ((/* implicit */short) (unsigned short)36064);
                var_14 = ((/* implicit */unsigned char) max((var_14), ((unsigned char)130)));
                var_15 = ((/* implicit */unsigned short) (+((-((+(((/* implicit */int) (signed char)28))))))));
                var_16 = ((/* implicit */short) ((unsigned short) -3935938460383581782LL));
                var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_1 [i_0]))))))) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_7);
}
