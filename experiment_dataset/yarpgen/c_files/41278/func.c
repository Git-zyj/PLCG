/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41278
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
    var_15 = ((/* implicit */unsigned long long int) (!(var_13)));
    var_16 += ((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)11092)), (-2147483630)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) var_13)))))))))));
                arr_6 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-106))))));
                var_18 += ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)52878)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (short)-27838)))), (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) (short)32767))))));
                var_19 += ((/* implicit */unsigned char) max((((/* implicit */short) (unsigned char)116)), ((short)-4121)));
            }
        } 
    } 
    var_20 += ((/* implicit */_Bool) var_0);
}
