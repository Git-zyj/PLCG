/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193546
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
    var_19 = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */int) ((_Bool) var_4))), (((((/* implicit */int) (_Bool)1)) + (var_2))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) var_11);
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_2 [i_0 - 2] [i_0 + 4]), (arr_2 [i_0 - 2] [i_0 + 2])))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((3462659003U) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                var_22 &= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 2])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_23 &= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_9 [i_2])))) && (((/* implicit */_Bool) ((12779540742381031962ULL) << (((arr_1 [i_3]) - (3940106088U))))))))), (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (1)))) ? (((/* implicit */long long int) ((arr_9 [i_2]) % (arr_9 [i_2 + 1])))) : (((long long int) 12779540742381031990ULL))))));
                    var_24 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)15244)) ? (((/* implicit */int) (unsigned short)59947)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4] [i_4]))) > (arr_9 [i_2])))))));
                }
            } 
        } 
    } 
}
