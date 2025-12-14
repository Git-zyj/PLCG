/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202113
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
    var_10 = ((/* implicit */long long int) min((var_3), (((/* implicit */unsigned long long int) ((signed char) var_5)))));
    var_11 = ((/* implicit */long long int) var_1);
    var_12 = ((/* implicit */unsigned long long int) (unsigned char)79);
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) arr_1 [(short)18]))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 2147483637)) : (arr_0 [(signed char)18]))))))));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (1910225141U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (6637071225208303189ULL))))));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((arr_5 [i_1]) ? (((arr_4 [i_1 - 1]) * (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_3) == (arr_2 [12ULL])))))));
        arr_8 [14ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (arr_1 [(signed char)4])))) ? (((((/* implicit */_Bool) arr_2 [14LL])) ? (arr_1 [(signed char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [10U])) ? (1034665300) : (((/* implicit */int) (short)8347)))))));
        arr_9 [i_1] |= ((/* implicit */signed char) ((short) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
        arr_10 [i_1 + 1] = ((/* implicit */short) (+(((((/* implicit */long long int) ((int) 190059830560138059LL))) | (-3885021652847149363LL)))));
    }
    for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            var_15 = ((/* implicit */int) max((var_15), ((~(((/* implicit */int) (signed char)50))))));
            arr_16 [i_2] [(_Bool)1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 - 1] [i_2 + 1]))) == (14U)));
            arr_17 [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((signed char) arr_3 [i_2 + 2] [i_2 - 1]));
        }
        arr_18 [i_2] = ((/* implicit */signed char) arr_6 [i_2] [i_2]);
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (arr_6 [i_2 + 1] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (((long long int) var_7)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483633)) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 2) 
    {
        var_17 |= ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))));
        var_18 = ((/* implicit */_Bool) (~(arr_20 [i_4 - 2])));
    }
}
