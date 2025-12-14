/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28695
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4LL)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 2091663668U)) ? (((/* implicit */int) (short)-4902)) : (((/* implicit */int) (_Bool)1))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (var_3))) ? (((((/* implicit */_Bool) -1260386407)) ? (16995216964221297995ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (-262991168))))))));
    var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_8))))) | (((/* implicit */int) (signed char)-118))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_13 += ((/* implicit */unsigned char) ((int) arr_2 [i_0 - 1]));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [(unsigned char)0] [(signed char)8] [i_0] [(signed char)8] [(unsigned short)5] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)7)))) ^ (((/* implicit */int) (signed char)0))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 3; i_4 < 8; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]);
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((+(5LL))) & (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_2] [i_2])))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((unsigned long long int) 4LL)))));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((arr_1 [i_0] [i_0 + 1]) ? (((((/* implicit */int) arr_6 [i_5] [(unsigned char)2] [(unsigned short)8])) ^ (-262991163))) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1])))))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(1073741824))))));
                            var_18 += ((/* implicit */unsigned short) arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1]);
                        }
                        for (unsigned long long int i_6 = 4; i_6 < 10; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */short) ((arr_1 [i_2] [i_0 - 1]) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)4913)))) : (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (_Bool)1))))));
                            arr_21 [(unsigned short)1] [i_0] [(unsigned short)1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0]))) & (arr_19 [(signed char)2] [(signed char)2] [0] [(signed char)2] [(signed char)11] [i_3] [0])));
                            var_20 = ((/* implicit */long long int) ((arr_19 [i_6] [6ULL] [i_6] [i_6 - 3] [i_6 + 1] [i_0 - 1] [i_0 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2203303615U))))));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (((~(arr_19 [4ULL] [4ULL] [i_1] [4ULL] [4ULL] [i_1] [(signed char)6]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6 - 1] [i_6]))))))));
                        }
                    }
                } 
            } 
        } 
        arr_22 [i_0] [i_0] = ((/* implicit */signed char) ((arr_19 [i_0 - 1] [i_0 - 1] [i_0 + 1] [(signed char)5] [i_0] [i_0] [i_0 + 1]) <= (arr_19 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1])));
        arr_23 [i_0] = ((/* implicit */int) (((+(arr_19 [i_0] [i_0] [i_0] [(short)8] [(short)8] [(unsigned short)4] [i_0 + 1]))) > (((/* implicit */unsigned long long int) 3448759))));
    }
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        arr_26 [i_7] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */int) arr_25 [i_7])) : (((/* implicit */int) arr_25 [i_7]))))));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned short i_10 = 3; i_10 < 20; i_10 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) 11827167163427701931ULL);
                        var_23 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_31 [i_10 + 2] [i_9])), (((((/* implicit */_Bool) arr_25 [11ULL])) ? (arr_28 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8]))))))) > (((/* implicit */unsigned long long int) ((int) arr_25 [i_7])))));
                    }
                } 
            } 
            var_24 = ((/* implicit */short) ((long long int) (signed char)-2));
        }
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1146637367)) ? (-5LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_9))))));
            var_26 &= ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) arr_34 [i_7] [2ULL] [i_7])));
        }
    }
    var_27 = ((((/* implicit */_Bool) (-((+(var_10)))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (!(var_4))))));
}
