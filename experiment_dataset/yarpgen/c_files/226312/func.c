/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226312
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8598584757973855061ULL)) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((arr_0 [(signed char)7]), (((/* implicit */unsigned short) (unsigned char)5)))))))));
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) 117440512)))))), (0ULL)));
        var_20 += ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) / ((~(((((/* implicit */_Bool) -1049318143)) ? (-117440512) : (((/* implicit */int) (signed char)-41))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        var_21 = ((/* implicit */long long int) 117440512);
        arr_8 [i_1 + 4] [i_1 + 2] = ((/* implicit */unsigned int) (signed char)112);
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 12; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_22 |= ((/* implicit */signed char) (~(((1345741528) / (((/* implicit */int) (_Bool)1))))));
                        arr_19 [i_5] [i_4] [i_2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_5] [i_3] [i_3] [i_3] [i_2])) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) var_18))));
                        var_23 = ((/* implicit */short) 3072ULL);
                        arr_20 [i_4] [i_4] [i_3] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 2) 
                        {
                            arr_24 [i_6 + 3] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -117440497)) ? (arr_11 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6 + 1] [i_3 - 2] [i_3 + 1])))));
                            var_24 = ((arr_22 [i_6] [i_6 - 3] [i_6 - 3] [i_3 - 3] [i_3 - 1]) | (((/* implicit */int) (unsigned char)88)));
                            var_25 += ((/* implicit */unsigned short) var_4);
                            var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        }
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_7] [i_3 - 3] [i_3 - 1]))));
                            arr_27 [i_5] [i_2] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_4])) ? (arr_2 [i_3 + 1]) : (((/* implicit */long long int) -1701272611))));
                        }
                    }
                    arr_28 [i_4] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_2])) ? (var_15) : (((/* implicit */long long int) arr_4 [i_4] [i_3 - 3]))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13525025394410273107ULL)))));
                    var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_3 - 2] [i_3 - 1]), (((/* implicit */int) (unsigned short)5))))) ? (((/* implicit */int) (unsigned char)8)) : (((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) (short)11230)))) : (((/* implicit */int) arr_12 [i_2] [i_3] [i_2]))))));
                }
            } 
        } 
        arr_29 [i_2] = ((/* implicit */unsigned int) (_Bool)1);
    }
    var_29 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_4)), (8475886184255671405ULL)));
    var_30 = -117440500;
}
