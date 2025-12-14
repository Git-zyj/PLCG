/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231289
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */long long int) 31)), ((+(8679811517692102829LL))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_3 [i_1] [i_0] [i_0])))))) != (min((max((arr_3 [i_0] [i_0] [17ULL]), (((/* implicit */unsigned long long int) 970923012U)))), (arr_1 [i_0] [i_0])))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_8);
}
