/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226018
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
    var_12 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_11))))) ? ((+(715157466907464664ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))))), ((+(715157466907464675ULL)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 += ((/* implicit */_Bool) (+(max((17731586606802086949ULL), (((/* implicit */unsigned long long int) 0))))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0])))))))) ? (((/* implicit */int) ((((/* implicit */int) max(((signed char)-61), (arr_5 [i_0] [i_1] [i_1] [i_2])))) < (((/* implicit */int) (signed char)-118))))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_2])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) (~(max((((((/* implicit */unsigned long long int) -12)) & (17731586606802086969ULL))), (((/* implicit */unsigned long long int) var_9))))));
    var_16 = ((/* implicit */int) (signed char)-54);
}
