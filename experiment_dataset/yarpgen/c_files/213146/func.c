/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213146
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
    var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (!((((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) ((/* implicit */int) (short)23468))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)23468))));
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            arr_14 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) > (((/* implicit */int) (signed char)-1))));
                            arr_15 [i_1] [i_3] = ((((((/* implicit */_Bool) 55896232U)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15485))) : (-8931115395261003339LL))));
                            var_17 ^= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [21LL] [(unsigned char)11]))) & (arr_6 [i_0] [i_0] [i_0]))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [2ULL] [15])))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            arr_18 [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-23450)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (short)-4520))));
            var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) 55896255U)))))), (((((/* implicit */long long int) (-(arr_11 [i_0] [i_5] [(unsigned char)16])))) + (((arr_8 [i_0] [i_0] [i_0] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (arr_5 [i_0] [i_0] [i_0])))))));
        }
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (-9223372036854775807LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-1)) | (((/* implicit */int) (short)23468))))) : ((~(-3735656952562533400LL)))))));
        var_20 = ((/* implicit */signed char) 13453003920778157843ULL);
        var_21 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)23450)) >> (((((/* implicit */int) var_3)) - (10286)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) : (9223372036854775806LL)))) : (((((/* implicit */_Bool) 764382308U)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))));
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != ((((_Bool)1) ? (4ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))) ? (((/* implicit */unsigned long long int) (~(arr_19 [i_6] [i_6])))) : (661086537855628308ULL)));
        var_22 *= ((/* implicit */unsigned int) arr_10 [i_6] [i_6] [i_6] [(short)6] [(signed char)12]);
        arr_22 [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3735656952562533380LL)))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(7228579664363303150ULL)))))))) <= (((16217533764401117018ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)78)), (var_10)))))))));
    }
    var_24 = ((/* implicit */long long int) (_Bool)1);
}
