/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233433
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
    var_19 ^= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), ((~(((/* implicit */int) var_0)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) 2552391814U)) && (((/* implicit */_Bool) min((0U), (((((/* implicit */_Bool) 143833713099145216LL)) ? (262143U) : (0U)))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18U)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) (_Bool)1))));
                    var_22 ^= ((/* implicit */unsigned char) ((unsigned int) arr_3 [i_0] [(short)10] [4LL]));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) 16U))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_9)), (3U))) > (min((var_1), (max((16U), (((/* implicit */unsigned int) (unsigned short)14568))))))));
    var_25 = ((/* implicit */long long int) var_15);
}
