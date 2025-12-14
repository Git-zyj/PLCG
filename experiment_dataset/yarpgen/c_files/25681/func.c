/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25681
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((unsigned char) ((int) (unsigned short)65529)));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (max((var_10), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) var_11);
                        arr_11 [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_2]))))) && (max((((arr_7 [i_2] [5LL] [i_2] [i_1] [i_0] [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [i_3]))))), (((6648600689241267960LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)75)))))))));
                    }
                } 
            } 
            arr_12 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))));
        }
        var_17 = ((/* implicit */unsigned short) ((0LL) | (6648600689241267960LL)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 15; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_5])) >= (arr_0 [i_5 + 1] [i_5 + 1])));
                    var_19 *= ((/* implicit */short) arr_6 [i_4] [i_4] [i_4] [(signed char)5]);
                    var_20 = ((/* implicit */unsigned int) var_10);
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4]))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_0 [i_7] [i_7])) & (((((/* implicit */_Bool) arr_22 [i_7] [i_7])) ? (max((9223372036854775807LL), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)112)))))))));
        arr_26 [(_Bool)1] [i_7] &= ((/* implicit */short) (-(((((/* implicit */_Bool) max(((short)32154), (var_7)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [(unsigned short)0] [i_7])), ((unsigned short)3))))))));
        var_23 = ((/* implicit */short) ((((/* implicit */long long int) (~(4U)))) + (max((((8589901824LL) << (((((/* implicit */int) var_12)) - (32063))))), (((/* implicit */long long int) arr_22 [i_7] [i_7]))))));
        var_24 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((max((((/* implicit */unsigned short) arr_25 [2])), (var_0))), (((/* implicit */unsigned short) ((((/* implicit */int) var_1)) > (((/* implicit */int) (short)9864))))))))) | (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [(unsigned char)8] [(unsigned short)12]))))) - (max((((/* implicit */unsigned int) arr_1 [i_7] [i_7])), (arr_7 [(unsigned short)0] [i_7] [i_7] [(short)14] [i_7] [(unsigned short)0])))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_8])) & (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 24; i_9 += 4) 
        {
            for (long long int i_10 = 1; i_10 < 23; i_10 += 3) 
            {
                {
                    arr_37 [(unsigned char)0] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_9 + 1] [i_9 - 1] [i_9 + 1])) ? (((/* implicit */int) arr_35 [i_9 + 1] [i_9 - 1] [i_9])) : (((/* implicit */int) arr_31 [i_9 + 1] [i_9 - 1] [i_9]))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_28 [i_9 - 1])) | (((/* implicit */int) var_8))));
                    arr_38 [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_9] [(unsigned short)18] [(unsigned short)18])) ? ((-(((/* implicit */int) (signed char)62)))) : (((/* implicit */int) arr_33 [i_9 + 1] [i_9 - 1] [i_10 + 1]))));
                }
            } 
        } 
        arr_39 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_33 [i_8] [0LL] [i_8])) < (((/* implicit */int) var_9))));
        var_26 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_8]))));
    }
    /* LoopSeq 1 */
    for (short i_11 = 1; i_11 < 18; i_11 += 4) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_11 + 1] [i_11 + 3])) ? (((/* implicit */int) arr_41 [i_11 + 4] [i_11 - 1])) : (((/* implicit */int) var_11))))) ? ((-(((/* implicit */int) arr_41 [i_11 + 4] [i_11 + 2])))) : ((-(((/* implicit */int) arr_41 [i_11 - 1] [i_11 + 3]))))));
        arr_43 [i_11] = ((/* implicit */long long int) var_0);
    }
}
