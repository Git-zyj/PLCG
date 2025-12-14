/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198652
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
    var_15 = var_14;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)137)))), (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned int) var_6)))))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (min((((/* implicit */unsigned long long int) (~(arr_0 [(unsigned short)0])))), (arr_1 [i_0]))))))));
        var_17 &= ((/* implicit */unsigned short) var_5);
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22797))) : (798998383U)))) : (arr_0 [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0]) : (arr_1 [i_0])))))))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) 31)) ? (((/* implicit */long long int) ((unsigned int) var_4))) : (((((/* implicit */long long int) (~(((/* implicit */int) var_10))))) | (((var_10) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_0)))))))))));
    }
    var_20 &= ((/* implicit */signed char) (+(var_0)));
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((((((/* implicit */int) var_10)) > (((/* implicit */int) var_3)))) ? (max((((/* implicit */long long int) 0U)), (-2409654584169304LL))) : (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) var_8)))))));
}
