/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28134
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
    var_11 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)62)) : (var_9)))) ? (((((/* implicit */_Bool) -7700358422400538051LL)) ? (var_10) : (-465974525933055933LL))) : ((+(var_10)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) ((max((15599674298612687946ULL), (var_1))) + (((/* implicit */unsigned long long int) ((463052864) + (((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0 + 1])))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [i_0 + 2]))) : (((/* implicit */unsigned long long int) (~(var_8)))))) : (((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_1) : (arr_2 [i_0]))) >> (((/* implicit */int) ((((/* implicit */_Bool) -1459766533)) && (((/* implicit */_Bool) arr_2 [(short)1])))))))));
        var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((arr_2 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) && ((!(arr_0 [i_0])))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 2])))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) & (arr_2 [i_0])))) && (((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0])))))) >> (((((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (((unsigned long long int) arr_1 [i_0])) : (((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (var_0) : (var_0)))))) - (189ULL))))))));
        var_15 = ((/* implicit */unsigned int) (!(((arr_0 [i_0 + 2]) && (((/* implicit */_Bool) arr_2 [i_0 - 2]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */long long int) (~(var_0)))) : (((((/* implicit */_Bool) 465974525933055926LL)) ? (-9076547649753091538LL) : (((/* implicit */long long int) var_9))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) || ((!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))));
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 477922911U)) ? (((((/* implicit */_Bool) arr_4 [11] [i_1])) ? (-5580818545647974900LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -465974525933055933LL))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((long long int) 7708659572824553783LL)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) && (((/* implicit */_Bool) arr_4 [i_1] [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) arr_4 [i_2] [i_2]);
        arr_10 [i_2] [(unsigned short)4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_6 [19])) ? (3817044393U) : (477922903U)))))) | (min((((/* implicit */unsigned long long int) arr_8 [i_2])), (arr_7 [i_2])))));
        var_19 = ((((/* implicit */unsigned long long int) ((((var_0) <= (((/* implicit */unsigned int) 1702607262)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(signed char)19] [(signed char)19])) ? (((/* implicit */int) arr_3 [(short)2] [i_2])) : (var_9)))) : (((-465974525933055933LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))))))) ^ (arr_7 [i_2]));
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (unsigned char)36))))))) * (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_7 [16U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((var_10), (((/* implicit */long long int) var_0))))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_0)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40459)))));
    var_22 = ((/* implicit */unsigned short) ((unsigned long long int) (+(min((((/* implicit */int) (unsigned short)25077)), (var_8))))));
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (var_4)))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (var_8)))))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) -1702607263)) && (((/* implicit */_Bool) var_7))))) : (min((var_9), (((/* implicit */int) var_4)))))))));
}
