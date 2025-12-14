/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226320
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)26888)) ? (((/* implicit */int) arr_5 [19LL] [i_0] [i_0] [(short)1])) : (1965852650))))))));
                    arr_7 [(signed char)9] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_2])) ? (((/* implicit */int) arr_6 [i_2] [i_2] [1] [i_0])) : (1965852650)))));
                    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0 - 1] [(unsigned short)6] [i_1]))) <= (arr_2 [i_0] [i_1 + 1])))))))));
                }
            } 
        } 
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(116327434U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) arr_3 [(unsigned char)0])))))))) ? (((/* implicit */int) ((9238153966061378023ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71)))))) : (((/* implicit */int) min((arr_6 [(short)8] [i_0] [i_0] [i_0 + 2]), (arr_6 [i_0] [i_0 + 2] [i_0 - 1] [i_0 + 2]))))));
    }
    var_19 ^= ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((~(((/* implicit */int) (unsigned short)38630)))) : (((/* implicit */int) var_4)));
    var_20 = min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26894)) > (((/* implicit */int) (unsigned short)58623))))), (min((2942028381U), (((/* implicit */unsigned int) (unsigned short)23698)))));
}
