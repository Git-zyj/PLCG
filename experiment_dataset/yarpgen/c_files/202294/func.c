/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202294
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */signed char) 67108856LL);
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_5 [i_3])) : (var_15))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) -1716212880);
    }
    var_20 = (-(((/* implicit */int) (!(((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_5))))))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((unsigned char) var_2)))));
}
