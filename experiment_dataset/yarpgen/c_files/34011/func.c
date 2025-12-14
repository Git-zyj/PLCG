/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34011
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
    var_17 = ((/* implicit */int) ((var_14) << (((var_5) - (3963572386U)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0]))))) == (((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_0]))))));
                    var_18 = (-(((/* implicit */int) arr_1 [i_0])));
                }
                var_19 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_14)) : (arr_4 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (var_9)))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_10)))) ? (var_9) : (var_5))) - (594602872U)))));
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_2 [i_1])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_2 [i_1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (arr_2 [i_0])))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-115)) || (((/* implicit */_Bool) (unsigned short)63059))))))));
}
