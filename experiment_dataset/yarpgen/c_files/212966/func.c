/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212966
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
    var_15 = ((/* implicit */long long int) var_10);
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_3)) : (var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    var_18 = ((/* implicit */long long int) max((arr_3 [i_0] [(short)2]), (((/* implicit */unsigned char) ((((/* implicit */long long int) arr_5 [i_0 + 1] [i_0 - 2] [i_0 + 1])) > (4776751966519679868LL))))));
                    var_19 = ((/* implicit */_Bool) -3LL);
                    arr_8 [i_0 + 1] [i_0 + 1] [i_2 - 1] [i_0 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)783)) ? (-4776751966519679869LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) (short)425)) : (((/* implicit */int) arr_4 [i_1])));
                }
                arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_0])))) : (((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 - 1] [i_1]))))) / (((-4776751966519679869LL) | (((/* implicit */long long int) var_11))))))));
            }
        } 
    } 
}
