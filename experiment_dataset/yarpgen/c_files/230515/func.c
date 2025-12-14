/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230515
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
    var_11 = ((/* implicit */unsigned char) (short)0);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 &= ((/* implicit */short) ((((int) arr_1 [i_0 + 1])) | (max((((/* implicit */int) arr_2 [1U] [i_1 + 1])), (((((/* implicit */_Bool) 1595425383)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)14297))))))));
                    arr_6 [i_0] [(signed char)10] = ((/* implicit */unsigned char) (unsigned short)51216);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (unsigned short)14284);
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)14297)), ((~(max((((/* implicit */int) var_0)), (var_1)))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-23157))))) ? (((/* implicit */int) var_10)) : (2147483644)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (unsigned short)14320))))) : (((/* implicit */int) ((unsigned char) ((_Bool) var_0))))));
}
