/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232297
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) (_Bool)0));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_1] [i_0])), (arr_3 [i_0] [i_0] [i_0]))))))) << (((((/* implicit */int) var_3)) + (25303)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            {
                arr_14 [i_4] [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((var_15) / (var_13))) + (((/* implicit */int) arr_13 [i_3] [i_3]))))) <= (((unsigned int) ((arr_11 [i_3]) ? (arr_10 [i_3] [i_3]) : (arr_10 [i_3] [i_3]))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((arr_12 [i_3] [i_3]), (((/* implicit */unsigned short) (short)-23657)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((min(((+(var_15))), (((/* implicit */int) ((short) (unsigned short)47229))))), (((/* implicit */int) min((((/* implicit */unsigned short) ((short) var_10))), (var_2))))));
}
