/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215351
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) var_15);
                var_19 -= ((/* implicit */unsigned long long int) var_8);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned char i_4 = 3; i_4 < 9; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (int i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            {
                                var_20 += ((/* implicit */_Bool) var_3);
                                arr_20 [i_3] [i_4] = ((/* implicit */long long int) ((_Bool) ((min((arr_4 [i_2 - 1] [i_2]), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-69))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_2 - 1] [i_4 + 1] [i_4] [i_4 + 3] [(unsigned char)1])))));
                    var_23 = ((/* implicit */_Bool) ((((arr_8 [i_2 - 2]) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 1]))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (arr_14 [i_3] [i_4] [i_3] [i_3])))) ? ((~(((/* implicit */int) arr_0 [i_3] [14LL])))) : (((/* implicit */int) arr_0 [i_3] [i_2 + 2])))))));
                }
            } 
        } 
    } 
}
