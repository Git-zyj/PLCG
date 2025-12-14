/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20139
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
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_20 |= (~(min((((/* implicit */int) var_6)), (arr_1 [i_0 - 1]))));
        arr_3 [i_0] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_0 [i_0 + 1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (min((var_17), (var_17)))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_21 = min((((/* implicit */long long int) (signed char)-106)), ((-9223372036854775807LL - 1LL)));
                        arr_12 [i_3] [13LL] [i_2] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (arr_6 [i_2])))), (((((/* implicit */_Bool) -2279458545071977464LL)) ? (((/* implicit */long long int) var_4)) : (var_13)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (var_2))))) ^ (arr_7 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [(unsigned char)9])), (arr_0 [i_0])))), ((~(arr_6 [i_1]))))))));
                        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) -1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)112))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_11)))) + (max((arr_8 [i_0] [(_Bool)1] [i_2] [i_3]), (((/* implicit */long long int) (signed char)-124))))))));
                    }
                } 
            } 
        } 
        arr_13 [2] = ((/* implicit */int) ((short) max((((/* implicit */unsigned short) (signed char)-122)), (max((((/* implicit */unsigned short) (short)5937)), (var_15))))));
    }
    for (signed char i_4 = 2; i_4 < 13; i_4 += 2) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)127)) + (((/* implicit */int) arr_14 [0] [i_4])))) + (((((/* implicit */_Bool) min((arr_8 [i_4] [i_4] [i_4] [0]), (((/* implicit */long long int) arr_5 [(short)13]))))) ? (((/* implicit */int) max((((/* implicit */short) var_16)), (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) arr_14 [i_4] [i_4]))))))));
        arr_17 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_4 - 1])) * ((~(((/* implicit */int) (unsigned short)4))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(var_17))), (((/* implicit */int) var_8))))) ? (((arr_2 [i_4 - 1]) ? (((/* implicit */int) arr_15 [i_4 - 1] [(unsigned char)6])) : (((/* implicit */int) arr_2 [i_4 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1496076829)))))));
        var_24 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
    }
    for (signed char i_5 = 2; i_5 < 13; i_5 += 2) /* same iter space */
    {
        var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [i_5 - 1])) ? (min((((/* implicit */int) (unsigned char)7)), (var_4))) : (((/* implicit */int) min((arr_9 [i_5] [i_5] [i_5] [i_5] [(unsigned char)9]), (var_19))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [(unsigned char)7])) ? (arr_10 [i_5] [i_5] [i_5]) : (((/* implicit */int) var_2)))))) : (max((max((((/* implicit */int) var_8)), (-891434282))), (((/* implicit */int) max((arr_0 [i_5]), (var_6))))))));
        var_26 |= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_8 [i_5] [i_5] [i_5] [4]), (((/* implicit */long long int) arr_10 [i_5] [i_5] [i_5]))))))))));
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        var_27 = ((/* implicit */unsigned short) var_1);
        var_28 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_20 [i_6])), (((((((/* implicit */_Bool) var_14)) ? (arr_22 [4LL]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) + (((/* implicit */long long int) (+(arr_20 [i_6]))))))));
        var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))) : (arr_22 [i_6])))) ? ((+(arr_22 [i_6]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (signed char)106))))));
        arr_23 [(short)16] [15LL] = ((/* implicit */short) (-(((/* implicit */int) (short)10964))));
    }
    var_30 |= ((/* implicit */long long int) var_5);
}
