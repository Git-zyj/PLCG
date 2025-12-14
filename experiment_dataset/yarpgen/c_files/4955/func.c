/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4955
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((int) var_3))), ((-(var_1))))) ^ (((/* implicit */unsigned long long int) 1073741824))));
                    arr_6 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38821))) : (((unsigned int) (unsigned char)43))));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_1))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) ((var_2) ? (min((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) var_7)), (11240450020630073879ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) var_0)))))))));
    var_12 = ((/* implicit */short) var_2);
}
