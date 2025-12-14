/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230934
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
    var_20 = 33554431ULL;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) (unsigned short)53117);
        var_21 = ((/* implicit */long long int) (+((~(((((/* implicit */int) (unsigned short)53143)) + (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_22 = ((/* implicit */unsigned long long int) var_7);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (unsigned short)12419))));
                arr_8 [i_1] [i_2] = ((/* implicit */int) (short)29762);
            }
        } 
    } 
    var_24 = (~(((((/* implicit */int) min((var_11), ((short)32767)))) % (var_19))));
    var_25 = ((/* implicit */signed char) min(((-(max((((/* implicit */int) var_7)), (475036397))))), (var_10)));
}
