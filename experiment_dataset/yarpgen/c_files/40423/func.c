/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40423
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)38959)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))));
    var_21 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_15)) | (((((/* implicit */int) var_3)) >> (((((/* implicit */int) (unsigned char)241)) - (236))))))));
    var_22 = ((/* implicit */unsigned char) (unsigned short)4096);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)511))))) : (((/* implicit */int) (unsigned short)23888)))) % (((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */unsigned int) -2097152))))) ? (arr_3 [i_1 - 1] [(unsigned short)1] [(unsigned short)1]) : (((((/* implicit */int) var_15)) - (arr_3 [(unsigned char)12] [i_0] [i_0])))))));
                var_23 = ((((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned short)16320)) ? (-2097135) : (((/* implicit */int) (unsigned short)57343)))) : (min((-2097155), (((/* implicit */int) arr_1 [i_1 + 1] [14U])))))) + (2147483647))) << (((min((((/* implicit */unsigned int) ((unsigned short) arr_4 [i_1]))), (min((65536U), (((/* implicit */unsigned int) (unsigned char)181)))))) - (181U))));
            }
        } 
    } 
}
