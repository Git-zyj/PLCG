/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248396
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
    var_20 = ((/* implicit */long long int) var_2);
    var_21 |= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_1))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (short)13165)) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)65534)) < (((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [(_Bool)1] [i_0] [(unsigned short)10] [(_Bool)1] = arr_3 [12] [i_0];
                    arr_8 [(_Bool)1] [12LL] [i_0] = ((/* implicit */unsigned int) arr_3 [9LL] [i_0]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((unsigned long long int) (short)13143))));
}
