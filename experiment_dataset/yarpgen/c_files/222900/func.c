/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222900
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [8ULL] &= ((/* implicit */short) 5108082858240496744ULL);
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) ^ (arr_1 [i_2 + 3])))))))));
                    var_15 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-82)) ? (arr_1 [i_0 + 2]) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-24444))))))))) : (((arr_6 [i_0] [i_1] [i_0]) - (arr_0 [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_16 = var_12;
    var_17 = ((/* implicit */_Bool) var_13);
    var_18 = ((_Bool) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            {
                var_19 += ((/* implicit */unsigned int) ((short) ((arr_13 [i_3] [(short)12] [(short)12]) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                arr_15 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)21033)) ? (((/* implicit */int) (short)-13276)) : (((/* implicit */int) (short)16384))));
            }
        } 
    } 
}
