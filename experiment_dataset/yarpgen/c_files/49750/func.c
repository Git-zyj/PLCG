/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49750
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
    var_14 = max((((/* implicit */unsigned int) var_11)), (1278972894U));
    var_15 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((-(1278972917U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (var_5))))))) | (max((((/* implicit */unsigned int) max((((/* implicit */short) (signed char)-39)), (var_0)))), ((+(3015994401U)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((signed char) 3015994379U))), ((unsigned char)7)))) ? (((/* implicit */long long int) max(((((_Bool)1) ? (1278972912U) : (((/* implicit */unsigned int) var_11)))), ((+(16777088U)))))) : (max((((/* implicit */long long int) arr_0 [i_0])), (min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */long long int) 1278972912U))))))));
            arr_7 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (8490668932151822082LL)))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) ((signed char) arr_1 [i_1])))))));
        }
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 4; i_3 < 18; i_3 += 4) 
            {
                arr_12 [i_3] [13LL] [13LL] = ((/* implicit */long long int) min((max((var_10), (1278972912U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)56473)))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (long long int i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((int) 16777088U))))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [(short)12] [i_5 - 1] [i_3 + 2])), (arr_11 [i_5] [i_5 - 1] [i_3 + 2] [i_4])))) ? ((+(((/* implicit */int) arr_10 [i_0] [i_5 - 1] [i_3 + 2])))) : (((/* implicit */int) ((short) 1152921504606846975LL)))));
                        }
                    } 
                } 
                arr_18 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (957519213U) : (4278190217U)));
            }
            var_18 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)8)) ? (1073741808U) : (3015994419U)))));
        }
        var_19 ^= ((/* implicit */signed char) max((min((3ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) ((unsigned short) var_1)))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_6] [(unsigned short)19] [i_6] [i_6] [i_6] [i_6]))));
        var_20 = ((/* implicit */short) var_8);
        arr_22 [i_6] = ((/* implicit */unsigned char) (!(arr_14 [i_6] [i_6] [i_6])));
        arr_23 [i_6] [i_6] = var_7;
        arr_24 [6U] |= ((/* implicit */signed char) ((long long int) arr_19 [i_6]));
    }
}
