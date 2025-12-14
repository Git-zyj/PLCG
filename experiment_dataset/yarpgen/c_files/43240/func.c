/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43240
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
    var_16 = ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (arr_6 [i_2])))))))));
                    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))), ((!(((/* implicit */_Bool) (unsigned short)38838)))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_19 = max((((((long long int) arr_0 [i_3])) / (min((((/* implicit */long long int) (unsigned short)38860)), (arr_8 [i_0] [i_0] [i_0]))))), (((long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)38860))))));
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 + 3])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3])))))))) ? (((((/* implicit */_Bool) min((-65536), (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 2] [i_0])) : (((/* implicit */int) arr_10 [i_1 + 2] [i_1])))) : (((/* implicit */int) (!(((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_3])))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 3]))));
                    }
                    for (int i_4 = 3; i_4 < 23; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -501335549020984312LL))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 + 4])))))));
                        arr_15 [i_0] [i_1] [i_2] [i_4] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)26675)) || (((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])))) ? (((/* implicit */long long int) arr_5 [i_0] [i_1] [17LL] [i_4])) : (min((((/* implicit */long long int) arr_13 [i_1 + 1] [i_1] [i_1])), (var_13)))))) ? (((((/* implicit */_Bool) ((short) 6012182462178324627LL))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_7 [i_1] [(short)21] [(short)21])), (arr_5 [i_4] [i_2] [i_1] [i_0])))) : (var_6))) : (((/* implicit */long long int) var_15)));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))));
                    }
                    for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_11))))))) == (((/* implicit */int) arr_9 [i_1] [i_5]))));
                        var_23 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1 + 4] [i_1 + 4]))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38848))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) -1982629086)) : (var_13)))))));
                    }
                }
            } 
        } 
    } 
}
