/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207228
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)0)), (var_13)))))))));
                arr_4 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_1 + 2] [i_1])), (var_8))))));
                var_17 = ((/* implicit */short) (((-(((/* implicit */int) max((var_7), (((/* implicit */signed char) arr_0 [i_1] [i_0]))))))) >= (((/* implicit */int) ((((/* implicit */_Bool) (short)7)) || (arr_0 [i_1 - 1] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            {
                var_18 |= ((int) (_Bool)1);
                var_19 = ((/* implicit */_Bool) arr_2 [i_2] [i_2]);
                var_20 = ((/* implicit */unsigned long long int) ((_Bool) var_8));
                var_21 = ((/* implicit */signed char) (-(((long long int) arr_5 [i_3 - 2]))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= ((-9223372036854775807LL - 1LL)))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)3072)) : (((/* implicit */int) var_6)))))))));
    var_23 = ((/* implicit */unsigned char) var_12);
}
