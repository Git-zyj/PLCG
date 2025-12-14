/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211891
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
    var_18 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (var_1))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_2 [i_0 + 1]), (arr_0 [i_0] [i_1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (var_12))))))));
                    arr_6 [i_0] [i_1 - 1] [i_2] = ((/* implicit */int) max((min(((_Bool)1), ((_Bool)1))), (var_6)));
                    arr_7 [i_0] = ((min((((/* implicit */long long int) arr_2 [i_0 + 1])), (max((var_2), (((/* implicit */long long int) arr_3 [i_0 + 1] [i_0 + 1])))))) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [13U])) ? ((+(arr_3 [3U] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) 8575113368094581439LL);
                                arr_15 [i_0] [i_3] [i_2] [i_2 - 3] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) min((var_14), (((/* implicit */unsigned short) (_Bool)1))))) | (((/* implicit */int) ((unsigned short) var_13))))));
                                var_20 = ((/* implicit */int) max((var_20), ((-((-(((/* implicit */int) max((arr_2 [i_4]), (arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                                var_21 -= ((((/* implicit */_Bool) min((arr_11 [i_0 + 1] [i_0 + 1]), (arr_11 [i_0 + 1] [i_1 - 1])))) && ((!(((/* implicit */_Bool) ((9223372036854775807LL) << (((((-5027603014697922420LL) + (5027603014697922482LL))) - (62LL)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (((~(min((((/* implicit */int) (_Bool)1)), (arr_9 [i_5] [11LL]))))) < (((/* implicit */int) ((min((var_17), (((/* implicit */unsigned long long int) arr_2 [i_5])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))))));
                var_23 = (((~(var_11))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4666058790976395811LL)))))));
                var_24 = (((!(((/* implicit */_Bool) arr_17 [i_5])))) ? (max((((/* implicit */long long int) arr_4 [i_5] [i_6] [i_6])), (((arr_12 [i_5]) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10356))))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_6]))))), ((((_Bool)1) ? (-3071312424966365422LL) : ((-9223372036854775807LL - 1LL)))))));
            }
        } 
    } 
}
