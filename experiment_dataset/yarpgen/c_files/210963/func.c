/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210963
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((signed char) (short)19043))), (1867885414943848683LL)));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (~(-9216461410091697660LL))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) << (((((/* implicit */int) var_11)) - (223)))))), (min((((/* implicit */unsigned long long int) var_2)), (9408768484185730914ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (-9216461410091697666LL)))) || (((((/* implicit */_Bool) (short)-19043)) || (((/* implicit */_Bool) var_2))))))))));
    var_18 |= ((/* implicit */unsigned long long int) ((unsigned char) 3));
}
