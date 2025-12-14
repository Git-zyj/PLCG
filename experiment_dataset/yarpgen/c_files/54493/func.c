/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54493
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (~(2024710831))))));
        var_13 += (~(((/* implicit */int) (_Bool)0)));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] [(unsigned short)5] = ((/* implicit */int) ((unsigned char) (_Bool)1));
        var_14 += ((/* implicit */_Bool) (~((+(arr_1 [i_1] [i_1])))));
        arr_7 [i_1] = ((/* implicit */signed char) (_Bool)1);
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        var_15 |= ((/* implicit */short) arr_1 [3U] [3U]);
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_8)) ^ (((/* implicit */int) (_Bool)1))))));
    }
    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((arr_11 [4ULL]) >= (140737488355312LL)))))))) - ((-(arr_2 [i_3]))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (unsigned char)255))));
        var_18 = ((/* implicit */unsigned int) (!(var_10)));
        var_19 = ((/* implicit */long long int) var_0);
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+(((3195349719215584869LL) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))))))))));
    }
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_9))));
    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((-1) < (max((1663708373), (-719821543)))))), ((-(((int) (unsigned char)255))))));
}
