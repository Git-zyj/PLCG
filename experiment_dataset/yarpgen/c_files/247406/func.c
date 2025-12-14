/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247406
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_15 = (((+(((/* implicit */int) ((unsigned short) arr_0 [i_0]))))) <= (-403005392));
        var_16 = ((/* implicit */signed char) (((_Bool)1) ? (0U) : (((/* implicit */unsigned int) 403005379))));
        var_17 = ((/* implicit */short) arr_1 [9U]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 4202555771U)) && (((/* implicit */_Bool) (unsigned char)63)))), (((_Bool) arr_3 [i_1] [i_2]))));
            var_19 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) 1667001842))) <= (((arr_4 [i_1]) - (arr_7 [i_1] [i_2])))));
            arr_8 [i_1] [(unsigned char)20] [i_1] = (-(((/* implicit */int) ((unsigned short) (unsigned char)61))));
        }
        var_20 = ((min((4202555768U), (((/* implicit */unsigned int) (~(524288)))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [8ULL] [i_1]))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((92411524U) <= (var_14)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) 590229964)) : (1U))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (arr_7 [i_3] [i_3])))) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) ((arr_4 [i_3]) < (arr_7 [i_3] [i_3])))))))));
        var_21 = arr_7 [i_3] [1U];
    }
    var_22 = ((/* implicit */unsigned long long int) var_7);
    var_23 = ((/* implicit */unsigned char) ((var_6) / (((/* implicit */long long int) var_10))));
}
