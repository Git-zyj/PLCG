/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230037
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
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) var_11)) % (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
        arr_4 [(unsigned char)14] [i_0] &= ((/* implicit */unsigned char) ((unsigned short) var_10));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_1] [i_3] [i_2] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */int) arr_8 [i_1] [i_2] [i_3]))));
                    arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_7 [i_3]);
                    arr_15 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_11 [i_2]), (arr_11 [i_2])))) << (((((/* implicit */int) arr_6 [i_1] [i_2])) - (66)))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 4; i_5 < 20; i_5 += 4) 
                        {
                            {
                                arr_21 [i_1] [(_Bool)1] [18LL] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_5 [(unsigned char)13])) + ((+(((/* implicit */int) arr_17 [i_2] [i_2])))))), (((/* implicit */int) var_2))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_5 [i_2]))));
                                arr_22 [i_2] [i_2] [i_3] [i_4] [(unsigned short)12] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_1)))))) >= (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_10 [i_2] [i_3] [i_3] [(signed char)6])))))));
                                var_21 = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_23 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)130))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [(signed char)20])) ? (((/* implicit */int) arr_12 [19LL])) : (((/* implicit */int) arr_19 [(unsigned short)3] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))) ? (((/* implicit */int) arr_20 [(unsigned char)13] [i_1] [i_1] [i_1] [i_1] [(unsigned char)2])) : (((((/* implicit */_Bool) max((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) var_16))))) ? (((((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_17 [i_1] [(_Bool)1])))) : (((/* implicit */int) ((_Bool) (unsigned char)153)))))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            var_22 *= ((/* implicit */unsigned short) var_3);
            arr_26 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_1])) ? ((~(((/* implicit */int) arr_17 [i_1] [i_6])))) : (((/* implicit */int) var_9))));
        }
        arr_27 [i_1] = var_15;
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            for (unsigned char i_8 = 3; i_8 < 17; i_8 += 1) 
            {
                {
                    arr_33 [i_8] [i_7] [i_7] = ((/* implicit */_Bool) arr_25 [i_1]);
                    arr_34 [i_8] = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
    }
}
