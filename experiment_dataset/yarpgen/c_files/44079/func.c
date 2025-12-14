/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44079
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
    var_16 = var_4;
    var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_11)))) ? (((long long int) var_15)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) var_1))))))), ((~(((var_11) << (((((((/* implicit */int) var_2)) + (122))) - (27)))))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(13478628872433943848ULL))))))) < (((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_19 &= var_4;
        var_20 = ((/* implicit */int) (+(((((unsigned long long int) var_3)) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) var_12))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) arr_4 [i_1]))), (arr_3 [i_1] [i_1])))) >> (((-1983112867277683753LL) + (1983112867277683769LL)))));
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */int) arr_2 [i_1] [i_1])) ^ (((/* implicit */int) arr_2 [i_1] [i_1])))), (((int) arr_3 [i_1] [i_1])))))));
        arr_6 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - (1983112867277683777LL)))) ? (((((/* implicit */int) arr_2 [i_1] [i_1])) & (((/* implicit */int) var_2)))) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned char) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)136))))))));
    }
}
