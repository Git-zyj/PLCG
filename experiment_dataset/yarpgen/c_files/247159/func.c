/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247159
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
    var_10 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)0))))), (0ULL)));
    var_11 = var_2;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) 15908170723669375246ULL);
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_13 = ((/* implicit */short) max(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((_Bool) arr_6 [i_0 - 3] [i_0 + 2] [i_1])))));
                    var_14 = ((/* implicit */_Bool) (-(((((/* implicit */int) var_2)) + (max((((/* implicit */int) var_1)), (arr_2 [i_0])))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_15 += ((/* implicit */long long int) ((int) arr_5 [i_1 - 1] [i_2]));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) arr_9 [i_2] [i_1])) * (0ULL)))))));
                        }
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 18446744073709551602ULL))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_1 + 2])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1046106559)) ? (((/* implicit */int) (short)32612)) : (var_9))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_5))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_1 + 4] [i_3])))))));
                    }
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_0 - 1] [i_0] [i_5] [i_5] [i_0] &= ((/* implicit */int) 896627559U);
                        var_18 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */short) min((((((((/* implicit */_Bool) -1046106562)) || (((/* implicit */_Bool) arr_4 [(unsigned char)14])))) ? (((/* implicit */unsigned long long int) ((int) 18446744073709551602ULL))) : (min((15ULL), (arr_11 [i_6] [i_1 + 2] [i_2] [i_5]))))), (((/* implicit */unsigned long long int) arr_3 [i_1]))));
                            var_20 = ((/* implicit */signed char) 18446744073709551610ULL);
                            var_21 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | ((+(3398339736U)))));
                        }
                        for (short i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            var_22 += ((/* implicit */long long int) ((_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (1046106559) : (arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 3])))), ((-(var_8))))));
                            arr_23 [i_0] [i_1] [i_2] [i_2] [i_5] [3] = ((/* implicit */signed char) var_2);
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    arr_27 [i_0 + 4] [i_1] [i_8] [i_1] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1))))));
                    arr_28 [i_1] = (-(((/* implicit */int) ((_Bool) arr_11 [i_0] [5U] [i_8] [i_8]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        arr_32 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((arr_7 [i_0 - 3] [i_1 + 1] [i_0 + 4] [i_0 - 3]) ? (((/* implicit */long long int) ((int) 3398339736U))) : (var_4)));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) 18446744073709551613ULL))));
                    }
                    var_24 -= ((/* implicit */int) arr_12 [i_0] [(unsigned char)0] [5ULL] [i_0] [i_8]);
                    arr_33 [i_0] [i_1] = ((/* implicit */unsigned int) arr_0 [i_1 + 1] [i_8]);
                }
                arr_34 [i_1] [i_1 + 2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) * (((((/* implicit */_Bool) var_7)) ? (2ULL) : (((/* implicit */unsigned long long int) -1))))));
                var_25 = min((arr_29 [i_0] [i_0] [i_0] [1LL] [i_0 + 3] [i_0]), (((/* implicit */long long int) (short)-12560)));
                arr_35 [(signed char)14] &= ((/* implicit */int) (!(((min((4194303), (((/* implicit */int) (_Bool)1)))) >= (arr_18 [i_0 + 1] [(signed char)10] [(signed char)9] [i_1 + 3] [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_10 = 2; i_10 < 18; i_10 += 1) 
    {
        for (unsigned int i_11 = 3; i_11 < 18; i_11 += 1) 
        {
            for (unsigned char i_12 = 1; i_12 < 19; i_12 += 1) 
            {
                {
                    var_26 += ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (758707993) : (((/* implicit */int) (_Bool)0))))), ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8)))))) || (((/* implicit */_Bool) (~(arr_43 [i_11]))))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        arr_47 [i_10] [i_11] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * ((-(758707993)))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_46 [i_10 + 2] [i_12 + 1] [i_10 + 2]), (arr_46 [i_10 + 1] [i_12 - 1] [i_10 + 1])))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_46 [i_10 + 2] [i_12 + 1] [i_13])))))))));
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_10] [i_12] [i_13])) ? (((unsigned long long int) 8388607)) : (((/* implicit */unsigned long long int) ((min((((/* implicit */int) (short)0)), (758707993))) << (((4294967266U) - (4294967246U))))))));
                    }
                    var_29 += ((/* implicit */short) ((min((var_0), (((/* implicit */unsigned int) var_6)))) > (((/* implicit */unsigned int) arr_44 [i_11] [i_11 + 1] [i_11 - 1] [7U]))));
                    arr_48 [i_10] [(short)11] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 0U)), (((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_42 [i_10] [i_11] [i_11])))))) ? (((/* implicit */int) ((signed char) min((arr_45 [i_12 - 1] [i_11] [i_12 - 1] [i_10 + 3]), (14364905816680123683ULL))))) : (((/* implicit */int) arr_39 [i_12] [i_11] [i_10]))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */int) max((min((max((var_4), (4281769500407967270LL))), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 1256788757))) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (_Bool)1)))))));
}
