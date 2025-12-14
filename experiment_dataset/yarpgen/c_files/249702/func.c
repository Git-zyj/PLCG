/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249702
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) (unsigned char)31)) ? (12074429184143896181ULL) : (6372314889565655440ULL));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 12074429184143896174ULL))));
            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [12])) ? (arr_6 [i_0] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [14ULL])))))), (max((var_9), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_0 + 2])))))))));
            arr_8 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_1 [i_0]) != (arr_1 [i_0]))))));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) 12074429184143896170ULL);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_3]))))) : ((+(arr_11 [i_2] [i_3]))))))));
                var_16 = ((/* implicit */unsigned long long int) (((~(-1248601708))) | (((((/* implicit */int) arr_5 [i_0])) | (arr_0 [i_0])))));
                arr_14 [i_0 + 2] [i_2] [(unsigned short)4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) arr_2 [i_4]))));
                arr_18 [2U] [i_0] [(signed char)5] = ((/* implicit */signed char) (((~(var_11))) & (var_7)));
                var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) arr_17 [i_0 + 2] [i_4])) : (((arr_10 [1] [i_2] [(signed char)3]) ? (((/* implicit */int) arr_10 [i_0] [i_2] [i_4])) : (var_1)))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_4] [i_4])) ? (arr_4 [i_0 + 1] [i_2] [i_4]) : (13317593839837580179ULL)));
            }
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 4; i_6 < 16; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_20 [i_0 + 1] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) ((-7) == (var_12))))));
                        arr_24 [i_6 - 1] [i_5] [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((var_2) & (((/* implicit */unsigned int) var_1)))) & (arr_6 [i_0] [(short)4])));
                        var_21 *= ((/* implicit */signed char) arr_5 [i_6]);
                        var_22 = ((/* implicit */int) min((var_22), ((+(((/* implicit */int) arr_20 [i_6 - 2] [i_6 - 3] [i_6 - 2] [i_6 - 3]))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_7 = 3; i_7 < 15; i_7 += 3) 
        {
            var_23 = ((/* implicit */signed char) 13112385990407487095ULL);
            var_24 = ((/* implicit */short) ((arr_13 [i_0 - 1] [i_0 + 1] [i_7 + 1]) == (arr_13 [i_0] [i_0 - 1] [i_7 + 1])));
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535)))))));
        }
        arr_27 [10ULL] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_0)) != (((unsigned long long int) ((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_0 + 2]))))))));
        arr_28 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1])))))));
        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0 + 2] [i_0]))))))) : (((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 + 1] [5U] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (100663296U)))))) && (((/* implicit */_Bool) max((((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((arr_0 [(signed char)12]) + (2147483647))) >> (((((/* implicit */int) arr_17 [i_0] [i_0 + 2])) - (63644))))))))));
    }
    var_27 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) 0)), (var_5)))));
}
