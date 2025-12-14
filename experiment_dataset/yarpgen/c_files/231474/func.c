/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231474
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
    var_12 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (max((((/* implicit */unsigned long long int) var_6)), (14374288106275381402ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3672)) >= (max((var_2), (((/* implicit */int) (unsigned short)65520))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (11857286615432255126ULL)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (4072455967434170214ULL)))))))));
        var_14 = ((/* implicit */short) (~(arr_1 [i_0])));
    }
    for (long long int i_1 = 4; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_4 [i_1 + 2] = ((/* implicit */short) var_2);
        arr_5 [i_1 + 2] = ((/* implicit */_Bool) var_7);
        var_15 ^= ((/* implicit */unsigned short) var_6);
        var_16 = (unsigned short)3672;
    }
    for (long long int i_2 = 4; i_2 < 18; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = (unsigned short)18028;
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)61869))) + (max((189985502116842883ULL), (arr_3 [i_2 + 2]))))))));
        arr_10 [(short)19] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_2])) <= (((/* implicit */int) arr_8 [(unsigned short)16]))))) ^ ((~(((/* implicit */int) arr_8 [i_2]))))));
        var_18 ^= (+((-(((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        arr_14 [22LL] = ((/* implicit */unsigned int) (~(14374288106275381408ULL)));
        arr_15 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))) + (var_8)));
    }
}
