/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198714
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
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) ((((((arr_3 [(unsigned short)5] [i_2]) <= (var_0))) ? (((unsigned int) arr_5 [i_0] [i_0] [i_1] [i_1])) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (4294967290U))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((4294967290U) <= (4294967290U)))))))));
                    var_11 = ((unsigned long long int) (-(var_4)));
                    arr_6 [i_0] [i_1] [i_2] = (~((-(((9831819289085380948ULL) / (8614924784624170667ULL))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) max((var_12), (min((min((((/* implicit */unsigned int) var_1)), ((~(10U))))), ((+((+(1U)))))))));
}
