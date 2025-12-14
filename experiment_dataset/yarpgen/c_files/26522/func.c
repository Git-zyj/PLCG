/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26522
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
    var_20 = ((/* implicit */short) max((((/* implicit */long long int) ((var_0) >= (var_8)))), (((var_9) - (var_9)))));
    var_21 |= ((/* implicit */signed char) min((var_4), (((/* implicit */long long int) var_19))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) var_10);
        arr_3 [i_0] = arr_2 [(signed char)15];
        var_23 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-11159)) + (2147483647))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)480))) == (arr_1 [i_0 + 2]))))));
        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */int) min(((unsigned short)26214), ((unsigned short)63400)))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [(short)13])) >= (((/* implicit */int) (unsigned short)39322))))))) * (((/* implicit */int) (!(((_Bool) (short)9)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))));
        arr_7 [i_1] = ((/* implicit */_Bool) (unsigned short)62278);
        arr_8 [i_1] = ((unsigned int) ((((/* implicit */_Bool) 2776980323342952305ULL)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_4 [i_1]))));
        var_25 |= ((/* implicit */int) arr_1 [(short)21]);
        var_26 = ((/* implicit */unsigned short) arr_0 [i_1]);
    }
    for (signed char i_2 = 1; i_2 < 12; i_2 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_10 [4ULL] [i_2]))));
        var_28 = ((/* implicit */int) min((var_28), ((+((+(((((/* implicit */int) var_7)) / (((/* implicit */int) var_16))))))))));
        arr_13 [i_2] = ((/* implicit */signed char) (unsigned short)39317);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            arr_17 [i_2] [6U] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_4 [i_2 + 2]))));
            arr_18 [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((14734535736337634280ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))))))) < (-1LL)));
            var_29 = ((/* implicit */int) ((unsigned int) arr_16 [i_2 + 2]));
        }
        arr_19 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(var_9)))))) | (((((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [3]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) | (arr_1 [i_2]))))))));
    }
    for (signed char i_4 = 1; i_4 < 12; i_4 += 3) /* same iter space */
    {
        arr_22 [i_4] [i_4] = ((/* implicit */unsigned int) var_6);
        arr_23 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4 + 2])))))), (max((((/* implicit */long long int) (unsigned short)2)), (arr_14 [i_4 - 1] [i_4] [i_4])))));
        arr_24 [i_4] = ((/* implicit */long long int) var_7);
        arr_25 [i_4] = ((/* implicit */signed char) max((((((((/* implicit */int) var_11)) & (((/* implicit */int) var_10)))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)482)) : (1178756810))))), (((/* implicit */int) ((((/* implicit */int) arr_10 [i_4 - 1] [i_4])) >= (((/* implicit */int) arr_10 [i_4 - 1] [i_4])))))));
    }
    var_30 = ((/* implicit */unsigned char) var_18);
}
