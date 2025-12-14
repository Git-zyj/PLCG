/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30118
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) min((arr_6 [i_0] [i_1 - 1] [9U]), (((/* implicit */unsigned int) arr_5 [i_2] [i_1] [i_0]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned int) -137833007)) : (var_1))))));
                        arr_11 [(unsigned short)0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [19U] [i_1] [i_0 - 2] [i_3] [i_3] [i_0 - 2])) ? (((/* implicit */int) ((unsigned short) 4047448384U))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0 + 1] [(unsigned char)3] [(unsigned char)3]))))));
                        arr_12 [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_10 [i_0 + 1] [i_2] [i_1 + 1] [i_1]))));
                        var_20 = ((/* implicit */_Bool) var_10);
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((4047448384U) != (3957452363U)))) / (((/* implicit */int) arr_5 [i_1] [i_2] [i_3]))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5425)) ? (16331433839396128178ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3340)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)29168))))))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 3; i_5 < 19; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned short)157))))));
                            arr_19 [(_Bool)1] = ((/* implicit */short) (-((-(((((/* implicit */_Bool) var_16)) ? (2115310234313423438ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))))));
                            arr_20 [i_0] [i_1] [i_2] [i_4] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_0] [i_1] [i_2]))));
                            var_24 += arr_5 [i_1] [i_2] [i_4];
                            var_25 = ((/* implicit */long long int) ((_Bool) (_Bool)0));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-125)) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8179108257536262040ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (unsigned char)19))));
                        }
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0] [i_0 + 1])) ? (8407232774607744523ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22131)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0] [i_0 - 2]))))) : ((-(((/* implicit */int) var_14))))));
                    }
                    for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        arr_26 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)8093), (((/* implicit */short) arr_21 [i_0 - 2] [14LL] [i_2] [i_7] [i_2] [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18251))) == (16211702093201579170ULL))))) : ((+(arr_6 [12LL] [i_2] [i_7]))))))));
                        var_29 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 1])))) == ((~(((/* implicit */int) var_9))))));
                        var_30 = ((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_0] [i_0 - 2] [(unsigned char)2] [5U] [i_0]);
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (~((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_8 = 1; i_8 < 12; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            arr_33 [i_8 - 1] [i_9] = ((signed char) ((signed char) ((unsigned long long int) 16331433839396128178ULL)));
            /* LoopSeq 1 */
            for (short i_10 = 3; i_10 < 11; i_10 += 4) 
            {
                var_32 = (-(((/* implicit */int) arr_4 [i_8] [i_8])));
                arr_37 [i_10] [10ULL] [i_8] = ((/* implicit */_Bool) var_1);
            }
            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (~(16211702093201579170ULL))))) ? (((/* implicit */unsigned int) (~(arr_14 [i_8] [i_8 + 1] [i_8] [i_8] [i_8 - 1] [i_9])))) : ((~(arr_36 [i_8 - 1] [i_8 + 1] [i_9])))));
            var_34 += ((/* implicit */signed char) (!((!((_Bool)1)))));
        }
        var_35 = 2640708048U;
    }
    for (unsigned short i_11 = 1; i_11 < 12; i_11 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */short) (+(((unsigned long long int) var_3))));
        var_37 = ((/* implicit */unsigned long long int) 247518911U);
    }
    var_38 = ((/* implicit */short) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? ((+(2115310234313423438ULL))) : (var_6))), (((/* implicit */unsigned long long int) (_Bool)1))));
}
