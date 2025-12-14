/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44946
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
    var_20 = ((/* implicit */long long int) var_8);
    var_21 ^= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) (unsigned short)23313)), (var_5))))) - (((/* implicit */int) ((max((((/* implicit */unsigned int) (_Bool)1)), (var_3))) != (((/* implicit */unsigned int) min((var_14), (((/* implicit */int) (short)255))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)245)) ? (((/* implicit */long long int) ((/* implicit */int) (short)270))) : (1099511627775LL)));
                var_23 ^= ((/* implicit */unsigned long long int) (unsigned short)33981);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */int) 18446744073709551615ULL);
                            var_25 ^= (((!(((/* implicit */_Bool) (short)-268)))) ? (((((/* implicit */_Bool) (short)32767)) ? ((((_Bool)1) ? (16918311795133879737ULL) : (58247851580265005ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) var_0)))))))) : (((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) arr_4 [i_0])))))));
                        }
                    } 
                } 
                var_26 += ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */signed char) arr_10 [i_0] [i_1] [i_1] [i_0])), (arr_1 [i_0]))))));
                var_27 ^= ((/* implicit */short) (((~(arr_7 [i_0] [i_0] [i_1] [16U]))) / (min((arr_7 [i_0] [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_0]))))));
            }
        } 
    } 
}
