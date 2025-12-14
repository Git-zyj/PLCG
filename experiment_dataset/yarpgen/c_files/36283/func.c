/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36283
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
    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -5049125274581171764LL)) ? (((/* implicit */long long int) 4294967283U)) : (-5049125274581171782LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((unsigned short) min((arr_6 [i_2 + 1] [i_2]), (arr_6 [i_2 + 1] [i_2]))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(4294967283U)))) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) - ((-(((/* implicit */int) var_0)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) (!(var_6)));
    var_18 = ((/* implicit */unsigned short) var_2);
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (max((max((((/* implicit */long long int) var_5)), (var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30974))))))))));
}
