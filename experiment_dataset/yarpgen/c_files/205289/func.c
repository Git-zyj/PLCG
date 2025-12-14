/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205289
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) > (min((var_5), (((/* implicit */unsigned long long int) var_9)))))))) != (var_2)));
                    arr_8 [23] [i_1] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1414803390U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [17LL] [22LL] [i_0 + 1])))))) ? (((((/* implicit */_Bool) (unsigned short)16255)) ? (var_9) : (((/* implicit */unsigned int) -256833992)))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_2] [i_0])) & (((/* implicit */int) var_7)))))))));
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((-5843863577693902797LL), (-1LL))) < (((/* implicit */long long int) ((((/* implicit */_Bool) 2503713748U)) ? (var_2) : (((/* implicit */unsigned int) var_1))))))))) : (var_3));
    var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_9) & (2073572373U)))) && (((/* implicit */_Bool) ((unsigned int) 0LL))))) ? (((((_Bool) (unsigned short)7406)) ? (((((/* implicit */_Bool) var_0)) ? (1LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 2171495558U)))))))) : (((/* implicit */long long int) var_3))));
}
