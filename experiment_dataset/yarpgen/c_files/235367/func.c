/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235367
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [9] [i_1] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_6)))) : (((unsigned long long int) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)22))))) < (((/* implicit */int) ((signed char) (short)27793))))))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_4 [(unsigned char)20] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */int) ((var_12) < (((/* implicit */unsigned long long int) 1694692391U))))) % (((/* implicit */int) ((signed char) -2312617862136747507LL)))))))))));
                var_18 ^= ((/* implicit */short) 10873015904409060727ULL);
                arr_6 [i_0] [(short)24] [(short)24] |= ((/* implicit */int) min((((/* implicit */unsigned long long int) 1073741824)), (max((((((/* implicit */_Bool) (signed char)59)) ? (14854200538999101043ULL) : (((/* implicit */unsigned long long int) var_0)))), (((unsigned long long int) (short)-24563))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_5);
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) var_16))), (((((/* implicit */_Bool) ((271850287) * (((/* implicit */int) (unsigned char)3))))) ? ((+(var_13))) : (var_1)))));
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (var_2)))), (var_7)))), (min((((/* implicit */long long int) (+(var_7)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-5096176877113148004LL)))))));
}
