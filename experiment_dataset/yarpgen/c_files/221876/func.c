/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221876
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
    for (long long int i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), ((unsigned char)50)));
                    var_19 = ((/* implicit */_Bool) var_10);
                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 1] [i_2])) ? (((/* implicit */int) var_13)) : (min((((/* implicit */int) (unsigned char)230)), (((int) arr_6 [i_0] [(unsigned char)5] [i_0 - 2]))))));
                    arr_9 [i_0] [(unsigned short)2] [i_2] [i_2] = ((/* implicit */short) arr_1 [i_2 + 2]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (short)-8176))));
    var_22 = ((/* implicit */unsigned short) var_11);
}
