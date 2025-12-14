/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244555
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
    var_16 = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32297)) ? (max((var_14), (((/* implicit */long long int) min((-463359501), (((/* implicit */int) var_13))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-54)))));
    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((/* implicit */unsigned long long int) var_2)) : ((+(var_15)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)32303))));
                    arr_8 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)33240)) - (((/* implicit */int) (unsigned short)33241))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)32296)))))));
                }
            } 
        } 
    } 
}
