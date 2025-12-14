/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47204
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 += ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? ((((!((_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_1]), (((/* implicit */unsigned short) arr_2 [i_1])))))) : (((arr_6 [i_1 - 2] [i_0]) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) 255ULL))))))));
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) << (((unsigned long long int) arr_6 [(unsigned char)9] [i_1 + 3])))), (((/* implicit */int) (!(((_Bool) var_3))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_5);
    var_14 = ((/* implicit */short) var_0);
    var_15 += ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((var_8) ? (var_2) : (((/* implicit */unsigned long long int) -918047169))))) ? (var_3) : (((/* implicit */int) (_Bool)1)))));
}
