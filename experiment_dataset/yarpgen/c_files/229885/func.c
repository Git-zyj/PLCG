/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229885
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
    var_19 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_0 [(short)20]))));
        var_21 += (unsigned short)44686;
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            var_22 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) var_11)))) + (2147483647))) >> (((/* implicit */int) arr_3 [i_0 - 1]))));
            var_23 &= ((/* implicit */short) ((((/* implicit */int) arr_3 [i_1 + 1])) >= (((((/* implicit */int) var_12)) << (((/* implicit */int) arr_5 [i_0] [(unsigned char)4]))))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) arr_5 [i_1 + 1] [i_1]);
            var_24 = (+(((/* implicit */int) arr_3 [i_0 + 1])));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 4; i_3 < 10; i_3 += 2) 
        {
            var_25 = var_11;
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 - 3])) ? (((((/* implicit */_Bool) arr_10 [i_3 + 1])) ? (arr_10 [i_3 - 4]) : (arr_10 [i_3 - 1]))) : ((-(arr_10 [i_3 - 2])))));
            arr_13 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(var_18)))) << (((/* implicit */int) ((((/* implicit */int) arr_1 [i_3 - 1] [i_2])) >= (((/* implicit */int) arr_1 [i_2] [i_2])))))))) || (((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_4 [(unsigned char)4] [i_3] [i_3])) != (594321974643645692ULL)))))))));
        }
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) arr_6 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_6 [(unsigned char)1] [i_4] [i_2]))))) ? (arr_11 [i_2]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4]))))))))));
            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [(signed char)11] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (594321974643645695ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2] [i_4])) % (((/* implicit */int) var_1))))))))));
        }
        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            arr_20 [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) arr_19 [i_5]);
            var_29 -= ((/* implicit */short) arr_17 [i_5] [i_2]);
        }
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_17)), (((arr_10 [i_2]) & (arr_10 [i_2]))))))));
        arr_21 [i_2] = ((/* implicit */short) 1002394840U);
    }
    for (unsigned short i_6 = 3; i_6 < 17; i_6 += 2) 
    {
        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) arr_4 [(unsigned char)6] [i_6 - 1] [(_Bool)1]))));
        var_32 = ((/* implicit */signed char) ((((17852422099065905924ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 594321974643645692ULL)))))))) <= (((/* implicit */unsigned long long int) arr_2 [i_6 - 2] [12LL]))));
        arr_24 [i_6] [i_6] = ((/* implicit */short) min((min((((((/* implicit */_Bool) arr_23 [i_6])) ? (arr_4 [i_6 - 3] [i_6 - 2] [18U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6] [i_6]))))), (((/* implicit */unsigned int) arr_23 [i_6 - 3])))), (1002394840U)));
        arr_25 [i_6] [i_6 - 2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6] [i_6] [i_6]))) == (594321974643645692ULL));
    }
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26250)))));
    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) var_11))));
}
