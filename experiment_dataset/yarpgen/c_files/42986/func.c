/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42986
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
    var_13 *= ((/* implicit */unsigned short) var_4);
    var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (_Bool)1))))) >= ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)28))))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_3 [i_0]))));
                                var_17 &= var_2;
                                var_18 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [14] [i_0 - 1]))))) & (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (var_6))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_12))))))))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */unsigned long long int) var_7);
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_0 - 3] [i_0 - 2] [i_0 - 2]), (((/* implicit */int) (unsigned short)43219))))) ? (arr_10 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) arr_4 [11U] [i_0 - 3] [i_0 - 1])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_21 += ((/* implicit */unsigned long long int) ((short) 11369579862317728848ULL));
                            var_22 -= ((/* implicit */unsigned short) arr_4 [i_0] [5ULL] [i_2]);
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_5] [i_1 - 1] [(unsigned short)4] [i_5])))))));
                            var_24 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_1 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_1 - 1] [i_6 - 1])) : (((/* implicit */int) var_1)))) * (((((/* implicit */int) arr_9 [i_5] [(_Bool)1] [i_1 - 1] [i_6 - 1])) * (((/* implicit */int) (unsigned char)55))))));
                        }
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483647)))))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((var_5) ? (((((((/* implicit */int) var_7)) << (((/* implicit */int) var_10)))) >> (((((unsigned long long int) 4294967295U)) - (4294967272ULL))))) : ((-(((/* implicit */int) var_4)))))))));
                        var_27 -= ((/* implicit */unsigned short) var_10);
                    }
                    for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((unsigned short) arr_18 [i_0] [(unsigned char)11] [i_0] [(unsigned short)15] [(unsigned short)4]))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((unsigned long long int) var_9)) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_22 [i_2] [i_2] [i_0] [i_0])))) : (((arr_20 [i_7] [i_1 - 1] [i_1 - 1] [i_0 - 3] [i_7]) ? (arr_22 [i_0 - 3] [i_0 + 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */long long int) ((((/* implicit */int) arr_20 [(unsigned short)6] [i_1 - 1] [6ULL] [(unsigned char)8] [i_7])) - (((/* implicit */int) var_7))))))))))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_7] [(_Bool)1] [i_2] [(unsigned short)8])) ? (arr_22 [i_0] [i_0] [i_0] [i_0]) : (arr_11 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_7] [i_7])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_31 -= ((/* implicit */signed char) (((-((-(-18716991))))) * (((/* implicit */int) ((short) ((_Bool) (_Bool)0))))));
                            var_32 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_7] [i_7]))));
                        }
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((unsigned long long int) ((signed char) min((-788250208), (((/* implicit */int) var_12)))))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        var_34 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)23196)) < (((/* implicit */int) (signed char)-33))));
                        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((unsigned int) min((((/* implicit */signed char) arr_20 [(signed char)8] [(signed char)8] [(signed char)8] [(_Bool)1] [(unsigned short)0])), (arr_9 [2ULL] [2ULL] [2ULL] [(signed char)8])))))));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((7077164211391822773ULL) == (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [(signed char)10] [i_1 - 1] [(unsigned short)6]))) : (var_6))))))));
                        var_37 = ((/* implicit */unsigned short) max((var_37), ((unsigned short)4506)));
                    }
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (unsigned short)62830))));
}
