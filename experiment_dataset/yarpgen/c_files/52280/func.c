/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52280
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
    var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
    var_14 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) var_5)))) + (2147483647))) << (((((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) + (((/* implicit */int) var_2)))) - (29365)))));
    var_15 = ((/* implicit */_Bool) (unsigned short)25);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 1) /* same iter space */
        {
            var_16 -= ((/* implicit */unsigned char) ((unsigned int) ((short) (short)-6343)));
            var_17 = ((/* implicit */unsigned char) ((1686840627U) ^ (arr_5 [i_1])));
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                var_18 -= ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_1] [i_2 - 1]))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (unsigned short)24884))));
            }
        }
        /* vectorizable */
        for (unsigned short i_3 = 3; i_3 < 16; i_3 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) ((arr_8 [i_0 - 1] [i_3 + 1] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_0]))))));
            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 + 3] [0ULL]))));
        }
        /* LoopNest 3 */
        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    {
                        arr_20 [i_0] [i_4] [i_4] = ((arr_8 [i_0] [i_4] [i_5]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [2ULL]))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_7 = 3; i_7 < 18; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */int) (-((+(arr_22 [i_0] [i_4] [i_4] [i_0] [i_5] [(unsigned short)0] [i_5])))));
                            arr_23 [i_7 - 1] [i_4] [i_6] [i_6] [i_5] [i_4] [8] = ((/* implicit */_Bool) ((((arr_8 [i_4 + 2] [i_4] [i_4 + 2]) != (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) ? (((arr_0 [i_6]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5] [i_6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_7] [i_6])) && (((/* implicit */_Bool) var_2))))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */short) ((((/* implicit */int) var_2)) > (arr_26 [i_5] [i_4 + 3]))))));
                            arr_28 [i_8] [i_4] [i_5] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_8 [i_8] [i_4 + 1] [i_0 + 2])))) * (max((((/* implicit */unsigned int) arr_24 [i_0] [0] [i_8] [i_4] [i_5] [i_4 + 3])), (arr_8 [i_0 - 1] [i_4] [i_5])))));
                            arr_29 [i_8] [i_4] [i_6] [i_6] [i_5] [i_4] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_19 [i_6] [i_0] [i_5] [i_0])) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5])))))), ((-(((((/* implicit */_Bool) 4638080596663796037ULL)) ? (((/* implicit */int) (short)19247)) : (((/* implicit */int) arr_24 [i_8] [i_6] [i_4] [i_4] [1ULL] [i_0]))))))));
                            var_24 = ((/* implicit */unsigned int) var_5);
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)19247)) + (((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_33 [i_0] [i_4 + 1] [i_5] [i_9] [i_4] [i_4] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_10)))));
                            arr_34 [i_4] [i_4] = ((/* implicit */unsigned short) (_Bool)1);
                            var_26 = ((/* implicit */unsigned char) arr_25 [i_0 + 2] [i_5] [i_4] [i_9]);
                        }
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            arr_39 [i_4] [i_6] = ((/* implicit */_Bool) (short)(-32767 - 1));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_22 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) & (arr_22 [i_0 + 3] [i_4] [(_Bool)1] [i_0 - 1] [i_10] [i_10] [i_4])))) ? (((((/* implicit */_Bool) 364817459U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0 + 3] [i_0 + 3] [i_0 + 2] [i_4 - 1] [i_4]))) : (arr_32 [i_0 + 3] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(signed char)18] [i_4] [i_4] [i_4] [i_4 + 1])))));
                            var_28 -= ((/* implicit */short) var_3);
                        }
                        arr_40 [i_0] [i_4] [i_4 + 1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_0] [i_0])), (max((((((/* implicit */_Bool) (short)-19271)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)62)))), (((int) arr_21 [i_0] [i_4] [i_6]))))));
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)12)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((2147483647), (((/* implicit */int) (short)-29335))))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_11 = 3; i_11 < 16; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned int) ((long long int) arr_7 [i_0 + 3] [i_4 - 1] [i_11 + 1]));
                            var_31 = ((/* implicit */unsigned short) ((int) (unsigned char)62));
                        }
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_4 + 3] [i_5])) ? (((/* implicit */int) arr_30 [i_0] [i_6] [i_4] [i_0] [i_4])) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) 13808663477045755579ULL))));
                            arr_47 [i_0] [i_0] [i_5] [i_4] [i_12] = ((/* implicit */unsigned char) 15757965131782559529ULL);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) 
    {
        var_33 = ((/* implicit */unsigned int) (((-(arr_38 [i_13] [i_13]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
        var_34 = ((short) ((((/* implicit */_Bool) arr_19 [i_13] [i_13] [i_13] [i_13])) ? (arr_38 [i_13] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    }
    var_35 = ((/* implicit */short) ((int) ((((var_12) + (var_12))) > (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
}
