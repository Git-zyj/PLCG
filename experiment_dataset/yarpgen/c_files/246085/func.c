/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246085
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) ^ (3538168698U)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-452098505952143006LL)))))) ? (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_2)) : (-452098505952142998LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 6318632504121916533LL))))))) : (max((((/* implicit */long long int) ((var_13) && (((/* implicit */_Bool) var_12))))), (max((((/* implicit */long long int) 3642375872U)), (-452098505952142988LL)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((arr_1 [i_0 + 4]), (((/* implicit */unsigned int) arr_5 [i_0 + 4] [i_0 + 3] [i_0 - 1] [i_2 + 2]))))), (min(((-(-452098505952143001LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0] [i_0] [5ULL])))))))));
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -452098505952143001LL))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_9 [i_0 - 1] [i_0 - 1] [i_3] = ((/* implicit */unsigned int) ((-452098505952142990LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40)))));
                        arr_10 [i_0] [i_1] [i_0] [i_1] [i_3] &= min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_8 [i_0] [i_1] [(_Bool)1])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 3] [i_1] [i_2] [i_3]))) & ((-(18446744073709551615ULL))))));
                        arr_11 [8LL] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (((long long int) var_6)))) ? (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1))))))) : (((9008042150494527302ULL) / (arr_2 [i_0])))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (var_12)))) % (((/* implicit */int) var_8)))))));
    var_22 = ((/* implicit */unsigned short) var_1);
}
