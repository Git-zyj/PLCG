/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48966
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))), (((((/* implicit */_Bool) 14ULL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0])))))))) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (-2127427109))) : (((/* implicit */int) (_Bool)1)))))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7LL)) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (1389780952)))) ? (((((/* implicit */_Bool) -1389780953)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18602))) : (1ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_1])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) -1299789498)) ? (9106453576913620565ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17916)))));
    var_16 *= ((/* implicit */_Bool) var_1);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1389780948)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))));
    var_18 *= ((/* implicit */short) var_10);
}
