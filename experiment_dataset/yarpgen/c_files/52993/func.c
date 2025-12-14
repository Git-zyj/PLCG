/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52993
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) ((unsigned char) arr_2 [i_0 - 1] [i_1] [1U]))) < ((~(((/* implicit */int) var_13)))))));
                var_18 = ((/* implicit */int) max((min((((/* implicit */unsigned int) (unsigned char)0)), (arr_1 [i_0 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-1629019555) - (((/* implicit */int) (unsigned short)33024))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) 4466319926261579637ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_3 [i_0]))));
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned int) var_7);
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((_Bool) var_3)))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_1 [i_2]) * (arr_1 [i_2])))) + (((max((((/* implicit */unsigned long long int) (unsigned char)1)), (18074414494859179845ULL))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255)))))))));
                arr_10 [i_2] [i_3] [i_3] |= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-18579))));
                var_23 = ((/* implicit */unsigned short) ((unsigned int) min((arr_9 [i_3] [i_2] [i_2]), (arr_9 [i_2] [i_2] [i_3]))));
            }
        } 
    } 
}
