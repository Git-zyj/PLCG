/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236609
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((signed char) min((var_5), (var_5)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */signed char) (unsigned short)55004);
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_3] [i_2])) : (((/* implicit */int) arr_2 [i_1])))))));
                    }
                } 
            } 
        } 
        var_18 = ((((/* implicit */_Bool) -8602394189204364806LL)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((signed char) (unsigned char)50))));
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_0))));
}
