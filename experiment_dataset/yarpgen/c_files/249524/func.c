/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249524
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
    var_13 = ((/* implicit */short) min((var_11), (((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_5)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((((((/* implicit */_Bool) 0ULL)) || ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (var_4));
                    var_14 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 18446744073709551609ULL)) || (((/* implicit */_Bool) var_4)))) ? ((((-(arr_5 [i_0] [i_2] [(signed char)4] [i_2]))) ^ (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) ((unsigned long long int) 262112))) ? (min((var_4), (((/* implicit */int) (unsigned short)17)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [2]))) > (var_11))))))));
                    var_15 *= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) < ((+(((/* implicit */int) (unsigned short)65518)))))))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */unsigned short) var_5);
    var_17 = ((/* implicit */short) var_5);
}
