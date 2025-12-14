/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207852
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
    var_19 = ((/* implicit */_Bool) min((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18107))) >= (var_3)))), (((/* implicit */unsigned long long int) var_12))));
    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32766)) ? (16383U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9430)))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((((/* implicit */int) (short)-2276)) + (2147483647))) >> (((((/* implicit */int) (signed char)125)) - (105)))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_22 = ((int) ((((/* implicit */int) (short)-32762)) & (((/* implicit */int) (signed char)78))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) var_6)) : (var_5)))) ? (min((4294950912U), (((/* implicit */unsigned int) (short)32765)))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-32742), (((/* implicit */short) var_6))))))))));
                }
            } 
        } 
    } 
}
