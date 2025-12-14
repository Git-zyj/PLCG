/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208175
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)56684)) / (((/* implicit */int) var_11)))) < ((~(198103117))))))) * (max((((((/* implicit */unsigned long long int) -1832782996)) | (3566046873764753030ULL))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_4)))))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((8974724200173978852ULL) - (8974724200173978839ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0 - 2] = ((((11423212907499466593ULL) <= (arr_5 [i_1 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((3566046873764753043ULL) <= (arr_5 [i_1 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 2]))))) : (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_0 + 1] [i_0 - 3] [i_0 - 1])) ? (arr_5 [i_1 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27915))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_1 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((14880697199944798585ULL) <= (arr_13 [i_0 - 2]))))) >= (arr_4 [i_1 - 1] [i_1 + 1] [i_0 - 1])));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) -691214605)) ? (14880697199944798575ULL) : (17086291977326421452ULL)));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (max((6291060510816758994ULL), (5304865806267318296ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_15 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [(signed char)8] [20ULL] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_11 [i_5] [i_5] [(short)8] [i_5] [i_5] [4ULL] [i_5])) : (((/* implicit */int) arr_11 [i_5] [i_5] [(_Bool)1] [(_Bool)1] [i_5] [i_5] [i_5])))));
        var_16 = var_6;
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((13141878267442233309ULL), (((/* implicit */unsigned long long int) var_3)))) << (((((/* implicit */int) ((unsigned short) -598874469))) - (59033)))))) ? (var_8) : (((/* implicit */int) ((_Bool) 8114746237867236847ULL)))));
}
