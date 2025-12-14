/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196889
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((max((((/* implicit */int) (unsigned short)3)), (-1959478839))), (((/* implicit */int) ((((/* implicit */_Bool) 5U)) && (((/* implicit */_Bool) -2045152250)))))));
                            var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) ((_Bool) (-(((unsigned int) (short)8191)))));
                var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(125829120U)))) - (var_10)));
                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-((-(max((var_2), (((/* implicit */unsigned long long int) var_4))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_14);
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((((((/* implicit */_Bool) 1264320914U)) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)34819)))) : (((((/* implicit */_Bool) var_17)) ? (4889285613444461420LL) : (((/* implicit */long long int) 2045152259)))))) + (9223372036854775807LL))) << (((((-2128395157338086219LL) + (2128395157338086278LL))) - (59LL))))))));
}
