/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214273
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */int) var_0)))))) ? (((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)-14662)) : ((-2147483647 - 1)))))))));
                var_12 = ((/* implicit */short) -1159764986);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_4) + (9223372036854775807LL))) >> (((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)109))))) - (87)))))) ? (((/* implicit */int) var_1)) : (((int) (signed char)-103)))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | (min((max((-733344261), (((/* implicit */int) (signed char)-71)))), (((/* implicit */int) ((733344260) >= (-733344237))))))));
}
