/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203247
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
    var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_6)))) ? (((-5609980200364359227LL) / (((/* implicit */long long int) ((/* implicit */int) (short)10083))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (var_13)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_4)) : (var_12)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            arr_6 [i_0] &= ((/* implicit */long long int) (~(((/* implicit */int) max((arr_2 [i_1 + 1] [i_1 - 2]), (arr_2 [i_1 + 1] [i_1 - 2]))))));
            arr_7 [i_0] [i_0] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) 5723670981105017954LL)))))))) : ((+(arr_5 [i_0])))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10)) ? (((/* implicit */unsigned long long int) 5609980200364359211LL)) : (139611588448485376ULL)))) ? (((/* implicit */int) ((-5609980200364359211LL) <= (((/* implicit */long long int) 54702876U))))) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
            arr_9 [5ULL] [(unsigned char)4] [6] &= ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) 1917683271881179680ULL)) ? (2244900721U) : (((/* implicit */unsigned int) -283701271))))))));
            var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (8468996991295735071LL)));
        }
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)15)))) ? (((/* implicit */unsigned long long int) ((int) 10536278381724888158ULL))) : (var_6))), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [(_Bool)1]))) > (arr_4 [i_0] [0ULL]))) ? (arr_1 [i_0]) : (((/* implicit */long long int) max((283701270), (((/* implicit */int) (_Bool)1))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (9026093834887523609LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-17)))))) ? ((((_Bool)1) ? (1707198371939594776ULL) : (1350454612478491328ULL))) : (((/* implicit */unsigned long long int) 283701252))))));
            arr_13 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (-((+(arr_5 [i_2])))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_17 = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : (13ULL))) | (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_11)) : (-3811695))))));
            arr_18 [i_0] [i_0] = ((/* implicit */long long int) (signed char)-112);
            /* LoopSeq 2 */
            for (unsigned char i_4 = 2; i_4 < 16; i_4 += 2) /* same iter space */
            {
                arr_21 [i_4 + 2] [i_3] = ((/* implicit */int) ((arr_19 [i_0] [i_0] [i_4 - 1]) > (arr_19 [i_0] [i_4 - 1] [i_4])));
                /* LoopSeq 4 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0])) + (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_0]))))) : (arr_5 [i_0])));
                    var_19 ^= ((/* implicit */long long int) ((arr_4 [i_0] [i_3]) > (((/* implicit */long long int) ((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10102)))))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_19 [i_0] [i_0] [3LL]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_0]))))))) | (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_3))))))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    arr_27 [i_4] [i_6] [i_4] [8LL] = ((/* implicit */short) (~(((/* implicit */int) arr_22 [i_6] [i_3]))));
                    arr_28 [i_0] [i_3] [i_4] [i_3] [i_6] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_4 - 1] [i_4 + 2] [i_4 + 1])) ? (arr_20 [i_4 + 2] [i_4 - 1] [2ULL]) : (arr_20 [i_4 + 1] [i_4 + 1] [i_4 + 2])));
                }
                for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    arr_31 [i_3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)16128)) % (((arr_14 [i_7] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))));
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                    {
                        arr_36 [i_0] [i_0] [i_4] [i_7] [i_7] = ((/* implicit */_Bool) 3560539029U);
                        var_21 = arr_19 [i_4 - 1] [i_4 - 1] [(_Bool)1];
                        arr_37 [i_8] [i_7] [i_4] [(unsigned char)6] [i_7] [i_0] = ((/* implicit */int) (~(((var_3) & (arr_1 [i_0])))));
                        arr_38 [i_3] [i_4 - 1] [5] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (+(-2016998012)))) ? (((/* implicit */long long int) ((arr_32 [i_4] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) 0ULL)) ? (arr_35 [i_8] [i_7] [i_4] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    }
                    for (int i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((arr_11 [i_9] [i_3]) ? (((/* implicit */int) arr_11 [i_0] [i_7])) : (((/* implicit */int) arr_11 [i_0] [i_3])))))));
                        arr_41 [i_7] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_19 [i_0] [11] [i_0])) ? (var_7) : (var_12)))));
                        var_23 = ((/* implicit */unsigned char) arr_4 [i_0] [i_3]);
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_19 [i_4 - 2] [i_7] [(unsigned char)14]))));
                    }
                }
                for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 2; i_11 < 15; i_11 += 2) 
                    {
                        arr_46 [i_0] [i_3] = ((/* implicit */int) arr_14 [(unsigned char)2] [(unsigned char)7]);
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)255))))) : (var_3))))));
                        arr_47 [i_0] [i_0] = (+((+(8595984017805747879ULL))));
                        arr_48 [i_0] [6ULL] [i_4] [i_10] [i_0] = ((((/* implicit */int) var_2)) & (((/* implicit */int) (_Bool)0)));
                    }
                    var_26 = var_13;
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (-(((/* implicit */int) arr_33 [i_12])))))));
                        var_28 = 1770868179;
                    }
                }
            }
            for (unsigned char i_13 = 2; i_13 < 16; i_13 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((int) arr_3 [i_0] [i_3] [i_13])))));
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((signed char) 10458688476556719900ULL)))));
            }
        }
    }
    var_31 = var_5;
}
