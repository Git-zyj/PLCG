/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36939
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_1 - 1] = ((/* implicit */short) max(((~(8221329445811378525ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
                    arr_9 [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1)))))));
                    var_11 = ((/* implicit */unsigned long long int) (-(1549295088U)));
                }
            } 
        } 
    } 
    var_12 = var_4;
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            for (unsigned int i_5 = 1; i_5 < 13; i_5 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_5 - 1]))));
                    arr_19 [10] [(_Bool)1] [i_3] = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) arr_10 [i_4] [i_5 - 1])))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)27079))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_17 [i_3] [i_4] [i_4] [i_4]))))))) : (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) var_3)), (9742815879342887493ULL)))))));
                }
            } 
        } 
    } 
}
