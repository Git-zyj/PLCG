/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206671
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
    var_19 = ((/* implicit */long long int) var_18);
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (unsigned char)10))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_21 *= (!(((/* implicit */_Bool) min(((-(arr_3 [i_1] [i_0]))), (((/* implicit */unsigned long long int) (signed char)15))))));
            var_22 = ((/* implicit */short) (-(18U)));
            arr_5 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) ((_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_3 [i_0] [i_1]))))));
        }
        var_23 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_24 = ((/* implicit */short) max(((~(((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), ((short)480)))))), ((~(((/* implicit */int) ((_Bool) (signed char)-32)))))));
        var_25 = ((_Bool) ((arr_0 [i_0] [i_0]) ? (var_1) : (((((/* implicit */int) var_7)) ^ (var_1)))));
    }
    for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
    {
        var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) min(((+(0U))), (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (((((/* implicit */_Bool) (unsigned char)14)) ? (arr_8 [i_2 + 1]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2850604812U)), (620865468428772724LL)))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_13)) * (((/* implicit */int) var_7)))))))));
        var_27 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_2]))));
    }
}
