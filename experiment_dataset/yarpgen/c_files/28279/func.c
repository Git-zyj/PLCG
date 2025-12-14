/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28279
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
    var_12 = ((/* implicit */signed char) max((max((max((187066407399167783ULL), (((/* implicit */unsigned long long int) (unsigned char)60)))), (((/* implicit */unsigned long long int) (short)4064)))), (((/* implicit */unsigned long long int) (unsigned char)194))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (((~(3555547980U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_5 [i_2] [i_1])))))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_8 [i_0] [(short)0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((unsigned long long int) (signed char)12)) : ((~(arr_8 [i_0] [i_0])))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */int) arr_4 [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 1419515512U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5)))))) ? (min((var_9), (var_1))) : (((((/* implicit */int) (unsigned char)157)) * (((/* implicit */int) (unsigned char)12))))));
                }
            } 
        } 
    } 
}
