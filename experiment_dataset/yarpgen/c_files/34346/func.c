/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34346
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
    var_12 -= ((/* implicit */long long int) var_6);
    var_13 -= ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 &= ((/* implicit */unsigned short) ((signed char) (unsigned char)251));
                    var_15 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned char) var_11))), (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_8))))))));
                    arr_7 [i_0] [(unsigned short)14] [i_2] = ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned long long int) (-(min((var_4), (((/* implicit */int) var_11)))))))));
                }
            } 
        } 
    } 
}
