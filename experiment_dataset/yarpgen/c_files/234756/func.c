/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234756
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 2838742311U)) | (7608135209033476461LL)))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 3315007157U)) ? (((/* implicit */long long int) 979960138U)) : (arr_5 [i_0] [i_0 - 1] [i_0 + 1])))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7356912091640399873LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13957))) : (3315007157U)));
    var_12 = ((/* implicit */unsigned char) ((var_5) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
    var_13 += ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)9936))));
}
