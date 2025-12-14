/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198541
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((min((((/* implicit */unsigned char) arr_0 [i_0 - 1])), (((unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_0 - 1])) >= (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]))))))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_22 -= ((/* implicit */_Bool) ((signed char) 12146966303070305721ULL));
                            arr_9 [i_1] [i_1] [i_3] [i_1] |= (+(0ULL));
                            var_23 += ((/* implicit */short) ((min((arr_7 [i_0 - 1] [i_1]), (arr_7 [i_1] [i_3 + 1]))) ? (((/* implicit */unsigned long long int) (~(var_15)))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_7 [i_0] [i_3])), (-761212421072660904LL)))), (min((18446744073709551608ULL), (((/* implicit */unsigned long long int) (unsigned char)121))))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] |= (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (min((((/* implicit */unsigned long long int) (short)27443)), (12ULL))))));
            }
        } 
    } 
}
