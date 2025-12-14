/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50339
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) var_0);
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1])))))));
    }
    var_19 = ((/* implicit */int) 4294967270U);
    var_20 = var_1;
    /* LoopSeq 1 */
    for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_13))))))) ? (1073741816U) : (((/* implicit */unsigned int) (+(arr_4 [i_1] [i_1 - 1]))))));
        var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967284U)) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) (_Bool)1)), (4294967285U)))));
    }
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_3 [4])) ? (3221225475U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))))));
        var_24 = ((/* implicit */long long int) (((((-(((/* implicit */int) arr_0 [i_2])))) + (2147483647))) >> (min((((/* implicit */int) var_10)), ((+(((/* implicit */int) (_Bool)1))))))));
    }
    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_25 = ((((/* implicit */_Bool) 4294967290U)) ? (4363686772736LL) : (((/* implicit */long long int) 1073741832U)));
        var_26 = ((/* implicit */unsigned short) (signed char)70);
    }
}
