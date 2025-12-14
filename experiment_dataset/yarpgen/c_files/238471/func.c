/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238471
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_15 &= ((/* implicit */_Bool) ((short) max((var_10), (((/* implicit */unsigned long long int) ((arr_2 [i_0]) || (((/* implicit */_Bool) var_0))))))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((max((((/* implicit */long long int) (_Bool)1)), (arr_0 [(short)2] [i_0 + 2]))), (min((((/* implicit */long long int) (short)-14959)), (arr_0 [(short)8] [i_0 - 1]))))))));
        var_17 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((arr_2 [i_0 + 3]), (arr_2 [i_0 + 1])))), (((unsigned long long int) (!(((/* implicit */_Bool) (short)14962)))))));
        var_18 = ((/* implicit */short) (+(((((/* implicit */int) (short)0)) * (((/* implicit */int) (short)1008))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49463)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20575))) : (573709416528497026LL)))) && (((/* implicit */_Bool) (short)32767)));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)16128)) ? (18446744073709551613ULL) : (10485826300528002969ULL)));
        var_19 = ((/* implicit */_Bool) ((((arr_3 [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16073))))) - (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1])))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        arr_9 [(short)13] = ((/* implicit */short) min((((((/* implicit */int) ((short) var_0))) / (((/* implicit */int) arr_8 [i_2 + 2])))), (((/* implicit */int) ((((/* implicit */int) (short)16128)) < (((((/* implicit */_Bool) (short)-6034)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) max((min((arr_8 [(_Bool)1]), ((_Bool)1))), (arr_8 [i_2]))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) var_11))) / (573709416528497028LL)))))));
    }
    var_21 = ((/* implicit */short) -2701190137743312052LL);
    var_22 = ((/* implicit */_Bool) var_10);
    var_23 *= ((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((573709416528497028LL) < (((/* implicit */long long int) ((/* implicit */int) (short)-18071))))))) : (((-845886172233073359LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
}
