/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44157
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
    var_16 = ((((/* implicit */int) (unsigned char)100)) >= (((/* implicit */int) (unsigned char)179)));
    var_17 |= ((/* implicit */unsigned int) ((-756272287) >= (((/* implicit */int) (unsigned char)5))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_18 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 756272276)) ^ (((((/* implicit */_Bool) var_6)) ? (4286240861U) : (arr_7 [i_1] [i_2] [i_2] [i_3] [i_0])))))), (min((((((/* implicit */_Bool) (unsigned short)34818)) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (var_10))), (((/* implicit */unsigned long long int) arr_8 [15] [i_1 + 1] [i_3] [i_3]))))));
                            var_19 = arr_4 [i_0];
                        }
                    } 
                } 
                var_20 *= ((/* implicit */unsigned char) arr_4 [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -756272289)) ? (arr_19 [i_6] [14] [i_4]) : (arr_19 [(_Bool)1] [i_5] [(_Bool)1]))), (((/* implicit */unsigned long long int) -5796188403274596719LL))));
                    arr_20 [22U] = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -3640943248523753022LL))))), (((unsigned char) min((((/* implicit */int) arr_12 [i_5])), (arr_14 [10ULL]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
