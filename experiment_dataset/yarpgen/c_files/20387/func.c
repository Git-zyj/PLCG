/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20387
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 *= ((/* implicit */short) (((~(((/* implicit */int) max(((unsigned char)46), (arr_3 [i_0])))))) > ((+(min((((/* implicit */int) (_Bool)0)), (-7)))))));
                arr_5 [i_0] [i_1] = ((/* implicit */int) arr_3 [i_0]);
                arr_6 [i_0] = ((/* implicit */short) (+(((arr_0 [i_1]) >> (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) min(((signed char)14), ((signed char)-35)))) ? ((~(18057980296840032007ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)232), ((unsigned char)237))))))), (((/* implicit */unsigned long long int) max((195921461U), (((/* implicit */unsigned int) (unsigned char)0)))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    var_22 -= ((/* implicit */unsigned char) arr_10 [i_4] [i_3]);
                    arr_13 [i_3] = ((/* implicit */long long int) (~((+(195921461U)))));
                    var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_9 [i_4] [i_3]) : (arr_8 [i_2])));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */signed char) (_Bool)1);
                                arr_21 [i_2] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (~(arr_10 [i_2] [i_5])));
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_3] [i_4] = ((/* implicit */short) (!((_Bool)1)));
                }
                for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                    {
                        arr_27 [i_3] [i_3] [i_3] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)7))));
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            arr_31 [i_7] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) 13788682518233097809ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-5427)))) % (((/* implicit */int) (unsigned short)35909))));
                            arr_32 [i_2] [i_3] [i_7] [i_8] [i_8] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                            var_24 -= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_23 [i_2]))));
                        }
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
                    {
                        var_25 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(13017849313048803127ULL))))));
                        arr_35 [(unsigned char)12] [i_3] = ((/* implicit */unsigned int) arr_12 [i_3] [i_3]);
                    }
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        arr_38 [i_3] = ((((/* implicit */_Bool) (short)-20086)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                        arr_39 [i_2] [i_3] [i_3] [i_3] [i_11] = ((/* implicit */unsigned int) arr_19 [i_2] [i_2] [i_2] [i_7] [i_11]);
                    }
                    var_26 += ((/* implicit */unsigned char) arr_23 [i_3]);
                    arr_40 [i_3] = ((/* implicit */short) (unsigned char)249);
                }
                arr_41 [i_3] [i_3] [i_3] = (short)-21944;
                arr_42 [i_2] [i_3] = (i_3 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)118)) : (arr_15 [i_3] [i_3]))) << (((((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_14 [i_3] [i_2] [5ULL] [i_3])))) - (5)))))) ? (max((((/* implicit */long long int) (signed char)-20)), (9223372036854775807LL))) : (((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (unsigned short)25576)), (638223783U))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)118)) : (arr_15 [i_3] [i_3]))) + (2147483647))) << (((((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_14 [i_3] [i_2] [5ULL] [i_3])))) - (5)))))) ? (max((((/* implicit */long long int) (signed char)-20)), (9223372036854775807LL))) : (((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (unsigned short)25576)), (638223783U)))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) var_14);
}
