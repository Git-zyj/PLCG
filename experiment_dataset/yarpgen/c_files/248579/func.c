/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248579
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
    var_13 = ((/* implicit */short) var_9);
    var_14 = ((short) min((((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_4)))), (((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_3)))))));
    var_15 -= (!((!(((/* implicit */_Bool) ((unsigned long long int) var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] [(short)16] = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */int) arr_7 [(unsigned char)17] [i_1] [i_2])) ^ (((/* implicit */int) arr_3 [i_0])))) * ((+(((/* implicit */int) arr_7 [i_1 + 2] [i_1 - 1] [i_2])))))));
                    var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0]))) || (((/* implicit */_Bool) ((((((/* implicit */int) var_8)) >= (((/* implicit */int) (signed char)120)))) ? (((/* implicit */int) ((_Bool) arr_1 [i_1 + 2] [i_1]))) : (((((/* implicit */int) (signed char)27)) ^ (((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_1] [i_0])))))))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)72)) ? (11890121482044324674ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72)))));
}
