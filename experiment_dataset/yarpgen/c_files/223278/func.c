/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223278
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_3 [12ULL]))))), (arr_4 [13ULL] [13ULL] [i_0 + 4]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1])))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 2589983642U);
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_3);
}
