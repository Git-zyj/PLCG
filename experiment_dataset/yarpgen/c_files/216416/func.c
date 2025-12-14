/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216416
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((var_10) >= (((/* implicit */int) var_2)))))) * (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_21 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_1] [i_0 + 1])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_3 - 1]))))) <= (((((/* implicit */_Bool) (unsigned short)18894)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))) : (4691914450127695253ULL)))));
                            var_22 = ((/* implicit */_Bool) var_13);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)89)) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_0))))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_14)) + (15880)))))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) var_11);
                var_26 *= ((/* implicit */signed char) var_11);
            }
        } 
    } 
}
