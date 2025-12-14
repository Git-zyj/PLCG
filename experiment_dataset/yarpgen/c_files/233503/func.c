/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233503
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((_Bool) arr_1 [i_0 + 2])))));
        var_11 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)112));
    }
    for (long long int i_1 = 2; i_1 < 24; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        arr_13 [22U] [i_3] [24ULL] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [(unsigned short)21] [(unsigned char)11] [(signed char)11] [13U]))));
                        arr_14 [i_1] [(unsigned char)9] [(unsigned char)9] [i_3] [(unsigned short)24] = ((/* implicit */unsigned char) (+(var_3)));
                        arr_15 [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)5120))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            arr_18 [i_1] [i_3] [(unsigned short)17] [(unsigned short)17] [(unsigned short)17] [i_1] = ((/* implicit */long long int) arr_8 [i_1] [(_Bool)1] [23LL]);
                            var_12 -= ((/* implicit */unsigned int) var_2);
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-117)))))));
                            arr_19 [i_1] [(signed char)6] [(unsigned char)3] [i_3] [(unsigned char)3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_2] [(signed char)18] [(unsigned char)4]))));
                            arr_20 [i_3] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) arr_7 [i_1] [i_2] [7]);
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            arr_24 [12LL] [i_3] [i_3] [14LL] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) var_3);
                            var_14 = ((/* implicit */signed char) var_8);
                        }
                    }
                } 
            } 
        } 
        arr_25 [i_1] = ((/* implicit */unsigned int) var_2);
    }
    for (long long int i_7 = 2; i_7 < 16; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_8 = 3; i_8 < 14; i_8 += 4) 
        {
            for (unsigned int i_9 = 4; i_9 < 15; i_9 += 3) 
            {
                for (unsigned short i_10 = 1; i_10 < 16; i_10 += 4) 
                {
                    {
                        arr_37 [(signed char)5] [(_Bool)1] [i_9] [i_9] [(_Bool)1] [10U] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) arr_7 [i_7] [i_7] [i_7])) & ((~(((/* implicit */int) var_9)))))));
                        var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) arr_30 [i_7 - 2] [i_8 + 2])) : (((/* implicit */int) (signed char)60))))));
                        arr_38 [i_7] [i_7] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2639940659U))))) : (((/* implicit */int) (unsigned short)49813))));
                        var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(signed char)7] [(signed char)1] [(signed char)7] [(unsigned short)4] [(signed char)13]))) == (arr_35 [(unsigned char)5] [(unsigned char)1] [(unsigned char)1] [15U] [(unsigned char)5]))))), (arr_35 [i_7] [i_7] [i_7] [i_7] [i_7])));
                    }
                } 
            } 
        } 
        arr_39 [3U] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_7 [9U] [9U] [i_7 - 2]))))));
    }
    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        arr_42 [4U] [(unsigned char)0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_11] [i_11])) ? (arr_27 [i_11] [(signed char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124)))))) / (var_3)));
        var_17 = ((/* implicit */unsigned char) max((arr_29 [i_11]), (((/* implicit */int) arr_2 [i_11] [i_11]))));
        arr_43 [i_11] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (arr_29 [i_11])))) ? (min((var_8), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_7))))))));
    }
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) 9858492064796946709ULL)) && (var_9)))) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (var_5)))) : (((/* implicit */int) var_6))));
    var_19 = ((/* implicit */unsigned char) var_2);
}
