/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39175
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
    var_20 = ((/* implicit */unsigned char) (~(var_9)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [(short)5] [i_0])) % (((/* implicit */int) arr_4 [i_0]))))) == (((((/* implicit */_Bool) 1513491707U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)5] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1]))) : ((+(((((/* implicit */_Bool) (short)0)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */long long int) arr_2 [i_0] [i_0]))))))));
                var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_0 - 3] [i_0]), (arr_3 [i_0 + 1] [i_0]))))) & (min((4182163492854436949ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) 10804273734218909262ULL))));
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (int i_3 = 3; i_3 < 24; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2] [i_3 + 1] [i_4])) || ((((!(((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_4] [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)107))) % (-867395524875333590LL))))))));
                    var_25 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_9 [i_3 - 3]))))));
                }
            } 
        } 
    } 
}
