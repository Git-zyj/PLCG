/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240226
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
    var_19 = ((/* implicit */long long int) var_17);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned char) ((((int) min((4294967282U), (((/* implicit */unsigned int) -8))))) != (((/* implicit */int) arr_3 [(unsigned short)12] [(_Bool)1]))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            var_21 ^= arr_0 [i_2 - 2];
                            var_22 *= ((/* implicit */signed char) var_10);
                        }
                        for (unsigned int i_5 = 3; i_5 < 11; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_2] [i_3 - 2] [i_5] = ((/* implicit */_Bool) ((signed char) min((((((/* implicit */int) (_Bool)1)) / (-5))), (((/* implicit */int) max((var_3), (arr_11 [i_3] [12U])))))));
                            var_23 = ((_Bool) max((-5), (((((/* implicit */int) arr_9 [i_0] [i_5] [i_2] [i_5] [(signed char)4] [i_2])) * (25)))));
                            var_24 = ((/* implicit */unsigned int) (!((_Bool)1)));
                        }
                        var_25 = ((/* implicit */short) ((((/* implicit */int) var_12)) - (((var_14) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (unsigned short)9505))))))));
                        arr_17 [i_3 - 1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_1] [0U] [i_3 - 1]);
                        arr_18 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */int) arr_5 [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34184)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_0]))))) : (2481234134U)));
                        var_27 = ((/* implicit */_Bool) (((_Bool)1) ? (4519048226479465541ULL) : (((/* implicit */unsigned long long int) 21))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_2] [11U] = ((/* implicit */unsigned short) 9223372036854775788LL);
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-37)) ? ((+(arr_6 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_14))))))));
                        arr_26 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_7] [i_7 - 1] [i_7 - 1])) ? (arr_24 [i_7] [i_7 - 1] [i_7 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_29 = (_Bool)1;
                    }
                    for (unsigned short i_8 = 2; i_8 < 9; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((var_10) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49286)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_31 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2] [i_2])))) ? (((((/* implicit */int) var_18)) | (((/* implicit */int) var_6)))) : ((~(((/* implicit */int) var_9))))));
                            arr_31 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_2 - 2] [i_2 - 2]))));
                            arr_32 [i_0] [i_2] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) (+((+(arr_19 [(unsigned char)12] [i_8] [10ULL] [2U])))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * ((((_Bool)0) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48863)))))));
                            var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_8])))));
                        }
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned short) 1675627725);
}
