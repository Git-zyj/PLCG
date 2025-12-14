/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242028
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = (~(var_13));
        var_14 = ((/* implicit */unsigned long long int) var_0);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (var_4)))) ? (((var_1) / (-4468193572821212576LL))) : (((/* implicit */long long int) ((int) arr_0 [i_0] [i_0]))))) : (max((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */long long int) var_5)), (4468193572821212580LL)))))));
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) * (var_1)))) && (((/* implicit */_Bool) (+(max((7322029805050520609ULL), (((/* implicit */unsigned long long int) 4468193572821212574LL))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            {
                arr_9 [i_1] [i_1] = ((/* implicit */signed char) -4468193572821212583LL);
                var_15 = ((/* implicit */int) ((min((var_7), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)77))))))) >> (((14722272220499515917ULL) - (14722272220499515867ULL)))));
                var_16 = max((max((max((arr_5 [i_2]), (((/* implicit */unsigned long long int) 130023424U)))), (((/* implicit */unsigned long long int) arr_1 [i_2])))), (((/* implicit */unsigned long long int) var_0)));
            }
        } 
    } 
}
