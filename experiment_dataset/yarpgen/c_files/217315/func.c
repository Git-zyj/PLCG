/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217315
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (max((((/* implicit */int) var_3)), (2147483645))) : (max((2147483645), (-2147483635)))))) ? (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)21131)) : (((/* implicit */int) (short)17)))) / (((/* implicit */int) ((_Bool) (short)-13))))) : (((/* implicit */int) var_4))));
    var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))), (((unsigned long long int) (_Bool)1))))) ? (((max((-8367132081713046634LL), (((/* implicit */long long int) (_Bool)1)))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))))) : (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) ((_Bool) 15903933855231330050ULL))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */short) ((_Bool) arr_0 [i_1 + 2] [i_1 + 2]))), (((short) (unsigned char)250))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_4 [10] [i_1 + 2] [i_1 + 2]))))))));
                var_15 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(arr_4 [i_0] [i_0] [i_0])))), (max((((/* implicit */long long int) (unsigned short)12924)), (arr_0 [i_1 + 2] [i_1 + 1])))));
            }
        } 
    } 
    var_16 ^= ((/* implicit */short) ((((_Bool) var_9)) ? (((((/* implicit */_Bool) 8367132081713046657LL)) ? (((unsigned int) (unsigned char)194)) : (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
}
