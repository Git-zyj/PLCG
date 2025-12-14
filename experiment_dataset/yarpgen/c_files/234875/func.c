/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234875
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
    var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_5)) : (var_18)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) (~(3044735674U)))) : (((((/* implicit */long long int) -1128038778)) - (var_14)))))) ? (((/* implicit */unsigned long long int) 0U)) : (max((var_13), (((/* implicit */unsigned long long int) var_19))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_18))))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) -1128038778))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_4 [i_1] [(unsigned short)13]))))))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((arr_4 [i_1] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_19))));
            var_25 = ((/* implicit */signed char) var_11);
        }
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_14))));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned short) (short)-32748))))), (min((((/* implicit */unsigned int) arr_7 [i_2])), (arr_5 [i_2] [i_2])))))) ? ((+((~(var_18))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
        var_28 *= (!(((/* implicit */_Bool) arr_5 [i_2] [i_2])));
    }
    var_29 = var_16;
}
