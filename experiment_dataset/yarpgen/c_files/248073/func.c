/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248073
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)28515))) - (max((((/* implicit */long long int) (signed char)-42)), (-2943636074831000525LL))))))));
                arr_6 [i_1] [(short)13] [i_0] |= ((/* implicit */unsigned int) min((min((((/* implicit */short) var_12)), ((short)-28500))), (((/* implicit */short) min(((signed char)-59), (((/* implicit */signed char) ((-2118141027) != (-2118141027)))))))));
                var_15 = (!(((/* implicit */_Bool) 3115857254U)));
                var_16 -= ((/* implicit */unsigned int) (!((_Bool)1)));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_17 ^= ((/* implicit */long long int) (((+(3115857252U))) * (((/* implicit */unsigned int) ((min((((/* implicit */int) arr_1 [i_0])), (arr_2 [i_0]))) + (((((/* implicit */_Bool) -2118141027)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_10)))))))));
                    var_18 = ((/* implicit */signed char) max((((/* implicit */short) (_Bool)0)), ((short)28515)));
                    var_19 = ((/* implicit */unsigned int) (+(195836842)));
                    var_20 = ((/* implicit */unsigned int) ((18444775462825172105ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        arr_12 [i_0 + 3] [i_3] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (-2118141005) : (((/* implicit */int) var_3))));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-1035858168332202032LL)))) < (((/* implicit */int) var_11)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_2 [i_1]) + (2147483647))) << (((((/* implicit */int) (short)18792)) - (18792)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_9 [i_0] [i_1]))))) : (968465766132321146ULL)))))))));
                        var_22 -= ((/* implicit */signed char) (((~(((13277507231187190021ULL) & (((/* implicit */unsigned long long int) arr_2 [i_0])))))) ^ (var_13)));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 3) 
                    {
                        var_23 *= ((/* implicit */long long int) min((((arr_14 [i_0] [i_0] [i_0] [i_0 + 3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1 - 1] [i_1]))))), (((/* implicit */unsigned long long int) var_10))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned int) -3296264713837933470LL)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (-90809240) : (((/* implicit */int) arr_1 [i_2])))))))) ? (((/* implicit */unsigned long long int) arr_8 [i_4] [i_1] [i_0])) : (max((((/* implicit */unsigned long long int) var_5)), (arr_14 [7LL] [i_2] [i_1 - 1] [i_0 + 3])))));
                        arr_15 [15ULL] [17] [i_0] [i_0] [(_Bool)1] [(signed char)8] = ((/* implicit */unsigned short) var_1);
                        arr_16 [i_0] [i_1] [i_2] [i_4] = (((_Bool)1) ? (((18444775462825172105ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 - 1])) ? (max((var_4), (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_0] [i_1])))) : (min((((/* implicit */long long int) var_5)), (arr_8 [i_4] [i_1] [i_0 + 3])))))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        var_25 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) 2147483647)) == (var_0)));
                        var_26 *= ((/* implicit */unsigned char) ((357138744U) != (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) (unsigned char)113)), (var_7)))))))));
                        var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5 + 1] [i_2]))) > (var_4)))), (((unsigned long long int) arr_9 [i_0 - 3] [i_0 + 3]))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_28 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-18785)) || (((/* implicit */_Bool) 243552421U)))) && (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_11))))));
                        arr_23 [i_0] [i_0] [i_1] [i_0] [i_6] = ((/* implicit */signed char) var_13);
                        arr_24 [i_0 - 3] [i_1 - 1] [i_1 - 1] [i_2] [i_1 - 1] = ((/* implicit */signed char) ((((arr_2 [i_0 + 2]) + (2147483647))) >> (((arr_2 [i_6]) + (1316031611)))));
                    }
                }
            }
        } 
    } 
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((signed char) var_10)))));
}
