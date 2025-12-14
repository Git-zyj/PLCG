/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219876
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_10 -= ((/* implicit */_Bool) arr_0 [(unsigned short)16]);
        var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0])))) + (((/* implicit */int) ((((/* implicit */int) arr_1 [0])) == (((int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) min((2655015470U), ((+(1639951804U)))));
                    var_13 = ((/* implicit */unsigned short) min((var_13), (min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [13LL]))))), (min((arr_1 [i_0]), (((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_0]))))))));
                }
            } 
        } 
    }
    var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) min((var_9), (var_9))))))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14594)))))));
}
