/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217881
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
    var_19 = ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) (unsigned char)229)))))) ? ((+(((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((var_0) ? (((/* implicit */int) (_Bool)1)) : (var_7))) : ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */short) (_Bool)0))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))) : ((-(((/* implicit */int) var_15))))))) : (max((((/* implicit */long long int) var_8)), ((~(var_4)))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_12)))) ? (((unsigned int) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_10), (var_1)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) (_Bool)1))))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 += ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((/* implicit */int) var_16)))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    arr_9 [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))));
                    arr_10 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_10)))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        var_24 ^= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
    }
    var_25 = (!(((/* implicit */_Bool) var_13)));
    var_26 = (((!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_10)))))) ? (((((/* implicit */_Bool) ((int) var_17))) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_9)));
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((-(((int) (_Bool)1)))) : ((~(((/* implicit */int) var_13))))));
}
