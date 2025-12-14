/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200132
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
    var_12 = ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (signed char)35))))) % (((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)31))))))) : (((((/* implicit */_Bool) 2147483645)) ? (6268575168876908675ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132))))));
    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) > (((((/* implicit */_Bool) 3093967003U)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_9))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) ((2147483629) >= (765433878)))))))));
                arr_5 [i_1] [i_0] = ((/* implicit */signed char) var_5);
            }
        } 
    } 
}
