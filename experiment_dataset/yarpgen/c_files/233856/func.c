/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233856
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_2 [20ULL] [(_Bool)1] [(unsigned short)13])), ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (2162717774393747065ULL)))))));
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 4294967295U))) ? (((/* implicit */int) min((arr_1 [i_0 + 2]), (arr_1 [i_0 - 2])))) : (((/* implicit */int) arr_1 [(short)2])))))));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_8 [6ULL] = ((/* implicit */unsigned short) min((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))), (arr_3 [(short)8])));
            arr_9 [i_2] [(unsigned char)16] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [16LL]))) : (var_12))), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_4)), (arr_6 [5] [5])))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (4294967295U))))))));
            var_17 += ((/* implicit */int) arr_3 [i_2]);
        }
        /* LoopSeq 1 */
        for (unsigned int i_3 = 4; i_3 < 21; i_3 += 1) 
        {
            arr_12 [(unsigned short)17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_4 [(signed char)21] [i_0 - 1] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3])))))) : (((arr_2 [(signed char)19] [(signed char)4] [4LL]) % (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [(_Bool)1] [(_Bool)1]) && (((/* implicit */_Bool) ((arr_10 [i_3]) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [10U]))))))))))));
            arr_13 [12LL] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((max((arr_3 [i_0 - 2]), (arr_3 [i_3 + 3]))) ? (((/* implicit */int) arr_3 [i_3 + 3])) : ((+(((/* implicit */int) var_4))))));
            arr_14 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_3 - 3])) ? (arr_10 [i_3 - 3]) : (arr_10 [i_3 - 1]))) ^ (max((arr_10 [i_3 + 3]), (arr_10 [i_3 + 1])))));
        }
        arr_15 [6] [0LL] = ((/* implicit */signed char) ((((/* implicit */int) max((var_13), (((/* implicit */unsigned char) arr_1 [i_0 + 1]))))) + ((-(((/* implicit */int) arr_1 [i_0 + 1]))))));
        var_18 = ((/* implicit */int) min((max((((/* implicit */long long int) min((arr_4 [(_Bool)1] [7LL] [2ULL]), (((/* implicit */short) arr_3 [(signed char)5]))))), ((+(var_12))))), (min((min((arr_2 [(_Bool)1] [(_Bool)1] [(_Bool)1]), (((/* implicit */long long int) arr_1 [(signed char)11])))), (var_6)))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) var_9);
        arr_18 [(unsigned short)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))) * (((arr_5 [3] [(short)16]) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [(signed char)11]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (((arr_3 [13ULL]) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)12])))))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */long long int) 4294967295U)) + (min((min((arr_2 [i_5] [i_5] [13]), (((/* implicit */long long int) arr_7 [i_5])))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_8)))))))));
        var_21 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) min((var_14), (arr_7 [i_5])))) - (max((((/* implicit */unsigned long long int) var_3)), (var_7)))))));
        arr_21 [19] [i_5] = ((/* implicit */_Bool) var_11);
    }
    var_22 -= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (int i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) (!(((max((((/* implicit */long long int) var_0)), (1733697293419842992LL))) != (((/* implicit */long long int) arr_7 [(signed char)10]))))));
        var_24 *= ((/* implicit */unsigned long long int) ((short) var_10));
        arr_25 [i_6] = ((/* implicit */_Bool) arr_2 [i_6] [i_6] [i_6]);
    }
    for (int i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) min(((short)32767), ((short)32767)))) : ((-2147483647 - 1)))), (arr_7 [(_Bool)1])));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_7] [i_7] [i_7]))))), (arr_2 [i_7] [i_7] [7ULL])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_26 [4LL] [4LL]) : (arr_23 [i_7])))) ? (((/* implicit */int) min((var_0), ((signed char)127)))) : (((/* implicit */int) arr_5 [i_7 - 1] [i_7 - 1])))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    }
}
