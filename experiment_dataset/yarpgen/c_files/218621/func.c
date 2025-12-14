/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218621
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) -258223751433664163LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_1] [19] [19LL] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((258223751433664164LL) ^ (6813044444126439178LL)))))))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_8 [i_1] [i_1 + 2]), (arr_8 [i_1 - 1] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) min((-6813044444126439201LL), (((((/* implicit */_Bool) -258223751433664163LL)) ? (((/* implicit */long long int) var_9)) : (-6813044444126439158LL)))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (6813044444126439201LL) : (6813044444126439178LL))))));
                    arr_10 [i_1] [i_1] = min((((/* implicit */long long int) ((int) 6813044444126439194LL))), (((long long int) arr_0 [i_1])));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((((((var_0) != (-6813044444126439158LL))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)41))))) : (var_0))), ((((!(((/* implicit */_Bool) -258223751433664160LL)))) ? (((var_14) + (-6813044444126439146LL))) : (((/* implicit */long long int) var_2))))));
    var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (6813044444126439132LL)))) ? (((/* implicit */long long int) ((int) -438925002))) : (((((/* implicit */_Bool) -6813044444126439158LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (min((min((((/* implicit */long long int) var_11)), (6813044444126439163LL))), (min((((/* implicit */long long int) var_7)), (var_4))))) : (((((/* implicit */_Bool) var_7)) ? (max((-6813044444126439136LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (var_1)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((6813044444126439183LL), (-6813044444126439117LL))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) arr_8 [i_3] [i_3])))), (((/* implicit */int) min((arr_8 [(unsigned char)1] [(signed char)6]), (arr_8 [i_3] [i_3])))))))));
    }
}
