/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46918
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_10))));
    var_15 = ((/* implicit */long long int) max((var_15), (((var_12) ? ((-(((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((1644215385U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((+(((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned short)52452)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)33919)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)54639)))) : (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (signed char)-1))));
                var_18 &= ((/* implicit */unsigned int) ((((((/* implicit */int) max((((/* implicit */short) (signed char)-5)), (var_9)))) + (2147483647))) << (((((((/* implicit */int) (signed char)-24)) + (34))) - (10)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_5);
}
