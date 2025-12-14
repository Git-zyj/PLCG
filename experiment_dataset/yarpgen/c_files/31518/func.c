/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31518
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned int) (unsigned short)63145);
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((signed char) ((long long int) arr_1 [i_0 - 1] [i_0 - 1]))))));
        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_2 [i_0])))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1655)) | (((/* implicit */int) arr_12 [i_0] [i_3] [i_2] [i_1] [i_0])))))));
                        var_14 -= ((/* implicit */unsigned short) var_1);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)7354), (((/* implicit */short) arr_12 [i_4] [i_4] [i_4] [i_4] [i_4])))))) : (((((/* implicit */_Bool) arr_7 [i_4] [i_4])) ? (((unsigned long long int) var_2)) : (((((/* implicit */_Bool) 2619573063378989564ULL)) ? (arr_14 [i_4] [i_4]) : (arr_14 [2] [(short)15])))))));
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_4] [i_4] [i_4])))) - (min((((/* implicit */unsigned long long int) (short)-7355)), (((((/* implicit */_Bool) (unsigned char)66)) ? (var_0) : (((/* implicit */unsigned long long int) 8302339114186691726LL))))))));
        arr_15 [i_4] [i_4] = ((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4] [i_4] [i_4]);
        var_17 = ((/* implicit */long long int) max((var_17), (arr_13 [i_4])));
    }
    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */unsigned int) arr_6 [i_5] [i_5] [i_5]);
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_7)), (min(((short)7367), ((short)7354)))))), (var_0))))));
    }
    for (signed char i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) arr_11 [3LL] [i_6] [i_6] [i_6] [i_6] [i_6]);
        var_20 = ((/* implicit */signed char) var_5);
        var_21 = ((/* implicit */unsigned long long int) ((var_0) == (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_6] [i_6])), (min((((/* implicit */long long int) arr_6 [i_6] [i_6] [i_6])), (arr_7 [i_6] [i_6]))))))));
    }
    var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) min((((/* implicit */short) (signed char)-3)), (var_6)))), ((unsigned short)995)))) ? (((/* implicit */int) min((((/* implicit */short) var_7)), (min((var_6), (var_6)))))) : ((-(((/* implicit */int) var_4))))));
}
