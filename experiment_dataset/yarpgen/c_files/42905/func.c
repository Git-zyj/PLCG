/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42905
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [15] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) >= (var_17))))))), (max((((unsigned long long int) (signed char)-99)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 576460743713488896LL)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) var_5))))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((((-576460743713488897LL) + (9223372036854775807LL))) << (((2827989945641179553LL) - (2827989945641179553LL))))) <= (max((6561450751807074243LL), (-576460743713488910LL))))))));
    }
    for (short i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) -576460743713488897LL)) || (((/* implicit */_Bool) 12288))))));
        arr_8 [i_1 + 1] = ((/* implicit */int) min((((((/* implicit */_Bool) (short)15846)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL))), (((/* implicit */long long int) (signed char)75))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        for (long long int i_3 = 3; i_3 < 18; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((((var_13) ? (arr_10 [i_2] [11LL]) : (arr_15 [i_2] [(unsigned short)16]))) & (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2 + 1] [i_2 - 1] [i_3 - 2]))))) <= (((/* implicit */long long int) min((((/* implicit */int) ((signed char) -576460743713488896LL))), ((+(((/* implicit */int) var_10)))))))));
                arr_16 [(unsigned short)19] [i_3] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((137170518016LL) != (var_16)))), (((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_3 - 2])) ? (arr_10 [i_2 + 1] [i_3 + 1]) : (((/* implicit */long long int) var_9))))));
                var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_2] [(_Bool)0] [i_2 + 1])) ? (-576460743713488912LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((arr_9 [i_2]) >= (((/* implicit */int) (_Bool)1)))))))));
                var_23 = ((/* implicit */_Bool) max((var_23), ((!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_2 + 1]))))))))));
                arr_17 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_3 - 2])) ? (((/* implicit */long long int) arr_0 [i_3 - 2] [i_3 - 2])) : (var_2)))) || (((/* implicit */_Bool) min((arr_13 [i_3]), (-576460743713488910LL))))));
            }
        } 
    } 
}
