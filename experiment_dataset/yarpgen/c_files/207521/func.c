/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207521
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
    var_10 = var_8;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)255))))), (var_8)));
        arr_4 [(unsigned char)1] = ((/* implicit */unsigned short) arr_2 [(unsigned char)8]);
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)4])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned short)63754)) : (((/* implicit */int) arr_2 [i_0])))) <= ((+((-(((/* implicit */int) var_1))))))));
        arr_6 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_11 [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1]))) - (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_7 [i_1] [i_1])))));
        arr_12 [i_1] = var_1;
        arr_13 [0LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1])) ? (arr_10 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1])))));
    }
    var_11 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_3))))) && (((/* implicit */_Bool) var_7))))), ((+(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_0)))))))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 20; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_22 [(unsigned short)20] [(_Bool)1] [i_4 - 1] &= ((/* implicit */long long int) (+(((((/* implicit */int) arr_16 [i_3 + 2])) >> (((/* implicit */int) arr_18 [i_2 + 1] [(_Bool)1]))))));
                    arr_23 [i_4] [i_2] [i_2] [i_4 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_19 [i_2 + 4] [(_Bool)1] [i_4 - 1]) % (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_2])) | (((/* implicit */int) arr_20 [(unsigned char)13]))))))))));
                }
            } 
        } 
    } 
}
