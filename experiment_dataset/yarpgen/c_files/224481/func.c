/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224481
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_3 [i_0] [i_0 + 2] = ((min((((/* implicit */unsigned long long int) arr_1 [i_0 + 3])), (((unsigned long long int) 6058917403149663761LL)))) & (((/* implicit */unsigned long long int) ((((long long int) var_3)) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
        var_18 = ((/* implicit */_Bool) (~(var_12)));
        var_19 |= ((/* implicit */unsigned short) ((((17641521107597490010ULL) != (((/* implicit */unsigned long long int) 2225028710813809022LL)))) ? (((/* implicit */int) min((arr_0 [i_0 + 3]), (arr_0 [i_0 - 1])))) : (((/* implicit */int) ((_Bool) arr_1 [i_0 + 1])))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_20 = ((/* implicit */long long int) arr_5 [i_1]);
        var_21 = ((/* implicit */int) 16144703171865909919ULL);
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [i_1] [i_4] [i_1] [i_1] [(unsigned short)14] [i_1] = ((/* implicit */_Bool) max((6838225295339479561LL), (((/* implicit */long long int) -17040366))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_15))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) ((6838225295339479561LL) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    }
    var_24 = ((/* implicit */_Bool) var_4);
}
