/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223151
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
    var_19 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [10ULL] [i_0] |= ((/* implicit */signed char) ((unsigned char) 3041123350U));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((short) var_10));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) ((unsigned short) arr_0 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 3; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned long long int) 1253843945U)), (17962676030541976481ULL))) >> (((/* implicit */int) arr_5 [(short)3])))) >> (((((arr_5 [i_1 + 3]) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_17))) * (arr_10 [(unsigned char)8]))) : (arr_0 [i_1] [i_1]))) - (1631306936U)))));
            arr_12 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_6 [i_1 - 3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))));
            arr_13 [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((((((((/* implicit */_Bool) 1253843945U)) ? (((/* implicit */int) arr_9 [(_Bool)1] [(unsigned char)8] [13LL])) : (((/* implicit */int) arr_5 [i_1])))) + (2147483647))) >> (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) : (var_13))))) / (((/* implicit */int) var_1))));
            arr_14 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) 1253843941U);
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 1; i_4 < 15; i_4 += 2) 
            {
                arr_19 [i_3] [i_3] [i_4] [(unsigned short)12] = ((/* implicit */int) arr_5 [i_4]);
                arr_20 [i_1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_11)), (var_17)))) ? (((unsigned int) var_15)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned char)12] [i_3 + 1] [1]))))))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (unsigned char)41))));
                var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_1 [i_1])) >> (((var_12) - (374792481755122529LL)))))));
            }
            /* LoopNest 3 */
            for (unsigned int i_5 = 3; i_5 < 15; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        {
                            arr_31 [i_6] [i_6] [i_6] [(short)14] [i_7] = ((/* implicit */_Bool) var_0);
                            arr_32 [i_1] [i_6] [i_5] [i_6] [i_6] [i_6] = ((short) (-(((long long int) var_11))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [i_1 - 3]) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((long long int) arr_18 [i_1] [16U] [0U] [i_1])) >> (((((/* implicit */int) var_17)) >> (((((/* implicit */int) (unsigned char)51)) - (24))))))) : (((((var_7) * (((/* implicit */long long int) ((/* implicit */int) var_10))))) * (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)136), (((/* implicit */unsigned char) var_8)))))))))))));
                        }
                    } 
                } 
            } 
            arr_33 [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((unsigned int) min((var_2), (((/* implicit */short) arr_5 [i_3 + 1]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [(unsigned char)8] [i_3 + 1])))))));
        }
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 3; i_9 < 15; i_9 += 2) 
            {
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)84)) >> (((/* implicit */int) (unsigned char)18))));
                    arr_39 [i_9] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_13)))) ? ((+(((/* implicit */int) var_17)))) : (((/* implicit */int) max((arr_35 [i_1]), (((signed char) var_15)))))));
                    var_24 ^= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_9 + 2] [i_1 - 2]))) * (var_14))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((unsigned char) ((unsigned char) arr_37 [i_1] [i_9 + 2] [i_9 + 2])))));
                }
            } 
        } 
        arr_40 [i_1] = ((/* implicit */_Bool) ((int) var_6));
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((unsigned long long int) (-(((/* implicit */int) (unsigned char)241))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_1)) - (146)))))) ? (((((/* implicit */int) var_8)) * (((/* implicit */int) var_3)))) : (((/* implicit */int) ((_Bool) var_5))))))));
    var_27 = ((/* implicit */unsigned char) (+(var_7)));
}
