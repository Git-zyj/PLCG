/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195372
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
    var_14 = ((/* implicit */unsigned short) ((var_5) >> (((var_13) - (85622643276368809ULL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 8191U)) | (min((((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_1])), (max((((/* implicit */unsigned long long int) var_10)), (3130434661339218409ULL)))))));
                var_15 = ((((/* implicit */_Bool) 274169239)) ? (var_8) : (min((arr_3 [i_0] [i_0 - 1]), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)7)) == (((/* implicit */int) (signed char)-7))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (max((((/* implicit */unsigned int) arr_0 [i_2] [i_2])), (arr_6 [i_2] [i_3]))) : (max((arr_6 [i_2] [i_3]), (var_1)))));
                var_17 = 15316309412370333207ULL;
                arr_9 [i_2] [i_3] = ((/* implicit */unsigned int) min((arr_1 [i_2]), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2] [i_3])) > (((/* implicit */int) arr_0 [i_3] [i_2])))))));
                var_18 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2192922109U))));
            }
        } 
    } 
}
