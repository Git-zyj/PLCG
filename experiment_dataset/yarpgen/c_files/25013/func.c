/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25013
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */int) ((unsigned char) arr_0 [i_0]));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            arr_13 [i_1] &= 18446744073709551607ULL;
                            arr_14 [i_0] [i_1] [i_0] [i_1] [(signed char)6] [i_0] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)33612))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            arr_18 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)33602);
                            arr_19 [i_5] [i_0] [3U] [i_0] [i_0] = ((/* implicit */long long int) ((arr_1 [i_5]) >= (((arr_16 [i_0] [i_0] [0U] [i_3] [i_3] [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_3])))))));
                            arr_20 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) var_12);
                            arr_21 [i_0] [i_3] [i_2] [i_3] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33603)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (arr_3 [i_5])));
                        }
                        for (unsigned char i_6 = 4; i_6 < 9; i_6 += 2) 
                        {
                            arr_25 [i_0] [0ULL] [i_6] [i_6] &= ((/* implicit */unsigned short) arr_23 [i_0] [i_6 - 2] [i_6 + 2] [i_6 - 1] [i_6 - 2] [i_1]);
                            arr_26 [i_6] [2ULL] [i_3] [i_2] [(_Bool)1] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0] [i_3]))));
                        }
                        arr_27 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                } 
            } 
            arr_28 [i_0] [i_1] [10LL] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (unsigned short)33603)))));
            arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1]);
            arr_30 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) (unsigned short)33602))));
        }
        arr_31 [i_0] = ((/* implicit */long long int) (!(arr_9 [i_0] [i_0] [i_0] [i_0])));
        arr_32 [(_Bool)1] |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (short i_7 = 1; i_7 < 7; i_7 += 3) 
    {
        arr_37 [4U] = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_11 [(unsigned char)10] [(unsigned char)10] [i_7 + 4] [i_7 - 1] [(unsigned char)10] [i_7])))));
        arr_38 [i_7 + 2] = ((/* implicit */signed char) (-(max(((-(((/* implicit */int) arr_22 [i_7] [i_7] [i_7 + 1])))), ((-(((/* implicit */int) (unsigned short)31927))))))));
    }
    for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        arr_41 [i_8] = ((((/* implicit */_Bool) (((((~(((/* implicit */int) arr_40 [i_8])))) + (2147483647))) >> (((/* implicit */int) arr_40 [i_8]))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)33612))))) ? (((/* implicit */int) (unsigned short)33602)) : (((/* implicit */int) min(((unsigned short)33618), (var_13)))))) : ((~(((/* implicit */int) (unsigned short)33604)))));
        arr_42 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_8]))))) ? (((/* implicit */int) min((arr_39 [i_8]), (arr_39 [i_8])))) : ((+(((/* implicit */int) arr_39 [i_8]))))));
        arr_43 [i_8] [i_8] = ((/* implicit */unsigned int) arr_39 [i_8]);
        arr_44 [(signed char)4] [i_8] = (-(((/* implicit */int) ((((/* implicit */int) arr_40 [i_8])) <= (((/* implicit */int) arr_40 [i_8]))))));
        arr_45 [(signed char)11] [(signed char)11] = ((/* implicit */signed char) (~((~(var_16)))));
    }
    var_18 = ((/* implicit */long long int) (unsigned short)31925);
}
