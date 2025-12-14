/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223534
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_13 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (_Bool)0))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))) ? (var_6) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))));
                    arr_8 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((((min((var_6), (((/* implicit */int) (_Bool)1)))) == ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (max((((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))), (min((1123397255), (((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
    var_14 = ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) <= (((/* implicit */int) var_9)))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)255))))) ? (min((((/* implicit */int) var_4)), (-1048464350))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) var_0))))))));
    var_16 = ((/* implicit */_Bool) max((1123397258), (((/* implicit */int) (_Bool)0))));
}
