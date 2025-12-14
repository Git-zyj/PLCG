/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228489
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
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)33479))));
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (((unsigned int) var_10))));
    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) -850267444))));
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_5 [i_1] = ((((/* implicit */int) (short)8)) | (0));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)181)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [(unsigned char)8])) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) arr_4 [i_1]))))))))));
                    var_26 = ((/* implicit */unsigned int) (unsigned char)246);
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_1]))) >> (((((/* implicit */int) arr_7 [i_1] [(_Bool)1])) - (40521)))))) ? (((/* implicit */unsigned long long int) (+(1112458457)))) : (max((arr_8 [i_3 + 2] [i_2] [i_2] [i_2 - 1]), (((/* implicit */unsigned long long int) (unsigned char)6))))));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_28 -= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) | (var_15))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)9)) >> (((((/* implicit */int) arr_9 [(unsigned char)8] [i_4])) - (7401)))))))));
        arr_13 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-5643)) < ((-(arr_6 [i_4] [i_4] [i_4])))));
        var_29 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [(signed char)8] [i_4]))))) < ((-(((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) : (11883506049527231073ULL)))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 15; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_4] [i_5 - 2])) | (((/* implicit */int) arr_7 [i_5] [i_5 + 1]))))) ? (((((((/* implicit */_Bool) (signed char)91)) ? (arr_0 [i_4]) : (arr_6 [(unsigned short)8] [i_5] [(unsigned short)12]))) / (((/* implicit */int) var_18)))) : (((/* implicit */int) (unsigned short)24924)))))));
                    arr_20 [i_4] [i_5 - 1] [i_4] = (i_4 % 2 == 0) ? (((/* implicit */long long int) ((arr_12 [i_4]) > (max((((/* implicit */unsigned int) arr_6 [i_5 + 1] [i_5 - 2] [i_4])), (((var_3) >> (((arr_6 [i_4] [(short)4] [i_4]) + (574451527)))))))))) : (((/* implicit */long long int) ((arr_12 [i_4]) > (max((((/* implicit */unsigned int) arr_6 [i_5 + 1] [i_5 - 2] [i_4])), (((var_3) >> (((((arr_6 [i_4] [(short)4] [i_4]) + (574451527))) - (651555749))))))))));
                }
            } 
        } 
    }
}
