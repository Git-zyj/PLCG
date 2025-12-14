/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249895
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((((var_0) + (2147483647))) << (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_3 [i_0])), (1678449328466856525ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))))));
                var_13 = (((~(arr_1 [i_0] [i_1]))) | (arr_1 [i_0] [i_0]));
                var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [8ULL])) || (((/* implicit */_Bool) arr_2 [10LL]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))) != (558551906910208LL))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned char) 7201045066812963411ULL);
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_7))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_10))) : (((/* implicit */unsigned long long int) 767190167U)))));
}
