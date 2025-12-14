/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36888
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
    var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) ((unsigned short) ((var_14) / (789619718748307073LL))))) ? (((789619718748307073LL) / (((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) (unsigned short)65535))))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))));
    var_18 *= ((/* implicit */unsigned char) -789619718748307060LL);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((long long int) ((int) (unsigned short)7201))))));
        var_20 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [15LL])) : (((/* implicit */int) arr_0 [i_0]))))) ? (min((((/* implicit */long long int) var_9)), (var_14))) : (max((789619718748307076LL), (var_13)))))));
        arr_2 [i_0] [i_0] &= max((((/* implicit */long long int) ((int) var_10))), (((((8894123188251685336LL) & (((/* implicit */long long int) (-2147483647 - 1))))) / (((/* implicit */long long int) var_0)))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((unsigned short) var_7);
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) -789619718748307073LL))));
        arr_7 [i_1] = ((/* implicit */unsigned short) var_0);
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) ((0) < (((/* implicit */int) arr_3 [(unsigned char)6]))))) << (((arr_4 [i_1] [0ULL]) - (8546259804066773218LL))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_23 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (arr_9 [(unsigned char)12])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))))));
        var_24 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned short)64610))))), (0)));
    }
}
