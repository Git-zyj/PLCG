/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225936
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) var_10)))) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)13)) >= (((/* implicit */int) var_5))))))))) : (var_12)));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) (+(((((/* implicit */int) var_15)) + (((/* implicit */int) var_10)))))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_4 [(signed char)2] [i_0 + 1])) : (((/* implicit */int) arr_4 [8ULL] [i_0 - 1])))) + (((/* implicit */int) max((arr_4 [i_0] [i_0 - 1]), (arr_4 [i_0] [i_0 - 1]))))));
            arr_9 [(signed char)16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_0 - 1] [14])))), ((-(((/* implicit */int) (signed char)81)))))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            arr_12 [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2] [i_2])) | (((/* implicit */int) arr_10 [i_0 + 1] [i_2]))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_24 [i_0 - 1] [i_3] [i_5] [i_5] [i_5] [(short)0] = ((/* implicit */signed char) ((arr_19 [i_5] [i_5] [i_0 - 1] [14LL] [i_0 - 1] [1U]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [i_0 - 1] [i_4] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))));
                            arr_25 [i_2] [8U] [i_3] [i_2] [i_0] = (_Bool)0;
                        }
                    } 
                } 
                arr_26 [(unsigned char)1] [i_2] [i_2] [(signed char)13] &= ((/* implicit */long long int) ((short) var_11));
                arr_27 [i_0] [i_3] [(unsigned char)8] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1])) : (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (short)23641)) : (((/* implicit */int) var_6))))));
            }
        }
        arr_28 [(unsigned char)6] [(unsigned char)6] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))) ? (((/* implicit */int) ((signed char) arr_21 [(_Bool)1] [i_0] [i_0 - 1] [i_0 - 1] [i_0]))) : ((~(((((/* implicit */int) arr_10 [i_0 + 1] [i_0])) & (arr_14 [(unsigned char)10] [(unsigned short)15] [(unsigned char)10] [i_0]))))));
    }
    var_16 = (short)32008;
    var_17 = (!((!(((/* implicit */_Bool) var_1)))));
    var_18 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    var_19 = ((/* implicit */int) var_8);
}
