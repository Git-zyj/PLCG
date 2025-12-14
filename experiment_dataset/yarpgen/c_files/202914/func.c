/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202914
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 += ((/* implicit */unsigned char) min((((unsigned long long int) (short)0)), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) -1LL))) * (((/* implicit */int) (short)0)))))));
                    var_13 = ((/* implicit */_Bool) arr_8 [i_2] [(unsigned char)3]);
                    var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))) : (arr_7 [(unsigned short)2] [i_1] [(unsigned short)2])))));
                    var_15 = (short)-17;
                }
            } 
        } 
    } 
    var_16 = var_2;
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((unsigned char) var_3)))));
}
