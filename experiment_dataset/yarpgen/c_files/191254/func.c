/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191254
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_18)) % (((/* implicit */int) var_5)))) << ((((+(((/* implicit */int) var_11)))) - (8376)))))) : ((-(max((((/* implicit */long long int) var_16)), (var_9)))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] &= max(((-(((long long int) var_17)))), (((((/* implicit */_Bool) max((541801691), (((/* implicit */int) var_17))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [18ULL] [18ULL]))))) : (((((/* implicit */_Bool) arr_1 [3LL] [i_0 + 2])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
        arr_3 [i_0 + 3] |= ((/* implicit */_Bool) ((int) min((((/* implicit */short) (!((_Bool)1)))), (((short) arr_1 [i_0 + 1] [i_0])))));
    }
    for (short i_1 = 2; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1 + 3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((!((_Bool)1))), (((_Bool) (_Bool)0)))))) >= (((long long int) var_1))));
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 18; i_2 += 2) 
        {
            arr_9 [(signed char)11] = ((/* implicit */short) (+(((/* implicit */int) var_16))));
            arr_10 [i_1 + 3] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) max((arr_4 [i_1] [i_1]), (arr_4 [i_1 + 1] [(unsigned char)3]))))) >= (((/* implicit */int) ((((/* implicit */int) ((unsigned short) 3495637697U))) >= (((/* implicit */int) var_18)))))));
        }
        var_20 = min(((~(((var_15) & (((/* implicit */long long int) ((/* implicit */int) var_16))))))), ((-(var_0))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [(unsigned short)14] &= ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_13 [(_Bool)1])), (63U))), (((/* implicit */unsigned int) ((unsigned char) var_3)))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((signed char) ((signed char) arr_11 [18U]))))));
        arr_15 [4LL] [4LL] |= ((/* implicit */signed char) ((min((var_9), (var_8))) == (min((((/* implicit */long long int) arr_13 [24ULL])), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_12 [(unsigned short)6])))))));
    }
    /* LoopSeq 1 */
    for (signed char i_4 = 2; i_4 < 11; i_4 += 3) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_17)) ? (arr_12 [12LL]) : (var_6))), (min((var_9), (((/* implicit */long long int) -552416411)))))))));
        arr_19 [i_4] &= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_2))) << (((var_3) - (9304189648711179612ULL)))));
        arr_20 [i_4 - 1] [i_4] &= ((/* implicit */signed char) (+((~((+(((/* implicit */int) var_1))))))));
    }
}
