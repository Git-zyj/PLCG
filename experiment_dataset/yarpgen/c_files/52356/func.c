/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52356
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
    var_10 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_4)))), (max((((/* implicit */int) (unsigned char)255)), (-564157896)))))), (min((min((4503599627368448ULL), (((/* implicit */unsigned long long int) -8648374339420379438LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1401015659)), (1U))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((min((var_2), (var_2))), (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned short) var_1)))))))), (max((((/* implicit */unsigned long long int) max((arr_2 [i_0]), (((/* implicit */unsigned short) (unsigned char)0))))), (max((arr_0 [i_1]), (((/* implicit */unsigned long long int) var_2))))))));
                var_12 += ((/* implicit */unsigned int) min((min((min((((/* implicit */long long int) var_1)), (arr_3 [i_0]))), (((/* implicit */long long int) min((var_6), (var_6)))))), (min((max((-4611686018427387904LL), (var_2))), (max((var_2), (var_8)))))));
            }
        } 
    } 
}
