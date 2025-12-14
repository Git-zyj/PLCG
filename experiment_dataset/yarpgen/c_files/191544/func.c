/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191544
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
    var_11 = ((/* implicit */short) min((var_5), (((/* implicit */int) (unsigned short)30261))));
    var_12 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)-71)) ? ((+(-8LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)35257)))))), (((/* implicit */long long int) var_0))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    arr_8 [i_0] [4] [4] = ((/* implicit */long long int) arr_5 [i_0] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            {
                var_13 = ((signed char) min((((/* implicit */short) (_Bool)1)), (arr_9 [i_3 - 1] [i_3 + 1])));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        {
                            arr_18 [i_3] = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_11 [i_3] [i_3 + 1])))), (((/* implicit */int) ((short) ((short) var_9))))));
                            var_14 = ((/* implicit */short) var_7);
                        }
                    } 
                } 
            }
        } 
    } 
}
