/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233870
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
    var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)27174))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((((var_10) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))) != ((+(((/* implicit */int) var_2)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0 + 2] [i_0 + 2] |= ((/* implicit */signed char) var_14);
        arr_4 [i_0 + 2] &= ((/* implicit */unsigned int) arr_2 [i_0]);
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_0 [i_1])), (var_5))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_7 [i_1]) : (arr_0 [i_1]))))));
        var_16 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_11)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [i_1])), (arr_6 [i_1])))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 7; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 8; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_2 - 1] [i_2 - 2])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)65300)))) : ((~(((/* implicit */int) arr_13 [i_1] [i_1] [i_3]))))))) < (((((((/* implicit */_Bool) 3788192230U)) ? (16985591278806611390ULL) : (((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_1])))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_1))))))))))));
                    arr_16 [i_3] = ((/* implicit */int) (unsigned short)65300);
                    arr_17 [i_3] = ((/* implicit */unsigned short) ((short) max((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_7))))), (min((((/* implicit */int) arr_8 [i_3])), (arr_11 [i_3] [i_2 + 3] [i_1]))))));
                }
            } 
        } 
        arr_18 [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_1]))))), (9951602599109364594ULL)));
    }
    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) arr_21 [i_4])) ? (((/* implicit */int) var_3)) : (arr_21 [i_4]))) : (((((/* implicit */int) var_3)) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4]))))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 3; i_5 < 16; i_5 += 2) 
        {
            var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_24 [i_5 + 2] [i_5 + 1])), ((unsigned short)6834)))) ? (((/* implicit */int) var_8)) : (((((var_8) ? (arr_21 [i_4]) : (((/* implicit */int) (unsigned short)224)))) % (var_7)))));
            arr_26 [i_5] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_22 [i_4] [i_5 + 1]))) << (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (13115699020826530645ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_23 [i_4])) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_11))))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_10)), (arr_24 [i_5 - 3] [i_5 + 2])))) ? (((7973816328720096797ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9570))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)64449)) >> (((((/* implicit */int) arr_19 [i_5 + 1])) - (57216))))))));
            arr_27 [i_4] [i_5 + 3] [i_4] = ((/* implicit */short) min((min((max((((/* implicit */unsigned short) (short)-1)), (var_6))), (min((var_6), ((unsigned short)43753))))), (((/* implicit */unsigned short) var_0))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 2) 
        {
            arr_30 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (arr_28 [i_6 + 1] [i_6 + 1] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 334503463452131142ULL)) ? (var_12) : (((/* implicit */int) var_3)))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_4] [i_4])) & (((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_11)) | (((/* implicit */int) arr_20 [i_6 - 1])))) : ((~(arr_21 [i_6 - 1])))));
            var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (-2147483632)))) ? (((var_10) ? (arr_29 [i_4]) : (0))) : (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (signed char)125)))))))));
            arr_31 [i_4] [i_6 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)32736)) ? (((((/* implicit */_Bool) arr_21 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10839))) : (10472927744989454824ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8605)))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 4) 
        {
            arr_35 [i_4] [i_7] [i_7 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_4] [i_4] [i_4]))) | (2314417329157913000ULL)));
            var_23 = ((/* implicit */int) min((var_23), (min((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) arr_34 [i_7 + 1] [i_7] [i_7 - 1])))) : (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_0))))))), (((((/* implicit */int) max((((/* implicit */short) var_10)), ((short)-8609)))) - (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (_Bool)1)))))))))));
        }
    }
    var_24 ^= var_10;
}
