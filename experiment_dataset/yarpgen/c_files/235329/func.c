/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235329
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
    var_12 = ((unsigned long long int) var_1);
    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_3)))) ? (((/* implicit */int) ((6479173334276327552LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) -4719935261643151883LL)))))))));
    var_14 = ((/* implicit */int) var_2);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) max((arr_1 [i_0] [i_0]), (((-1817849803) ^ (633924626)))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_1 [i_0] [i_0]) > (((/* implicit */int) arr_0 [i_0]))))) >= (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */int) ((arr_3 [i_1 + 2]) > (arr_1 [i_1 + 3] [i_1 + 2])));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((arr_1 [14ULL] [(_Bool)0]) < (arr_1 [i_1 - 1] [(short)2])));
    }
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) /* same iter space */
    {
        var_17 = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (short)32754))))) ^ ((-9223372036854775807LL - 1LL)));
        /* LoopNest 3 */
        for (short i_3 = 2; i_3 < 11; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (int i_5 = 1; i_5 < 12; i_5 += 4) 
                {
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1817849803)) ? (((/* implicit */long long int) -1817849809)) : (-3116705968232778711LL)))) ? (min((((/* implicit */int) arr_0 [i_2])), (arr_3 [i_2 + 4]))) : (((int) arr_0 [i_2]))));
                        arr_18 [i_2] [i_2] [1U] = ((/* implicit */unsigned int) arr_5 [i_2] [i_3 + 1]);
                    }
                } 
            } 
        } 
        arr_19 [i_2] = ((/* implicit */unsigned short) ((((1817849803) % (((/* implicit */int) arr_0 [i_2])))) * (((((/* implicit */int) (short)32767)) / (arr_15 [i_2])))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_6 [i_2 - 1]))) % (((((/* implicit */_Bool) (unsigned short)16197)) ? (((/* implicit */int) (short)25)) : (((/* implicit */int) (unsigned short)35420)))))))));
        var_20 = (i_2 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_6 [i_2 + 4]), (((/* implicit */int) (short)9306))))) ? (((((/* implicit */int) arr_5 [i_2 + 3] [i_2 + 4])) >> (((arr_10 [i_2] [i_2]) - (358308783))))) : (((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 4]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_6 [i_2 + 4]), (((/* implicit */int) (short)9306))))) ? (((((/* implicit */int) arr_5 [i_2 + 3] [i_2 + 4])) >> (((((arr_10 [i_2] [i_2]) - (358308783))) + (767487333))))) : (((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 4])))));
    }
    var_21 = ((/* implicit */int) ((unsigned int) var_3));
}
