/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246537
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
    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 21U)), (6393207310680733708ULL)))) ? (4294967274U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)64433)) * (((/* implicit */int) (short)20928))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9218)))));
    var_20 = min((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4294967274U)))) | (min((((/* implicit */long long int) 1491198424U)), ((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) var_12)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */unsigned int) (-((((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))), (4294967266U))))));
                            var_22 = ((/* implicit */signed char) ((((min((6393207310680733698ULL), (((/* implicit */unsigned long long int) var_2)))) - (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (6393207310680733708ULL))))) - (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(short)1] [i_3] [i_3]))) : (38U))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (+(min((((/* implicit */int) (_Bool)0)), (arr_10 [i_0] [i_0] [6] [i_3 + 1])))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_0] = ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) 1125899873288192ULL)) ? (arr_3 [i_0] [(_Bool)1]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [10] [i_0]))) ^ (15U)))))));
            }
        } 
    } 
}
