/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220491
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
    var_14 = var_6;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_6 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) 4538331693990461770LL))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1] [i_1] [i_0]))))) : (((var_5) | (arr_0 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4] [i_3] [i_2] [i_0] [i_0] = ((unsigned char) min((((unsigned char) var_8)), (min((var_9), ((unsigned char)100)))));
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) 4538331693990461753LL)) || (((/* implicit */_Bool) 0U)))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)122))));
                                arr_14 [i_4] [i_1] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))) <= (12198561887599047ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((unsigned long long int) 7700163493664099230ULL))))))) : (max((var_12), (((/* implicit */unsigned long long int) max((arr_2 [i_0] [i_1] [i_2]), (((/* implicit */unsigned short) var_10))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [9U] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)149), ((unsigned char)58))))) : (min((((/* implicit */long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0] [i_2] [i_2] [i_0]))))), (var_8)))));
                    arr_16 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [(_Bool)1] [i_0] [i_0]);
                    arr_17 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_2]), (((unsigned char) 12838962267199732835ULL))))) ? ((+(((((/* implicit */_Bool) -3512320083059108219LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (arr_0 [(unsigned char)11] [i_1]))))) : (((/* implicit */unsigned long long int) ((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                }
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_4))));
                    arr_21 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13625653268069505065ULL)) ? (((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_1] [i_0] [i_0]))) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_5])))))));
                    var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [i_0] [i_1])) + (2147483647))) << (((((arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned char)3]) + (3643995497357015160LL))) - (29LL)))))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_9 [2U] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_5] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_4))))))));
                }
                for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    arr_25 [i_0] [i_1] [i_6] = ((/* implicit */unsigned int) arr_24 [i_0] [i_0]);
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_20 [i_0] [i_0]))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned char)107))))) ? (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned char)213))))), (((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) arr_18 [i_6] [i_0])) ? (-3061111220802262417LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0])))))));
                    var_19 = ((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_0]);
                }
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((770106332059046717LL) - (3512320083059108201LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_0] [i_1] [i_0]))))) : (3500642387917246708ULL)))));
                    arr_29 [i_0] [i_7] [i_0] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_7 - 1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7] [i_1] [i_0]))) : (arr_4 [i_0] [i_0] [i_7 + 1] [i_0])))), (var_5)));
                    arr_30 [i_0] [i_0] [i_7] = ((unsigned char) (unsigned char)218);
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) : (var_8)));
                }
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned short) var_2))))) / (((((/* implicit */_Bool) arr_26 [i_1] [i_0])) ? (arr_26 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 18; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) -8866687585318350306LL))) >= (((/* implicit */int) var_1))))) > (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)111))))) || (((/* implicit */_Bool) var_12)))))));
                            arr_39 [i_9] [i_1] [i_8 - 1] [i_1] [i_0] = ((/* implicit */signed char) (unsigned char)37);
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_32 [i_0] [i_8] [i_8] [i_9]))))) % (arr_19 [i_0] [i_8 + 1] [i_8 - 2])));
                        }
                    } 
                } 
            }
        } 
    } 
}
