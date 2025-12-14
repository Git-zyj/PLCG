/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248161
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
    var_18 = ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (min((arr_0 [12ULL] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41096))) : (var_2)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)188))))) : (min((1ULL), (((/* implicit */unsigned long long int) var_8))))))));
                    arr_10 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (1ULL) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) : (max((((/* implicit */unsigned long long int) (unsigned char)24)), (18446744073709551600ULL)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                    arr_11 [22ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_2])) : (arr_7 [i_2] [(unsigned char)11] [i_0] [i_0]))) : (((((/* implicit */_Bool) 304554898)) ? (304554898) : (0)))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) var_17)) : (((((/* implicit */_Bool) 304554898)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))))) : ((+(((((/* implicit */_Bool) var_3)) ? (var_1) : (var_14)))))));
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0])))) ? (18446744073709551589ULL) : (7732838482432624269ULL));
    }
    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    {
                        arr_24 [i_3] [i_4] [i_5] [i_5] [i_6] [(signed char)20] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                        var_20 = ((/* implicit */int) min((min((var_10), (arr_13 [i_3 - 1] [i_3]))), ((((!(((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3])))) ? (12064631745609882017ULL) : (arr_23 [8ULL] [i_4] [i_5] [(unsigned char)19] [i_6])))));
                    }
                } 
            } 
        } 
        arr_25 [i_3] = ((/* implicit */unsigned int) min(((~(18446744073709551615ULL))), (((((/* implicit */_Bool) arr_8 [i_3] [i_3 - 1] [i_3])) ? (arr_2 [i_3 - 1] [i_3 + 1]) : (18446744073709551589ULL)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 4; i_8 < 8; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                {
                    var_21 = var_1;
                    arr_35 [i_8] [i_8] [i_7] [i_7] |= arr_1 [(signed char)12] [i_8];
                }
            } 
        } 
        var_22 *= ((/* implicit */int) (!(((/* implicit */_Bool) 1429875166870053176ULL))));
    }
    var_23 += min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))), (12001716235937223417ULL));
    var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551589ULL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) var_12)) : (var_7)))));
}
