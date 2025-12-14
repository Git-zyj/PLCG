/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216004
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
    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned char) var_12)))))) : (var_0)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_2])) == (((/* implicit */int) var_12))));
                    arr_10 [i_0 - 1] [i_0 - 1] = (((_Bool)1) ? (((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2])) ? (((arr_2 [i_0] [i_1]) ? (12200761194146822557ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 2] [(signed char)9] [(_Bool)1]))));
                    var_19 *= ((/* implicit */signed char) var_13);
                }
            } 
        } 
    } 
    var_20 = min((((/* implicit */unsigned long long int) ((signed char) var_6))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned char)56))))), ((+(var_9))))));
    var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))));
}
