/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207357
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
    var_17 = ((/* implicit */unsigned int) var_5);
    var_18 = ((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned int) ((((/* implicit */int) ((13065303087288954297ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6935092901290640145LL)) ? (6935092901290640145LL) : (6935092901290640128LL)))) : (var_14)));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6935092901290640145LL)) ? (((/* implicit */long long int) var_12)) : (6935092901290640133LL)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (-6935092901290640134LL)))));
        arr_6 [6] |= ((/* implicit */unsigned short) ((6935092901290640155LL) - (((/* implicit */long long int) var_16))));
        arr_7 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((6935092901290640128LL) < (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (min((((/* implicit */unsigned long long int) 6935092901290640113LL)), (var_2)))));
    }
    for (unsigned char i_2 = 3; i_2 < 22; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) var_6)) & (6935092901290640145LL))) | ((~(6935092901290640129LL)))));
        arr_11 [(unsigned short)15] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 6935092901290640145LL)) : (var_13))) <= (((/* implicit */unsigned long long int) ((6935092901290640128LL) << (((6935092901290640146LL) - (6935092901290640146LL))))))));
        var_22 = ((/* implicit */unsigned short) ((max((-6935092901290640145LL), (6935092901290640144LL))) % (((((((/* implicit */long long int) var_6)) & (-6935092901290640126LL))) | (max((((/* implicit */long long int) var_8)), (6935092901290640143LL)))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            {
                var_23 *= ((/* implicit */signed char) ((((-6935092901290640142LL) + (6935092901290640146LL))) - ((+(6935092901290640145LL)))));
                arr_16 [i_3] = ((/* implicit */long long int) ((((var_15) >> (((-6935092901290640130LL) + (6935092901290640149LL))))) << ((+(((/* implicit */int) var_5))))));
            }
        } 
    } 
}
