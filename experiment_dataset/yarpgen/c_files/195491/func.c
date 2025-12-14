/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195491
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
    var_14 = ((/* implicit */short) (-(var_7)));
    var_15 |= ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) var_12)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 4; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_17 *= ((/* implicit */signed char) ((max((arr_2 [i_1 - 4]), (arr_2 [i_1 - 4]))) | (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1 - 3])))))));
        var_18 = min(((_Bool)1), ((_Bool)1));
    }
    for (unsigned char i_2 = 4; i_2 < 21; i_2 += 2) /* same iter space */
    {
        var_19 += ((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) ((signed char) arr_0 [i_2 - 3])))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((((((/* implicit */int) (unsigned short)16383)) - (var_4))) / (((((/* implicit */int) var_12)) * (((/* implicit */int) arr_5 [i_2])))))))))));
        arr_11 [i_2] = ((/* implicit */short) ((-1637143808) != (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_13)))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_5 [i_2]))))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_2] [i_2]))));
    }
    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        arr_16 [(unsigned char)1] = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_3])), ((unsigned char)40))))));
        var_21 |= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_8 [i_3] [(unsigned char)21]))))));
        var_22 = ((/* implicit */unsigned char) (((-(((/* implicit */int) ((signed char) arr_0 [i_3]))))) / (((/* implicit */int) ((signed char) arr_2 [i_3])))));
        var_23 = ((/* implicit */unsigned long long int) ((((unsigned int) arr_14 [i_3])) >= ((-(((unsigned int) 2806706800U))))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */long long int) arr_2 [i_3])) : (72057594037927935LL)))) : ((~((+(7606337329148531867ULL))))))))));
    }
}
