/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225891
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
    var_13 = ((/* implicit */short) ((unsigned int) max((((/* implicit */int) var_1)), (((((/* implicit */int) var_4)) >> (((((/* implicit */int) (unsigned short)16729)) - (16701))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 3]))))) * (((unsigned int) arr_1 [i_0 - 2]))));
        var_15 = ((/* implicit */unsigned char) (unsigned short)16729);
        arr_2 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_0 - 2])))) ? ((~(((/* implicit */int) arr_1 [i_0 - 2])))) : (((/* implicit */int) min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) arr_1 [i_0 + 4]));
    }
    for (int i_1 = 2; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned short)48792))))))) * (((/* implicit */unsigned int) max((arr_0 [i_1 - 2]), (arr_0 [i_1 + 4])))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 + 1])))) ? (max((arr_5 [i_1 + 1]), (arr_5 [i_1 + 3]))) : ((+(arr_5 [i_1 - 1])))));
        var_16 = ((/* implicit */short) (unsigned short)48806);
    }
    var_17 = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)16729));
    var_18 &= ((/* implicit */int) 4194048U);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [i_3] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned short) var_8)), (var_1))))) ? (((((/* implicit */int) (unsigned short)48806)) >> (((((/* implicit */int) ((unsigned short) (short)-21327))) - (44200))))) : (((/* implicit */int) max((arr_12 [i_3] [(signed char)7]), (((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_2]))))))))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_4])), (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_3])))))))) ? (((arr_8 [i_3]) / (arr_8 [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)16729), ((unsigned short)65533)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4]))) : (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_5))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_5] [i_3] [i_3] [i_2] &= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4698))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_6] [i_5] [i_5] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [i_2])) | (var_5)));
                            var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)48806))));
                        }
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_2] [i_3] [i_4] [i_3] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_2]) : (arr_0 [i_3])));
                            var_21 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) == (var_6)));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_9 [i_4]))));
                        }
                        for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) ((arr_19 [i_2] [i_2] [(_Bool)1] [i_4] [i_5] [i_5] [i_8]) >= (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_4])))));
                            arr_27 [i_2] [i_5] [i_4] [(unsigned short)2] [i_8] = ((/* implicit */unsigned short) (-(var_9)));
                        }
                    }
                }
            } 
        } 
    } 
}
