/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192753
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = var_8;
        var_18 ^= ((/* implicit */int) (((~(((/* implicit */int) (unsigned short)4667)))) < (((/* implicit */int) ((((/* implicit */unsigned int) 311649770)) <= (arr_2 [i_0]))))));
        var_19 = ((/* implicit */unsigned short) ((0U) < (arr_0 [i_0] [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) var_7);
        arr_9 [i_1] = ((/* implicit */long long int) min((min((arr_6 [i_1]), (((/* implicit */int) (unsigned short)1588)))), (((arr_6 [i_1]) - (arr_6 [i_1])))));
        arr_10 [i_1] = ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_6 [i_1])), (308065814401386488ULL))), (((/* implicit */unsigned long long int) ((unsigned int) 3445432610U)))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_5 [i_1]))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (3019349227U))) : (((/* implicit */unsigned int) min((992), (((/* implicit */int) arr_5 [i_1]))))))) : (max((arr_2 [i_1]), (((/* implicit */unsigned int) 311649770)))));
        var_20 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) (unsigned short)26429)) / (1247549336))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 16; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */long long int) max((((((/* implicit */_Bool) -20LL)) ? (-609040831) : (var_16))), ((~(((/* implicit */int) (unsigned short)31058))))))) | (min((((long long int) arr_1 [i_2] [i_3])), (((/* implicit */long long int) (~(1147787211U))))))))));
                arr_16 [i_3 - 1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((-320838745) | (arr_11 [i_2 + 2])))), (arr_13 [i_2 - 3])));
            }
        } 
    } 
}
