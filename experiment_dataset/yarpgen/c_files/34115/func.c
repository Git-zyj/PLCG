/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34115
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0]);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [(unsigned char)3] [i_1] [(unsigned char)3])), ((unsigned char)237))))))), (((/* implicit */long long int) min(((((_Bool)1) ? (arr_5 [i_1]) : (((/* implicit */int) (unsigned char)18)))), (((/* implicit */int) ((unsigned short) (_Bool)1))))))));
                    var_21 = ((/* implicit */int) max((((/* implicit */signed char) (!((_Bool)1)))), (arr_2 [i_0] [i_1] [i_2])));
                    var_22 = ((/* implicit */signed char) min((((((/* implicit */int) (_Bool)1)) * (arr_1 [i_0] [(unsigned char)2]))), ((-(((/* implicit */int) (unsigned short)5499))))));
                    var_23 = ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)1));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_1] [(_Bool)1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_1 [i_3] [i_2])))) && (((/* implicit */_Bool) arr_1 [i_0] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_0] [i_1] [(short)6] [i_3])), (750104310)))) || (((/* implicit */_Bool) var_19))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_19), (((/* implicit */unsigned long long int) var_14))))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) ((max((((((/* implicit */int) (unsigned short)61440)) >> (((arr_3 [i_1] [i_2] [7ULL]) - (1943008074U))))), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6))))))) == ((+(((/* implicit */int) (unsigned char)77))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((unsigned char) max((min((((/* implicit */unsigned int) arr_2 [i_0] [i_2] [(signed char)10])), (var_10))), (((/* implicit */unsigned int) arr_1 [i_4 + 3] [i_4 + 1]))))))));
                            arr_16 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_5)))));
                        }
                        for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((((/* implicit */_Bool) arr_19 [i_0] [i_1] [(unsigned char)6] [11ULL] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) : (234881024U))), (((/* implicit */unsigned int) var_15))))) | ((~(min((((/* implicit */long long int) (unsigned short)52948)), (arr_6 [i_0] [i_1] [i_3] [i_5])))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) -648265838)) : (1766823297910868791ULL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_1)))) ? (((arr_5 [i_0]) + (((/* implicit */int) (signed char)-42)))) : (max((((/* implicit */int) arr_7 [i_0] [i_1])), (arr_1 [i_0] [i_2])))))) : (((arr_19 [(_Bool)1] [i_2] [i_2] [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) min(((short)21052), (((/* implicit */short) (unsigned char)72))))))))));
                        }
                        for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            arr_23 [i_0] [i_0] [(unsigned char)6] [i_2] [(unsigned char)0] [(unsigned char)2] [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [4] [i_1] [i_6] [i_2] [i_6]))))) ? (arr_19 [i_0] [4ULL] [i_2] [5U] [5U]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [7] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_6])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_6])))))));
                            arr_24 [i_0] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_4)))) || (((/* implicit */_Bool) (unsigned short)50133))))), (max((((unsigned int) arr_20 [i_0] [i_1] [i_2] [i_1] [i_6])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3] [4U] [i_1] [i_6])) || ((_Bool)1))))))));
                            arr_25 [i_1] [i_3] [i_2] [9ULL] [i_1] = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) 14292286236464296904ULL)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (unsigned char)5))))))));
                        }
                        var_27 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_19 [i_0] [i_0] [i_0] [(signed char)5] [(unsigned char)2]))), (((/* implicit */long long int) max((arr_20 [i_3] [i_1] [i_1] [i_1] [i_0]), (((/* implicit */int) var_11)))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        arr_28 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_1] [i_0]);
                        var_28 = min((((/* implicit */int) (unsigned char)8)), (arr_20 [i_7] [i_1] [i_2] [i_1] [i_0]));
                    }
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                {
                    var_29 += ((/* implicit */long long int) (-(max(((+(((/* implicit */int) (_Bool)1)))), (((946899629) + (((/* implicit */int) (signed char)-120))))))));
                    var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_29 [i_8]) ? (arr_36 [i_10] [(short)11] [i_8] [i_10]) : (((/* implicit */int) arr_32 [i_8]))))) && ((!(((/* implicit */_Bool) arr_32 [i_8])))))) ? (min((((/* implicit */int) (_Bool)1)), (2147483136))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_8] [i_9] [i_8])))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) -3997007762061760462LL))));
}
