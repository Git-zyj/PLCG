/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49929
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
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [11U])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (max((((unsigned int) -1770146169)), (((/* implicit */unsigned int) arr_5 [8] [8])))) : (((/* implicit */unsigned int) min((((-1770146169) | (((/* implicit */int) (unsigned char)24)))), (((((/* implicit */int) arr_3 [i_1] [i_0])) ^ (((/* implicit */int) (signed char)-118)))))))));
                arr_7 [i_0 + 2] [i_1] [i_1] = ((/* implicit */signed char) (!(((((/* implicit */int) arr_2 [i_0 + 2] [i_1 + 1])) == (((/* implicit */int) arr_1 [i_0 - 2]))))));
                arr_8 [i_0] [(unsigned char)7] = ((/* implicit */short) arr_3 [i_1 - 1] [i_0 + 1]);
                arr_9 [i_0] [i_1 - 1] [6ULL] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37054)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)118))))) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (signed char)-113)))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) var_6);
}
