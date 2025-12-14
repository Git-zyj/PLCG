/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238535
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [(unsigned short)4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 1] [(unsigned char)10])) ? (((/* implicit */int) arr_6 [(unsigned char)10] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) (unsigned short)46666))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_17 [i_1] [i_1] [(unsigned char)7] [i_3] = ((/* implicit */unsigned char) (unsigned short)18870);
                                arr_18 [0U] = (~(((long long int) (unsigned short)46691)));
                                arr_19 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] [0U] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_2 + 3] [i_4]))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_0] [4U] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22016))) >= (9526222042107451354ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48945))) : (8920522031602100261ULL)));
                    arr_21 [i_0] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned char) ((_Bool) 9526222042107451355ULL));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                arr_26 [i_1] [i_2 + 4] [i_2] [(unsigned char)13] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(8920522031602100241ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_13)))));
                                arr_27 [i_1] [(unsigned char)13] [i_2 - 1] [i_2 - 2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1]))) <= (9526222042107451355ULL)));
                                arr_28 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 1197145109471847395LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2] [i_1] [(_Bool)1]))))) : (((/* implicit */int) var_14))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [0] [i_0] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) (unsigned short)18870)) ? (0LL) : (var_10)))));
        arr_30 [(unsigned char)8] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [7LL] [i_0] [i_0])) : (((/* implicit */int) var_18))));
    }
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    arr_39 [i_7] [(unsigned char)8] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(8920522031602100243ULL))))))) - (((/* implicit */int) (unsigned short)46683))));
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        arr_42 [(_Bool)1] [(_Bool)1] [i_9] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) <= (((/* implicit */int) ((((/* implicit */int) ((9526222042107451372ULL) != (8920522031602100287ULL)))) > (((/* implicit */int) arr_4 [i_8])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 1) 
                        {
                            arr_45 [(_Bool)1] [i_10] [i_10] [i_10] [(unsigned char)4] [i_7] [i_10] = ((/* implicit */unsigned char) ((((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32627))))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) max(((_Bool)0), ((_Bool)0)))), ((-(((/* implicit */int) arr_24 [i_9] [i_10] [i_10] [i_10] [i_10])))))))));
                            arr_46 [i_11 - 2] [i_10] [i_7] [i_7] [(short)4] [i_7] [i_7] = ((/* implicit */unsigned char) min((var_2), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) % (arr_10 [i_11 - 1] [8ULL] [i_9] [i_8] [(unsigned short)5])))))));
                            arr_47 [i_7] [(short)11] [i_9] [i_7] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)169)), (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((9526222042107451372ULL) - (9526222042107451345ULL)))))) : (9526222042107451362ULL)));
                        }
                        arr_48 [i_7] [i_7] [i_9] [(_Bool)1] = ((/* implicit */unsigned char) max((-1197145109471847395LL), (min((((/* implicit */long long int) min((4072294697U), (1839132416U)))), (-3873394058846176964LL)))));
                    }
                    for (unsigned char i_12 = 4; i_12 < 11; i_12 += 1) 
                    {
                        arr_52 [4] [4] [i_9] [i_12] [1LL] [i_7] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)96)), (816870539)));
                        arr_53 [10ULL] [10ULL] [i_8] [i_7] [(_Bool)1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (1048575ULL)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                    }
                }
                arr_54 [i_7] [i_7] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (~(4072294715U)))) <= (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_8] [i_8] [i_8] [i_8] [i_7]))))))))) > (((((/* implicit */unsigned long long int) ((int) arr_51 [i_7] [i_7] [i_7] [i_8]))) & ((-(0ULL))))));
            }
        } 
    } 
}
