/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5409
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
    var_20 ^= (~(((/* implicit */int) var_6)));
    var_21 = ((/* implicit */unsigned long long int) max(((~((+(var_7))))), (((/* implicit */long long int) var_11))));
    var_22 = ((((/* implicit */_Bool) 1125899906834432LL)) ? (944133573237798038LL) : (-1125899906834418LL));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_4 [i_0 + 1] [i_1]), (arr_4 [i_0 + 2] [12LL])))) * (((/* implicit */int) arr_0 [i_0] [i_1]))));
                    var_23 = ((((max((((((/* implicit */_Bool) var_19)) ? (-1125899906834449LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (arr_1 [i_0 - 2]))) + (9223372036854775807LL))) << (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 2] [i_1] [i_0 - 1]))) / (1125899906834434LL))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [14U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(arr_12 [i_0 + 3] [i_0] [(_Bool)1] [i_3] [i_3] [i_2] [i_1])))), (((unsigned long long int) 1125899906834432LL))))) ? (max((max((1125899906834449LL), (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_4])))), (((/* implicit */long long int) arr_2 [i_0 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((-1125899906834420LL) > (-1125899906834436LL)))))));
                                var_24 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) | (((/* implicit */int) arr_0 [i_0] [i_0 - 3])))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
