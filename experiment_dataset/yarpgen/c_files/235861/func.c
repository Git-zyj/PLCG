/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235861
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
    var_17 = ((/* implicit */int) var_0);
    var_18 = ((/* implicit */signed char) max((var_13), (((/* implicit */int) var_14))));
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_20 *= ((/* implicit */signed char) ((long long int) var_12));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_21 += ((/* implicit */unsigned short) var_6);
                        var_22 = ((/* implicit */long long int) ((short) (unsigned short)63719));
                        var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (signed char)-56)), ((unsigned char)83)));
                        arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */int) var_8)), (var_3))));
                    }
                } 
            } 
        } 
    }
}
