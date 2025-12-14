/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232397
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
    var_19 = (+(((((/* implicit */int) var_14)) % (((/* implicit */int) (short)32767)))));
    var_20 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_21 &= ((/* implicit */int) ((((arr_7 [i_1 + 1] [i_1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) var_14))))) / (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
                    var_22 = ((/* implicit */int) arr_0 [i_0]);
                    var_23 = (-(((((/* implicit */_Bool) (short)8992)) ? (arr_6 [i_1 - 4] [i_1 - 2] [i_1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((((var_2) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) (unsigned short)41914)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15)))) : ((~(((/* implicit */int) (unsigned short)51415)))))) + (((/* implicit */int) var_14)))))));
                }
            } 
        } 
    } 
}
