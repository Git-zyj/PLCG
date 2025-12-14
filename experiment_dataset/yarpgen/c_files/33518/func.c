/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33518
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
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_20 = var_0;
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((/* implicit */int) var_14)))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_19)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)35), (((/* implicit */unsigned char) (_Bool)1)))))) : (((long long int) (-9223372036854775807LL - 1LL))))));
                        arr_11 [0LL] [i_2] [i_1] [0LL] &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_5)) >= ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [(unsigned short)10])))))))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned char) var_4);
    var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((/* implicit */int) min((((_Bool) var_18)), (var_11))))));
    var_24 = ((/* implicit */long long int) min((var_24), (-4749109473374798917LL)));
}
