/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196041
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [2ULL] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)1274);
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) min((((unsigned int) ((var_11) && (((/* implicit */_Bool) var_16))))), (((/* implicit */unsigned int) var_11))));
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_17)) ? (((int) var_12)) : (((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))) - (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) (!(var_11)))))))));
    var_19 = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (((((/* implicit */_Bool) (short)-19248)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_17)))))));
    var_20 = (!(((/* implicit */_Bool) ((unsigned int) var_15))));
    var_21 = ((signed char) 11790589028784298506ULL);
}
