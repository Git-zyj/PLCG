/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208484
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((long long int) var_11))))), (arr_1 [i_0] [i_0]))))));
                    arr_6 [i_0] [(signed char)5] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) min((((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */long long int) var_5)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((-(2097151LL))) % (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) | (var_12)));
    var_19 += ((/* implicit */signed char) 2097141LL);
}
