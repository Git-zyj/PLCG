/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200982
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
    var_12 = min(((short)4745), ((short)-9327));
    var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (short)-20449))))), (((short) var_1)))))) & (var_1)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_2 [i_0])))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) 2658054684744704005LL)) ? (-5133053969199125818LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32761))));
        var_15 = ((/* implicit */short) 9007199254740991LL);
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((/* implicit */long long int) ((short) min((((/* implicit */long long int) (short)-30566)), (arr_6 [i_1] [i_1]))))), (0LL))))));
        var_17 = ((/* implicit */short) 5029593678733020010LL);
    }
    for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (short i_3 = 4; i_3 < 21; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_18 ^= arr_15 [i_5] [(short)6] [i_2 + 4];
                        arr_19 [i_3] [i_3] [i_4] [i_4] [(short)21] = var_0;
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((short) min((4491322822364758266LL), (((/* implicit */long long int) (short)26302))))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) max((max(((short)30261), ((short)18032))), ((short)18746)))) ^ (((/* implicit */int) max(((short)-1), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4]))) != (7062370888719016365LL)))))))));
                            arr_24 [i_3] [i_3 - 2] = ((/* implicit */short) ((long long int) var_7));
                            var_21 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_21 [i_2] [i_3 - 1] [i_4] [i_3] [i_6])) : (((/* implicit */int) var_9))))) >= (max((0LL), (((/* implicit */long long int) arr_8 [i_6]))))))) << (((((/* implicit */int) ((short) (short)-32748))) + (32754)))));
                        }
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_9 [i_2] [i_2] [i_2]), (((/* implicit */long long int) var_0)))))))) > (((/* implicit */int) arr_5 [i_2] [i_2]))));
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2 + 4] [i_2] [i_2]))));
    }
}
