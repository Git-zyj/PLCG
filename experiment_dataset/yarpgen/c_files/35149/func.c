/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35149
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */short) arr_8 [i_1]);
                        arr_12 [i_1] [i_3] = ((/* implicit */unsigned long long int) var_2);
                    }
                    var_11 = ((/* implicit */int) (short)8191);
                }
            } 
        } 
    } 
    var_12 *= ((unsigned short) var_9);
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (var_1)))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned char)0)))) * ((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)247)) > (((/* implicit */int) var_7)))))))));
}
