/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54831
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
    var_15 = ((/* implicit */long long int) var_6);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 + 1] [i_3])))))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) : (arr_1 [i_0])))))), (var_1))))));
                        var_17 = arr_0 [i_3] [i_0 + 2];
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)17] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_5 [i_0] [i_0] [i_0])))) ? (max((var_2), (((/* implicit */unsigned int) var_6)))) : (((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */unsigned int) -1052549463)) : (var_7))))))))));
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 3])) > (((/* implicit */int) arr_3 [(short)8] [i_0 + 2]))))), (var_1)));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 2) 
        {
            arr_11 [i_4] = ((/* implicit */int) var_2);
            var_20 = ((/* implicit */signed char) min((arr_0 [i_0 + 3] [4LL]), (((/* implicit */long long int) var_6))));
            arr_12 [i_4] [i_4] = ((/* implicit */signed char) arr_9 [18ULL] [i_4]);
        }
        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) (+((+(var_12)))));
            arr_16 [(short)23] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */unsigned long long int) var_7)) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((~(var_13)))))) ? (var_3) : (((min((((/* implicit */long long int) var_2)), (arr_9 [(signed char)8] [(signed char)8]))) ^ (((/* implicit */long long int) (~(var_14))))))));
            var_22 = ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_2 [i_0] [i_0])))), ((+(((/* implicit */int) (signed char)76))))))) ? (((((/* implicit */_Bool) 2176574924216913171ULL)) ? (972425689U) : (((/* implicit */unsigned int) -1052549463)))) : (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0 - 2] [i_5] [i_0 - 2]))))), (arr_4 [i_0] [i_0 + 2] [i_0])))));
            var_23 += ((signed char) ((((/* implicit */_Bool) ((signed char) arr_8 [i_0] [0LL]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [4]))) : (((((/* implicit */_Bool) arr_4 [(short)8] [i_0] [i_0])) ? (arr_14 [i_0] [i_0] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)11] [23LL])))))));
            arr_17 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) arr_7 [(signed char)18]))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_7 [8ULL]))))) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_3 [(signed char)21] [i_0 - 1])) ? (min((var_3), (((/* implicit */long long int) arr_7 [(short)18])))) : (((((/* implicit */_Bool) var_8)) ? (arr_15 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)22]))))))) : (arr_10 [(short)10] [i_5])));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        var_24 = arr_10 [i_6] [i_6];
        var_25 = ((/* implicit */unsigned int) ((unsigned long long int) var_9));
        var_26 = min((max((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_6] [i_6]))))), (min((((/* implicit */long long int) arr_4 [i_6] [i_6] [2LL])), (2401736427441502591LL))))), (((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6])) ? (arr_14 [i_6] [i_6] [i_6]) : (arr_14 [i_6] [i_6] [18ULL]))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            for (signed char i_8 = 1; i_8 < 8; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    {
                        var_27 = ((/* implicit */signed char) var_11);
                        arr_29 [i_6] [i_8] [i_7] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_14 [i_8 + 3] [i_8] [3])))));
                        var_28 += ((/* implicit */short) min((((((/* implicit */_Bool) arr_6 [(short)2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_9 [18] [i_8 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-32606)))))));
                        arr_30 [i_7] [i_6] = max((((((/* implicit */_Bool) (-(arr_9 [i_6] [(signed char)5])))) ? (max((arr_24 [i_6] [i_6]), (((/* implicit */long long int) arr_6 [i_6])))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6]))))), (((/* implicit */long long int) max(((-(((/* implicit */int) arr_27 [i_6] [i_7] [i_6])))), (((/* implicit */int) var_4))))));
                        arr_31 [i_6] [i_7] [2LL] [i_6] = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */int) ((((/* implicit */long long int) var_13)) >= (arr_23 [i_9] [i_8] [i_6] [i_6])))), (((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_3 [i_6] [(signed char)18])) : (((/* implicit */int) arr_27 [i_6] [4] [i_9])))))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((long long int) max((((/* implicit */long long int) var_0)), (var_1)));
}
