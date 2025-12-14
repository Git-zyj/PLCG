/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207490
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned int) ((unsigned char) (((~(((/* implicit */int) var_1)))) > (((/* implicit */int) arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) arr_1 [i_0])) ^ ((-2147483647 - 1))))));
        var_11 *= ((/* implicit */unsigned char) (+(((/* implicit */int) min((min((arr_0 [i_0]), (((/* implicit */unsigned short) (unsigned char)8)))), (min((((/* implicit */unsigned short) (unsigned char)1)), (arr_0 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_12 = ((/* implicit */long long int) 2147483647);
        arr_7 [i_1] = ((/* implicit */_Bool) (-(var_7)));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */int) ((((15922965175866050903ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))) || (((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])), (var_7))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */short) ((min((arr_4 [3ULL] [i_2]), (arr_4 [i_2] [i_2]))) ^ (((/* implicit */int) arr_9 [i_2]))));
        arr_12 [i_2] [i_2] |= ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) | (((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [1ULL]))) ^ (var_8))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))))));
        arr_13 [i_2] [i_2] = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_5 [i_2] [i_2])))) * (((((/* implicit */int) ((8838752932550214796ULL) != (((/* implicit */unsigned long long int) arr_8 [(_Bool)1]))))) % (arr_4 [i_2] [i_2])))));
    }
    /* LoopSeq 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_16 [i_3] [i_3 - 1] = arr_14 [(short)4] [i_3 - 1];
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((_Bool) arr_15 [i_3])) ? (arr_15 [i_3 - 1]) : (2014038540U)))));
    }
    for (short i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-16384)) ? ((+(((/* implicit */int) arr_18 [5U])))) : (((/* implicit */int) (!(arr_18 [i_4]))))));
        arr_21 [i_4] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_0))))))), (((((/* implicit */_Bool) (signed char)-1)) ? (1351686602) : (1215604799)))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((short) var_4))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21353))) - (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6 + 2] [i_6 + 1] [i_6 - 1]))))), (((/* implicit */unsigned long long int) var_9))));
                    var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6 - 2])) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (short)-9940))))));
                }
            } 
        } 
        arr_28 [i_4] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((int) arr_17 [i_4]))) ? (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57368))))) : (((/* implicit */long long int) min((((/* implicit */int) arr_20 [i_4])), (-1351686603))))))));
    }
}
