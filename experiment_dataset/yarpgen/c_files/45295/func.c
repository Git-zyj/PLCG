/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45295
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
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(_Bool)1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (2459189738U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (2151344035U) : (((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (((((/* implicit */int) var_8)) / (((/* implicit */int) var_12)))))))));
                    arr_8 [i_2] [i_1] [(unsigned char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2259952252U)) ? (4294967280U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_9))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)95))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((((/* implicit */_Bool) 1452229059335585118ULL)) ? (((/* implicit */int) (signed char)-17)) : (1597986689))))))));
                    arr_9 [i_0 + 3] [i_1] [i_2] [i_1] = ((/* implicit */int) var_11);
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
    } 
    var_18 = (-(((/* implicit */int) var_10)));
}
