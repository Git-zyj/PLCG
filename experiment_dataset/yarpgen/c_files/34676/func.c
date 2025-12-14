/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34676
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) (!(((arr_0 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))));
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) % (max((((/* implicit */unsigned long long int) ((arr_2 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))), (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_20 = min((((/* implicit */unsigned long long int) (signed char)-9)), (1407119883251527165ULL));
                            arr_12 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_2] [i_0] [i_2] [i_3])), (((((/* implicit */_Bool) var_17)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24521)))))))) ? (((/* implicit */unsigned long long int) -6455910707232240575LL)) : ((-((+(arr_0 [i_0])))))));
                            arr_13 [i_3] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) * (1407119883251527177ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) max((((/* implicit */long long int) var_17)), (-12LL)));
    var_22 -= ((/* implicit */_Bool) 5891545373291756400ULL);
}
