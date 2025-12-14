/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241402
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((6671191839985693260ULL) & (18446744073709551615ULL)))) ? (min((((((/* implicit */_Bool) 6671191839985693262ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_2 - 1])))), (((/* implicit */int) ((_Bool) var_10))))) : (((/* implicit */int) (unsigned char)255)))))));
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [11U] = max((((((/* implicit */_Bool) (signed char)-27)) ? (11775552233723858355ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_2])), ((unsigned short)62768))))))), (((/* implicit */unsigned long long int) var_6)));
                        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)19)) ? (arr_6 [i_2 + 1] [i_2 + 1]) : (arr_6 [i_2 - 1] [i_2 - 1]))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (short)16383))) | (arr_6 [i_2 + 1] [i_2 + 1])))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)255)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) arr_3 [i_2 + 2] [i_2 - 1]))));
                        var_19 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */int) ((((/* implicit */_Bool) (short)3)) && (((/* implicit */_Bool) var_14))))) / (((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_2 + 2]))))));
                        arr_14 [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [(signed char)3])) && (var_10))))))) ? (((((/* implicit */_Bool) var_15)) ? (1073217536U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 + 1]))))))));
                    }
                    for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                        arr_17 [i_4] [i_4] [i_0] [(short)4] [i_0] = ((/* implicit */unsigned char) arr_16 [i_2 - 1]);
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1405225932), (((/* implicit */int) (short)25195))))) ? (arr_11 [i_0] [i_1] [i_2] [i_2 + 2]) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_2 + 2] [i_2 - 1] [i_2 + 2])) % (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)11803)))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 2; i_6 < 18; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((arr_22 [i_0] [i_6] [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 2]) ? (arr_10 [i_0] [i_0] [i_0] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58569))))) | (((/* implicit */unsigned int) (+(arr_2 [i_0]))))));
                            var_23 -= ((/* implicit */short) var_1);
                        }
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_19 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2])), (((((/* implicit */_Bool) (unsigned short)25577)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32760))) : (1U))))))));
                        var_25 = ((/* implicit */short) (_Bool)1);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_27 [i_7] [i_7] [i_7] [i_7] [(short)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (signed char)0))));
                        arr_28 [i_0] [i_1] [i_2] [14U] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)28980)) && (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (529887915)))))) ? (((/* implicit */int) arr_23 [i_7] [(unsigned short)8] [3U] [(_Bool)1] [i_0])) : ((-(((/* implicit */int) var_3))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) ((min((((((/* implicit */_Bool) (short)28970)) ? (var_13) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_3)))) <= (((/* implicit */int) var_3))));
}
