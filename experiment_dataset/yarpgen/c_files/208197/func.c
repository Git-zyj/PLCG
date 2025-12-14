/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208197
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((((((/* implicit */int) ((((/* implicit */_Bool) 353398409308705723LL)) || (((/* implicit */_Bool) (short)21663))))) >= (((/* implicit */int) min(((_Bool)0), (var_8)))))), (((_Bool) (_Bool)1)))))));
                var_14 = ((/* implicit */long long int) var_6);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_0 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_13 [i_4 - 1] [i_3] [i_2])) == (((/* implicit */int) arr_11 [i_2] [i_3] [i_2])))), (((arr_9 [i_3] [i_4 - 1]) == (((/* implicit */int) arr_11 [i_2] [i_3] [i_4 - 1]))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) 324277024U))))))));
                }
            } 
        } 
    } 
}
