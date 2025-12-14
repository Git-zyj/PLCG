/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232463
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = (((!(((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)15378))))) : (((((/* implicit */long long int) arr_4 [i_0])) / (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0] [8]) : (((/* implicit */long long int) arr_4 [i_0])))))));
                var_13 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_4 [12ULL])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0])))))), (arr_4 [10LL])));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50157))))) ? ((~(9023075639471103702LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))))) % ((~(((((/* implicit */_Bool) 1416254574)) ? (((/* implicit */long long int) arr_4 [i_0])) : (arr_0 [i_0] [i_0])))))));
                    var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 + 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))))))) : ((+(min((((/* implicit */unsigned int) (unsigned short)48574)), (arr_4 [i_0])))))));
                    arr_8 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_11 [i_0] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 896196498)) ? (((/* implicit */int) arr_3 [i_1 + 4] [i_1])) : (((/* implicit */int) var_5))))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [11LL]))))), (((((/* implicit */_Bool) (short)0)) ? (arr_2 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) : ((~(((arr_9 [i_0] [7LL] [i_3]) & (0ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((145691814408113649LL) >> ((((+(((/* implicit */int) (unsigned char)255)))) - (194)))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_5 - 2] [i_1] [i_1 + 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_5]))) : (arr_2 [i_5 - 2])));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_15 [i_5 + 2])) ? (arr_15 [i_5 + 2]) : (arr_15 [i_5 - 1]))))))));
                                var_18 = ((/* implicit */short) ((-9000647723862135279LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15360)))));
                                arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) ((short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_9) : (((/* implicit */int) (unsigned short)40774))))));
                            }
                        } 
                    } 
                    var_19 = ((int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [9ULL] [4LL] [(signed char)7] [i_3]))))), (((((/* implicit */_Bool) 7701558512766108498ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_0] [(short)10] [i_0] [i_0] [i_0] [(short)10])))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (arr_9 [i_0] [i_0] [i_3]))))))))));
                    arr_18 [i_0] [i_1] [i_3] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 1] [i_1 + 3] [i_1 + 1]))))) ^ (min((((/* implicit */unsigned int) arr_6 [(unsigned short)16] [i_1 + 1] [i_1] [i_1 + 1])), ((~(392707742U)))))));
                }
            }
        } 
    } 
    var_21 &= ((/* implicit */signed char) var_9);
    var_22 = ((/* implicit */_Bool) 3449839373U);
}
