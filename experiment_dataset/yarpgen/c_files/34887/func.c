/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34887
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(var_0))), ((-(var_0)))))) ? (((/* implicit */long long int) (+(max((var_3), (((/* implicit */int) var_5))))))) : (max((5717989538510453942LL), (((/* implicit */long long int) 1818631091U)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1] = (~(min((arr_1 [i_1]), (arr_1 [i_2 - 1]))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] &= ((/* implicit */int) min(((+(((((/* implicit */_Bool) (unsigned short)56575)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31636))))))), (((/* implicit */unsigned int) 166386738))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [3] [i_0] [i_3] [i_2] = ((/* implicit */unsigned char) min((var_3), (((/* implicit */int) arr_3 [i_3]))));
                                var_11 = var_7;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
