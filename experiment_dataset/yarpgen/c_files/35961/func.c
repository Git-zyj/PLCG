/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35961
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
    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)34367)) ^ (((/* implicit */int) (signed char)89))))))) * (var_1)));
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (-(var_10))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [(unsigned short)0] |= ((/* implicit */unsigned short) max((((int) (+(arr_0 [i_0] [i_0])))), (var_12)));
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((int) arr_0 [i_1] [i_1]));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) arr_3 [i_0] [i_1])))) + (min((((/* implicit */unsigned int) var_12)), (arr_1 [i_0])))))) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0] [i_1]))))) * (arr_1 [i_1]))) : (((((/* implicit */_Bool) ((1395864106U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28683)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_3 [i_0] [i_0 - 1]))))) : (((3151786252U) / (arr_1 [i_1])))))));
            arr_6 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) arr_3 [i_1] [i_1]))));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
        {
            arr_11 [i_0] [3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3100742955U)))) : (1194224335U)))) ? (((((/* implicit */_Bool) (signed char)89)) ? (576587503U) : (123568334U))) : (((((/* implicit */_Bool) -1198811694)) ? (1194224340U) : (((/* implicit */unsigned int) -2048050639))))));
            arr_12 [i_2] [i_0] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-24)), (8918571224438054545ULL)))))));
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0 + 1]);
        }
    }
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) 1194224341U))));
        arr_17 [i_3] = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62731))) & (((((/* implicit */_Bool) 881390477)) ? (3064707128U) : (((/* implicit */unsigned int) 530654252))))))));
    }
}
