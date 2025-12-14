/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51322
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
    var_17 = ((/* implicit */short) var_14);
    var_18 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_8)) % (((/* implicit */int) var_0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)1895))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_16))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((+(arr_7 [i_2]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((_Bool) arr_1 [i_1] [i_0])))))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))) : ((+(var_15)))));
                        var_22 = (+(((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) min((var_4), (((/* implicit */short) arr_11 [i_3])))))))));
                    }
                    var_23 = ((/* implicit */long long int) var_5);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) (+(((/* implicit */int) var_16))));
    var_25 = ((/* implicit */_Bool) var_13);
}
