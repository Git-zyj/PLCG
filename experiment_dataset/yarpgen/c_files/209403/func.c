/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209403
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
    var_16 = var_13;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) 11054449250918376253ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_8))))));
                arr_6 [(_Bool)1] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) ((var_11) <= (((/* implicit */int) var_4))))))) > (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) <= (var_14))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_3] = var_8;
                var_17 = ((unsigned int) var_7);
                var_18 *= ((/* implicit */unsigned char) ((((max((((/* implicit */int) ((signed char) arr_9 [13U] [7]))), ((+(((/* implicit */int) (short)-24822)))))) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (max((((/* implicit */unsigned int) (unsigned char)0)), (var_8))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_2)) : (arr_10 [i_2] [i_2] [i_2]))))) - (28973732U)))));
            }
        } 
    } 
}
