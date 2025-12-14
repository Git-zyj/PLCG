/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42129
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
    var_19 -= ((/* implicit */long long int) (~(((/* implicit */int) (short)21739))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_20 = ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */int) arr_0 [i_0] [4LL])) & (arr_1 [i_0]))) : (((arr_1 [i_0]) - (((/* implicit */int) arr_0 [i_0] [i_0])))))) >= (((/* implicit */int) arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21736))) - (3938576647U)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_3 [i_2 - 1]) : (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0]))))));
                        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3])) ? (arr_8 [i_0] [i_3]) : (0U)))) / (max((16599009101542622138ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [10LL] [i_3]))))))) ? (((/* implicit */int) ((unsigned short) ((int) var_5)))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [2LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_1))) == (((/* implicit */unsigned long long int) arr_7 [i_1] [i_2 + 3] [i_2 + 3] [i_2 - 1] [i_3])))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (-(var_5)));
                                var_23 = ((/* implicit */unsigned short) (~(6441079174580928856LL)));
                                var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_4] [i_1] [i_0])))))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (_Bool)1))))) ? (10892621908304726839ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_0] [3U])))));
                                arr_17 [i_0] [8LL] [i_1] [i_2] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) (((-(arr_13 [i_0] [(unsigned short)4] [i_2 - 1] [i_5 + 3] [i_5]))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [10ULL] [i_2] [i_5])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            {
                                var_25 -= ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2] [6] [i_7]);
                                var_26 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) 7554122165404824772ULL)) && (((/* implicit */_Bool) 18014398508957696LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) -707688114246132120LL))))) > (((/* implicit */int) var_17))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (2732741978U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 7510998571122546074ULL)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_15)))))));
}
