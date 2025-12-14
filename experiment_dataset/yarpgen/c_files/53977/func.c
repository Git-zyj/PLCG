/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53977
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((1280706588U), (((/* implicit */unsigned int) (unsigned char)255))))))))));
                var_19 = (unsigned short)65532;
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((var_6), (((/* implicit */unsigned short) (unsigned char)57))));
    var_21 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((unsigned char)0), (var_7)))))))));
}
