/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40225
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_4 = 4; i_4 < 15; i_4 += 1) 
                            {
                                var_14 *= ((/* implicit */unsigned int) ((-629340770209438760LL) > (((/* implicit */long long int) -985727647))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_2]))) / (var_8))) == (((/* implicit */long long int) ((((/* implicit */int) (short)11782)) + (((/* implicit */int) (_Bool)0))))))))) < (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))) & (arr_7 [i_4 - 4] [i_2]))) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [8LL] [(signed char)11] [i_1])) * (((/* implicit */int) (signed char)64)))))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_16 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) && (((/* implicit */_Bool) (unsigned char)3)))))) + (((arr_3 [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))))) | (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-11783)) && (((/* implicit */_Bool) -5040579772617878711LL)))) || (((((/* implicit */_Bool) 131071)) && (((/* implicit */_Bool) 2321648915517957795ULL))))))))));
                                var_17 = ((/* implicit */unsigned long long int) ((((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (signed char)115)) + (1158804491))) == (((((/* implicit */int) (signed char)26)) + (-628880743)))))))));
                            }
                            var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_7 [i_0] [i_1]) > (2573439720U)))) >> (((((var_6) % (((/* implicit */unsigned long long int) var_10)))) - (781151399ULL)))))) >= (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-11783)) - (211397320)))) & (((2321648915517957795ULL) % (((/* implicit */unsigned long long int) 1059819398U))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-75)) > (((/* implicit */int) var_13))))) != (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && ((_Bool)0))))))) <= (((/* implicit */int) ((((((/* implicit */int) var_12)) / (((/* implicit */int) arr_4 [i_1])))) != (((/* implicit */int) ((((/* implicit */unsigned int) 67092480)) > (3235147885U))))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) var_7)))) || (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5)))))) || (((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (unsigned char)252)))) && (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_9))))))));
}
