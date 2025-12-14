/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4284
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
    var_14 *= ((/* implicit */unsigned long long int) min((1051700960), (((/* implicit */int) (signed char)-99))));
    var_15 *= ((((/* implicit */_Bool) var_11)) ? (((var_7) | (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_0)))) ? ((-(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
    var_16 = ((/* implicit */int) var_12);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2083981548U)), (var_9)))) ? (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) var_11)))) : (arr_1 [i_0] [i_0])))) <= (((((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2898751837U)) ? (var_6) : (4294967266U)))) : (var_9))))))));
        var_18 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (~(arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) 0U)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0] [i_0])) == (var_3)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_19 = var_6;
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -5969586114771445464LL)) || (((/* implicit */_Bool) (unsigned char)5)))) ? (var_7) : (((/* implicit */unsigned long long int) (+(var_13))))))) ? (arr_3 [i_1]) : (var_7)));
        var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (arr_2 [i_1])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (((var_2) - (((/* implicit */long long int) var_1))))))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && (var_10)));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_2 [i_1])))) ? (((((/* implicit */long long int) 2210985740U)) | (var_2))) : (min((arr_2 [i_1]), (arr_2 [i_1])))));
    }
    var_24 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
}
