/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41434
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
    var_17 &= ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    var_18 = ((/* implicit */signed char) arr_6 [i_0 - 1] [i_2 - 3]);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_12 [13] [i_1] [i_0] [(unsigned char)5] = (i_0 % 2 == zero) ? ((!(((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_0])) != (var_9)))) == (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_7 [i_0] [i_3])) - (197))))))))) : ((!(((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_0])) != (var_9)))) == (((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */int) arr_7 [i_0] [i_3])) - (197))) - (27)))))))));
                        var_19 += ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(unsigned char)14] [(unsigned short)10] [i_0] [i_2]))) & (arr_8 [i_0 - 1] [i_1] [i_2 - 2] [6ULL]))), (((/* implicit */unsigned int) arr_5 [10ULL]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_2 - 3] [(unsigned char)15] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_0] [i_0 - 1] [i_4]))) <= (arr_14 [i_0 - 1] [i_1] [i_1] [8U]))))));
                        arr_17 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_4] [i_0] [i_1] [i_0] [i_0 - 1])) : (((/* implicit */int) (signed char)3)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(unsigned char)1] [(short)11])) && (((/* implicit */_Bool) arr_5 [i_0])))))))) && (((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0 - 1] [0ULL])) == (((/* implicit */int) arr_9 [i_4] [i_0] [i_0] [i_0])))));
                        arr_18 [i_0] [i_0] = ((/* implicit */_Bool) 14140310865586828406ULL);
                        arr_19 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) max((arr_0 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) arr_1 [i_1] [i_0 - 1])))))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) 83488495554158225ULL))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-((+((~(((/* implicit */int) (_Bool)1)))))))))));
                        arr_22 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_2 + 1])) - (((/* implicit */int) arr_7 [i_0] [i_1]))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min(((+(((/* implicit */int) arr_9 [i_0] [(_Bool)1] [(_Bool)1] [(signed char)10])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [4ULL] [(unsigned char)10] [i_1] [i_1]))))))))));
                    }
                    var_23 = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_8))))), (min((((/* implicit */long long int) arr_5 [i_0])), (var_16))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (arr_4 [i_0])));
                    arr_25 [i_0] = ((/* implicit */_Bool) (+(arr_13 [(_Bool)1] [14ULL] [(_Bool)1] [i_0 - 1] [i_0 - 1])));
                }
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [18LL] [i_0 - 1])) : (((/* implicit */int) arr_7 [6ULL] [i_0 - 1]))))) ? ((+(((/* implicit */int) arr_7 [(unsigned char)18] [i_0 - 1])))) : (((/* implicit */int) arr_7 [(_Bool)1] [i_0 - 1])))))));
                arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (max((((/* implicit */unsigned int) arr_11 [i_0 - 1] [(_Bool)0] [i_0] [i_0 - 1] [i_0 - 1])), (arr_20 [(signed char)13] [i_0 - 1] [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51)))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) var_6);
}
