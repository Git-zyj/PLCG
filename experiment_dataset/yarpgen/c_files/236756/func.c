/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236756
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) (!(arr_1 [i_0])));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) -1775865492))))))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) 755176687))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */long long int) -1607097173);
                }
            } 
        } 
    }
    var_15 = ((/* implicit */signed char) -2147483638);
}
