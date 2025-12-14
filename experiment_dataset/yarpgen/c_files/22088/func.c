/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22088
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                arr_8 [i_1] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */long long int) var_7)), (arr_4 [i_1 + 2] [i_1 + 2] [i_0]))));
                var_11 *= ((/* implicit */unsigned int) (+(min(((+(var_2))), (((/* implicit */long long int) arr_7 [i_1 + 2] [i_1 - 2] [i_1 + 2]))))));
            }
        } 
    } 
    var_12 -= ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned short)0))))))), (min((arr_15 [i_2] [i_2] [i_3 - 1] [i_4 + 2]), (arr_15 [i_2] [i_3 - 1] [i_3 - 1] [i_4 + 2])))));
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) 11640541942485160189ULL))));
                            }
                        } 
                    } 
                } 
                var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) max((arr_9 [i_3 + 1] [i_3 - 1]), (arr_9 [i_3 - 1] [i_3 + 1])))) : (((((((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_2] [i_3 + 1])) ? (var_4) : (var_0))) + (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
