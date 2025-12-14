/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51791
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
    var_20 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))));
    var_21 = ((/* implicit */short) (unsigned char)196);
    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_6) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_12))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (((((/* implicit */_Bool) var_8)) ? (var_19) : (var_7)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((unsigned char) var_14));
        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)196))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_25 = ((/* implicit */signed char) (unsigned char)178);
                    arr_6 [i_1] = ((/* implicit */_Bool) arr_3 [i_1]);
                }
            } 
        } 
    }
}
