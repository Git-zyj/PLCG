/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228467
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
    var_18 = ((/* implicit */short) var_9);
    var_19 = ((/* implicit */short) (-(((((/* implicit */int) max(((unsigned short)6804), ((unsigned short)6804)))) << (((((((/* implicit */int) ((short) (signed char)-78))) + (97))) - (12)))))));
    var_20 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -872503938)) ? (((3866607703782618701LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))))) : (-4955562945562000901LL)))), (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (var_1)))) ? (((((/* implicit */_Bool) 4294443008U)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)65535))))))));
    var_21 = ((/* implicit */signed char) var_11);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) ((2913044798U) << (((3654427962U) - (3654427933U)))));
        arr_3 [(short)2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) -1)) * (3866607703782618701LL)));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) & (15051250617664081416ULL)));
        arr_5 [9U] [i_0] = ((/* implicit */unsigned short) max(((((~(((/* implicit */int) (short)-26386)))) << (((((/* implicit */int) (signed char)-63)) * (((/* implicit */int) arr_0 [i_0] [i_0])))))), ((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17))))))));
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        var_23 = ((/* implicit */signed char) ((long long int) (-(((((/* implicit */_Bool) -3866607703782618722LL)) ? (4855530936752316869LL) : (131070LL))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)63)) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (257566355153078274ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_7 [i_1])))))))));
        arr_9 [i_1] = ((/* implicit */long long int) ((int) (~(((/* implicit */int) (!(var_2)))))));
        arr_10 [i_1 - 1] = ((/* implicit */unsigned char) arr_0 [i_1] [i_1 - 1]);
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 1) 
                {
                    {
                        arr_22 [(unsigned char)12] [i_2] [i_4] [i_5 - 2] |= ((/* implicit */int) ((var_3) & (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)31744)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_15 [(_Bool)1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(signed char)18] [i_3 - 1]))))))))));
                        arr_23 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(11586488567353936216ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_3 - 2] [i_5 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_20 [i_3 - 1] [i_5 + 2] [i_4])) : (((/* implicit */int) arr_20 [i_3 - 1] [i_5 - 2] [(_Bool)1]))))) : (((((1073741824ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_17 [i_2] [i_3] [i_4] [i_5 - 1])) + (2147483647))) >> (((var_8) - (6062625145927632840ULL))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_27 [i_6] = ((/* implicit */signed char) (unsigned char)255);
            arr_28 [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_19 [i_2] [i_6] [i_6] [i_6]), (((/* implicit */unsigned short) arr_20 [i_2] [i_2] [i_6])))))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (unsigned char)250))) ^ ((~(((/* implicit */int) arr_0 [i_2] [i_6]))))))) : (((((/* implicit */_Bool) arr_16 [i_6] [4LL] [i_2])) ? (arr_16 [i_2] [(unsigned char)8] [i_6]) : (arr_16 [(signed char)2] [(signed char)2] [i_2])))));
            var_25 &= ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) / (((long long int) arr_25 [6] [i_2] [i_2])))), (((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_2])), (((int) 5028493526961291619ULL)))))));
            arr_29 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_24 [i_6])) << (((((/* implicit */int) arr_21 [i_2] [i_2] [i_6] [i_6] [i_6] [i_6])) - (5659)))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 7410820887283550941ULL))))) - ((~(-1))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_26 [i_2] [i_6] [i_6])), ((unsigned short)19685))))));
        }
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_17 [i_2] [i_2] [i_2] [i_2]))));
        arr_30 [i_2] = ((/* implicit */_Bool) -2059879092);
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 2) 
    {
        arr_33 [i_7 + 1] [i_7] = arr_19 [0U] [i_7 + 1] [i_7 - 1] [6ULL];
        arr_34 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [(unsigned short)18] [i_7] [10LL] [(unsigned short)18])) || (((/* implicit */_Bool) arr_19 [2ULL] [i_7] [i_7] [2ULL]))));
        arr_35 [i_7 + 1] = ((/* implicit */long long int) var_13);
    }
}
