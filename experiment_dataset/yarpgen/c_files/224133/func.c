/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224133
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [10ULL])))))));
        arr_4 [i_0] = ((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])));
        arr_5 [(_Bool)1] [4] |= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-21506))) > (8101620871529183251LL))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [10ULL]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_10 [18ULL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((1573631707659705176ULL), (((/* implicit */unsigned long long int) (unsigned char)213))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), (var_13)))) ? (9540399697747088941ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [12ULL]))))))))));
        arr_11 [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_9 [(short)20] [i_1])))) ? (min((arr_9 [i_1] [i_1]), (arr_9 [i_1] [i_1]))) : ((-(arr_9 [i_1] [i_1])))));
        var_16 = ((/* implicit */long long int) var_5);
    }
    for (short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            arr_16 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [14ULL])) * (((/* implicit */int) ((((/* implicit */int) var_1)) > (arr_12 [i_2] [i_3]))))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_13 [20LL]))));
            arr_17 [i_3] [i_3] [i_2] = ((/* implicit */long long int) arr_13 [(short)18]);
        }
        var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2]))) <= (((((/* implicit */_Bool) ((int) (unsigned short)58829))) ? (9540399697747088958ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [6LL] [i_2])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2]))))))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_15 [i_2] [i_2]))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_2] [i_2])) != (((/* implicit */int) var_9)))))));
    }
    var_21 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 7589178979533700538ULL)) ? (4022948679599203514ULL) : (((/* implicit */unsigned long long int) 8101620871529183270LL)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)75)))) < (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_1)))))))))));
    var_22 += var_8;
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_10))));
}
