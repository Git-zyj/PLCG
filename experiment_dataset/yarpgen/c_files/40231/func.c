/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40231
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
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)183))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (((-(min((((/* implicit */long long int) 2273956076U)), (arr_2 [i_0] [i_0]))))) <= (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-15)) >= (((/* implicit */int) (unsigned char)70))))))))));
                arr_5 [i_0] [5LL] = ((/* implicit */unsigned short) min((((unsigned int) ((((/* implicit */int) (unsigned char)70)) <= (((/* implicit */int) arr_4 [i_0] [i_1]))))), (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))) % (17U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)183))))))))));
            }
        } 
    } 
}
