/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42676
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */int) ((((/* implicit */int) (short)7029)) > (((/* implicit */int) (unsigned char)255))));
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) ((arr_1 [i_0]) & (arr_1 [i_0])));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1])) ^ (((/* implicit */int) var_8)))))));
        var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_14)), ((-(((/* implicit */int) (unsigned char)26))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (((-1354183968390176606LL) + (((/* implicit */long long int) (-(var_3))))))));
        arr_5 [18] = ((/* implicit */_Bool) var_3);
    }
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) (unsigned char)113)) : (((((/* implicit */_Bool) 18016022133958570822ULL)) ? (((/* implicit */int) (short)17467)) : (((/* implicit */int) (signed char)4)))))) + (((/* implicit */int) (_Bool)1))));
                    var_19 = ((/* implicit */unsigned char) var_13);
                }
            } 
        } 
    } 
}
