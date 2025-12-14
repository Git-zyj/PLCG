/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238989
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
    var_11 = ((/* implicit */long long int) var_2);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [(short)4] [(unsigned char)21] |= ((/* implicit */signed char) var_1);
        arr_4 [(unsigned char)8] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)118)) / (var_1)))) ? (((/* implicit */int) (unsigned short)178)) : (((/* implicit */int) (unsigned char)129)))), (((/* implicit */int) arr_1 [23]))));
        arr_5 [8] = min((min(((~(((/* implicit */int) arr_0 [(short)13])))), (((/* implicit */int) (unsigned short)179)))), ((+((~(var_0))))));
    }
    for (long long int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) | (-828009500875088172LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3879840526U)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [12U]))))) ? (((/* implicit */unsigned long long int) (+(arr_8 [8ULL] [(unsigned char)1])))) : (((unsigned long long int) 227858808)))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (min((var_7), (((/* implicit */unsigned long long int) var_8)))) : (((unsigned long long int) ((((/* implicit */int) arr_0 [(unsigned char)2])) << (((((/* implicit */int) arr_1 [4])) - (30106))))))));
        arr_10 [i_1] = ((/* implicit */unsigned char) ((unsigned int) var_4));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)118)) | (var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((~(4135478875U))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 4; i_2 < 20; i_2 += 2) 
    {
        arr_15 [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_3)) >= (arr_12 [21LL])))) >= ((-(((/* implicit */int) (unsigned short)11543))))));
        arr_16 [(unsigned char)5] = ((/* implicit */unsigned char) 1227904609531603423ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 2) 
    {
        arr_19 [16U] = ((/* implicit */long long int) (~(var_0)));
        var_15 |= ((/* implicit */unsigned long long int) (~(811401401899292160LL)));
        var_16 |= ((/* implicit */unsigned char) arr_12 [i_3 - 2]);
        var_17 = ((/* implicit */int) -6922472250227714562LL);
    }
    var_18 = ((/* implicit */signed char) var_7);
}
