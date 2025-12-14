/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215448
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned short)787))))));
            arr_7 [i_0] [i_0] = ((/* implicit */short) (~((+(((/* implicit */int) arr_0 [i_0]))))));
            var_21 = ((/* implicit */long long int) min((var_21), ((+((+(var_0)))))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */long long int) (-((-(3054707516U)))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+((+(arr_2 [i_0]))))))));
        var_23 = ((/* implicit */int) (~((-(arr_3 [i_0] [i_0])))));
    }
    var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11))))))))));
}
