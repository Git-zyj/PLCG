/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51908
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((_Bool) arr_0 [i_0]));
        arr_4 [(signed char)5] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(signed char)5] [(_Bool)1])) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)8])) : (((/* implicit */int) var_15))))) < ((~(arr_0 [i_0]))))) ? ((-(var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_5 [(unsigned short)10] = -7793720920846817372LL;
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0] [i_0])), (-7793720920846817374LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) < ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))) : (((unsigned int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_22 *= ((/* implicit */_Bool) (signed char)29);
        /* LoopSeq 4 */
        for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            var_23 = ((/* implicit */signed char) arr_8 [i_2 + 1] [i_2]);
            var_24 -= ((/* implicit */unsigned char) arr_6 [(signed char)8]);
            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_2 + 1] [i_2]))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) (unsigned short)12799))))));
        }
        for (long long int i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            arr_16 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1] [(short)14])) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_3] [i_3])))))));
            var_27 = ((/* implicit */unsigned long long int) ((unsigned char) (-(arr_14 [i_3] [i_3]))));
            var_28 = ((/* implicit */short) (~(6172431401628958493LL)));
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [7LL] [i_3]))) : (-1LL)))));
            var_30 = arr_12 [i_3];
        }
        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_19)) ? (27LL) : (arr_10 [i_1] [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 + 1] [i_4])))));
            var_32 = ((/* implicit */unsigned long long int) arr_8 [(signed char)12] [i_4]);
            arr_19 [i_1] [i_4] = ((/* implicit */long long int) arr_11 [i_1] [i_4] [i_4]);
        }
        for (long long int i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
        {
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_5] [(unsigned short)10])) ? (((unsigned long long int) arr_15 [4ULL] [i_5])) : ((-(arr_20 [i_1] [0ULL] [i_1])))));
            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_5])) ? (((/* implicit */int) arr_15 [i_1 + 1] [i_5])) : (((/* implicit */int) arr_15 [i_1 + 1] [i_5])))))));
        }
        var_35 = ((/* implicit */unsigned long long int) arr_12 [(short)0]);
    }
    for (short i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        var_36 = ((/* implicit */short) max((((/* implicit */long long int) (signed char)65)), (-6581719078415864784LL)));
        var_37 = ((/* implicit */_Bool) ((((6172431401628958498LL) >> (((-31LL) + (77LL))))) >> (((max((((/* implicit */unsigned long long int) ((arr_17 [i_6] [i_6]) == (((/* implicit */unsigned long long int) var_3))))), (max((arr_13 [i_6] [(signed char)6]), (((/* implicit */unsigned long long int) var_14)))))) - (14105370821213685871ULL)))));
    }
    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)55994)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (signed char)49))));
    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) var_18)) * (((/* implicit */int) var_11)))), (((((/* implicit */int) (short)31810)) * (((/* implicit */int) var_15))))))) ? (((var_14) ? (((var_14) ? (6095371307948985079ULL) : (((/* implicit */unsigned long long int) -6172431401628958498LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_12))))))))));
}
