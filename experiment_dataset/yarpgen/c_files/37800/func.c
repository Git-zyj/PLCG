/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37800
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) min((var_11), (max((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) / (((var_10) ? (4643734288414822946LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
                arr_6 [i_0] = min((((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) ((short) (signed char)0)))))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0] [i_0]));
                arr_8 [i_1] = (unsigned char)112;
            }
        } 
    } 
    var_12 |= ((((/* implicit */int) var_0)) / (((/* implicit */int) var_2)));
    var_13 = ((/* implicit */unsigned char) ((unsigned short) 592600381));
}
