/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205867
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
    var_16 -= (-(((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_12))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((((/* implicit */_Bool) max((arr_6 [i_3 + 1]), (arr_6 [i_3 + 3])))) ? ((~(arr_6 [i_3 - 1]))) : (max((((/* implicit */unsigned int) var_15)), (arr_6 [i_3 + 2])))))));
                        var_18 = ((/* implicit */unsigned short) arr_9 [i_1] [i_2] [i_3]);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] [i_5]))));
                            var_20 = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0]);
                        }
                        var_21 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4])))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (unsigned short)15058)) : (((/* implicit */int) (signed char)-116))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 3484174620U)))) : (((((/* implicit */_Bool) 810792669U)) ? (3484174638U) : (810792676U))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_2 + 1] [i_6]))) / (3484174627U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)101)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2] [i_6])), (arr_10 [i_0])))) ? (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_12 [i_6] [i_6] [i_6] [i_6])))) : (((/* implicit */unsigned long long int) var_14))))));
                        arr_19 [i_6] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)233))));
                        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_2] [i_2 + 3] [i_1])) ? (((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 4] [i_2 + 3] [i_2])) : (((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 3] [i_2 + 3] [i_2 + 4])))) * (((((/* implicit */int) arr_7 [i_2 + 2] [i_2] [i_2 + 3] [i_2])) ^ (((/* implicit */int) arr_7 [i_2 + 2] [i_2] [i_2 + 3] [i_1]))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_7] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3484174648U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 1] [i_7])) : (var_0)))) : (max((var_8), (((/* implicit */long long int) var_15))))))) ? (((/* implicit */int) arr_21 [i_0] [i_2 + 2] [i_2 + 2] [i_7])) : (((((/* implicit */_Bool) ((arr_0 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2] [i_2 + 4] [i_7])) : (((((/* implicit */_Bool) 3484174647U)) ? (((/* implicit */int) arr_17 [i_7] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_13 [i_0] [i_2 + 4]))))))) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_17 [i_2] [i_7]))));
                        arr_23 [i_7] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_2 + 3] [i_2 - 2] [i_2]))) : (var_8)))) ? (max((((/* implicit */unsigned int) (signed char)-64)), (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 11423886358048879253ULL))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_2 + 1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) min(((unsigned char)155), (((/* implicit */unsigned char) arr_21 [i_7] [i_7] [i_2 - 1] [i_0])))))));
                    }
                    arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -1919114587)), (min((((/* implicit */unsigned long long int) ((arr_6 [i_0]) - (arr_6 [i_0])))), (max((10057041447806339353ULL), (((/* implicit */unsigned long long int) var_6))))))));
                    arr_25 [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) 810792685U);
                    arr_26 [i_2 + 3] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) (unsigned short)65535);
                }
            } 
        } 
    } 
}
