/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51261
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((long long int) var_2))))) ? (((/* implicit */int) (!(((_Bool) (unsigned char)102))))) : (((((/* implicit */int) ((short) var_3))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)10392)))) - (39541))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) (-((+(-2141552177))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) var_1);
                var_12 += ((/* implicit */unsigned long long int) ((((((long long int) 3163851524285208488ULL)) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) arr_0 [i_1] [i_1]))) == (((((/* implicit */_Bool) arr_2 [i_1])) ? (15282892549424343127ULL) : (((/* implicit */unsigned long long int) var_2))))))) : (min((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_0])))));
            }
        } 
    } 
    var_13 += ((/* implicit */_Bool) (~((-(((/* implicit */int) ((9223372036854775807LL) == (var_8))))))));
}
