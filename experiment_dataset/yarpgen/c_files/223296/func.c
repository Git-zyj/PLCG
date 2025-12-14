/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223296
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */_Bool) (((-(((/* implicit */int) arr_1 [i_1])))) % (((((/* implicit */int) (unsigned char)247)) / (((/* implicit */int) (_Bool)1))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)64159))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned char) var_3))))) && (((var_3) && (((/* implicit */_Bool) var_4))))))) : (((((/* implicit */_Bool) ((0) & (-30)))) ? (((/* implicit */int) min((arr_3 [i_1]), (var_11)))) : (((/* implicit */int) min(((unsigned char)246), (((/* implicit */unsigned char) (_Bool)1)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (var_1)));
    var_14 = ((/* implicit */signed char) var_0);
}
