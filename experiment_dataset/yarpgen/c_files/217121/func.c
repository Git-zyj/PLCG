/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217121
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_3] [i_3] [i_0] [(unsigned char)10] = ((/* implicit */int) var_6);
                        var_10 += ((/* implicit */signed char) (~(var_1)));
                        var_11 = ((/* implicit */unsigned char) 0);
                    }
                    var_12 = ((/* implicit */short) ((long long int) ((unsigned short) (-(var_7)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
    var_14 |= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (+(var_0)))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) (+(var_0)))))));
    var_15 = ((/* implicit */short) var_6);
}
