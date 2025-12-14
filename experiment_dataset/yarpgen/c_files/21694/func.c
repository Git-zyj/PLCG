/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21694
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
    var_15 = var_2;
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (1996095818)))) / ((+(arr_0 [i_0 - 1])))));
                arr_7 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_0])) * (((/* implicit */int) arr_4 [i_0 + 1] [i_0]))))), (max((((-7795405606071453721LL) / (((/* implicit */long long int) -440430732)))), (((/* implicit */long long int) -440430732))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (int i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            {
                arr_12 [i_3] [i_3 - 1] = ((/* implicit */unsigned short) max((((((/* implicit */long long int) max((arr_5 [i_3]), (-1996095828)))) / (max((7795405606071453694LL), (((/* implicit */long long int) 1996095818)))))), (((/* implicit */long long int) max((((((/* implicit */int) (unsigned short)52927)) & (-440430732))), (((/* implicit */int) arr_2 [i_3])))))));
                arr_13 [i_3] [i_3 - 1] = (unsigned short)2114;
            }
        } 
    } 
}
