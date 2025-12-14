/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39434
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */int) (short)-24923)), (((((/* implicit */int) (short)16147)) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32796))))))) : (((/* implicit */int) (_Bool)1))));
    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))), (min((var_2), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-9133))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (~(arr_1 [i_0]));
                        arr_10 [i_0] [i_1] [i_2] [i_1] = var_2;
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) (short)2420);
                        arr_12 [i_1] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (short)9130))))) | (((((/* implicit */_Bool) (short)-26505)) ? (((/* implicit */int) (short)2420)) : (((/* implicit */int) var_0)))))));
                        arr_13 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)9126))) == (((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_3])) | (((/* implicit */int) arr_7 [i_0] [i_0]))))) & ((-(var_11)))))));
                    }
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */long long int) ((short) var_4));
        arr_15 [i_0] [i_0] = ((/* implicit */short) var_6);
        arr_16 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-9120))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        arr_19 [(signed char)6] = ((((/* implicit */_Bool) (short)20739)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9126))) : (260496914621034744LL));
        arr_20 [i_4] = min(((-((((_Bool)0) ? (-7432923078439212081LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32744))))))), (var_11));
    }
}
