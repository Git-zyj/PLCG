/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247694
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) <= (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) min((((/* implicit */short) var_2)), ((short)-32765)))))))));
    var_19 = var_12;
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 -= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0])) ? (((/* implicit */int) (unsigned short)120)) : (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [17LL] [i_0 - 2])))));
                    var_21 ^= ((/* implicit */_Bool) 1005663873U);
                    var_22 = ((/* implicit */unsigned long long int) var_3);
                    arr_9 [(unsigned char)13] [(unsigned char)17] [i_2] = ((/* implicit */long long int) (_Bool)0);
                }
            } 
        } 
    } 
}
