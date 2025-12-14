/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54324
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
    var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)138)) ? (((((/* implicit */_Bool) 3622403581060569310LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) (signed char)106))))) && (((/* implicit */_Bool) ((min((((/* implicit */long long int) var_4)), (var_17))) * (((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((var_10) - (4882640945976540152LL)))))))))));
    var_20 = ((/* implicit */unsigned char) var_18);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)117))) : (2251250057871360LL))))), (((long long int) ((-9223372036854775801LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)8))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0] [i_0 + 2] [i_0] [i_0]))) ? (max((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_9))))) : (((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_1] [i_2]))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2] [i_2])))))));
                    var_22 &= ((/* implicit */unsigned char) var_3);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_9 [i_3])));
        var_23 = ((/* implicit */long long int) ((signed char) var_5));
    }
}
