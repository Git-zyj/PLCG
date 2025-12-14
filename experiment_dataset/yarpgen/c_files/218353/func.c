/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218353
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned char)11] [i_3]))))));
                        arr_10 [(_Bool)1] [(_Bool)1] [(unsigned char)10] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (signed char)-16);
                        var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_3] [i_3]))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        var_14 -= (unsigned short)10745;
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7377000900960345023ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (var_2)))) ? (min((((/* implicit */unsigned long long int) (unsigned char)24)), (7ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (short)6127)))))))))))));
                        arr_14 [(_Bool)1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (+(min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)26187))))));
                        arr_15 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_5 [i_0] [(unsigned char)0] [i_0]);
                    }
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_2] [14ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_7 [i_0] [i_0] [(signed char)3] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_8 [i_1] [17ULL] [(_Bool)1] [i_1] [17ULL] [i_1])))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((var_12), (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (255ULL) : (((/* implicit */unsigned long long int) 677464452680196884LL)))) : (((((/* implicit */_Bool) arr_12 [(signed char)8] [i_1] [i_1] [(unsigned short)11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [7] [i_2] [i_1]))) : (var_4))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_10)))))))));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (var_2) : (((/* implicit */unsigned int) arr_2 [i_1] [i_1] [i_1])))), (((/* implicit */unsigned int) min((arr_2 [i_1] [i_1] [(_Bool)1]), (arr_2 [i_0] [i_0] [i_0]))))));
                            arr_21 [(unsigned short)9] [(unsigned short)9] [(_Bool)1] [i_5] [i_6] = var_11;
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -677464452680196885LL)) ? (((/* implicit */long long int) var_8)) : (-1970361706355542825LL)))) ? (((((/* implicit */_Bool) -677464452680196885LL)) ? (((/* implicit */int) arr_0 [13ULL])) : (((/* implicit */int) var_9)))) : ((~(1191521481)))))));
                            var_19 = ((/* implicit */unsigned char) 2603919975435571418ULL);
                        }
                    }
                    arr_25 [(unsigned short)5] [i_1] = ((/* implicit */_Bool) (-(arr_7 [i_0] [i_1] [i_2] [i_1])));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */long long int) ((unsigned char) var_7))), (arr_6 [i_0] [i_1] [i_1] [(unsigned short)12]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 6263250069459658691LL)) : (var_3)))) ? (min((var_3), (var_4))) : (var_10))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (4159118690U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95)))))) ? (6654100147995579397ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (min((((/* implicit */unsigned int) var_6)), (1113912822U))))))));
}
