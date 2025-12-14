/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226859
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned short) (((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) var_14)))))), (max((12698704553446434227ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                    var_16 = ((/* implicit */short) var_3);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-30272)) * (((/* implicit */int) (unsigned short)43795))));
    var_18 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (5748039520263117377ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183))));
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((2804496004620829236ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37426)) && (((/* implicit */_Bool) (unsigned char)235)))))))) || (((/* implicit */_Bool) max((-1676556941798026260LL), (8382026172037687311LL))))));
        var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) (signed char)-109)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-3734005245142282791LL)))))), ((-(((((/* implicit */_Bool) 2270556462198874602ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (2804496004620829236ULL)))))));
        var_21 = ((/* implicit */unsigned char) ((((_Bool) var_4)) ? (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))) > ((-9223372036854775807LL - 1LL)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) (((+(5784795258609696797LL))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44695)) || (var_11))))))))));
        var_22 -= var_7;
    }
}
