/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2757
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
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)9816))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        arr_10 [i_0 + 2] [i_1] [i_1] [i_3 - 2] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2])))))));
                        var_20 = ((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_2 - 2] [i_2] [(_Bool)1] [i_0 + 1]));
                        arr_11 [i_0 + 2] [i_1] [i_2 + 3] [i_2] = ((/* implicit */long long int) (_Bool)1);
                        arr_12 [i_1] [i_2] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_21 -= arr_3 [i_2] [(_Bool)1];
                    }
                    var_22 = arr_0 [i_1 + 1];
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_2);
}
