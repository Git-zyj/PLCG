/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221008
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2011325701)) ? (-2147483647) : (2119822236))))));
                    arr_7 [i_0] [i_0] [8] [i_0] &= ((/* implicit */short) (~(((arr_4 [i_0]) ? (((/* implicit */int) arr_3 [i_2] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)242))))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (~(3433991230U)));
                }
            } 
        } 
        arr_9 [i_0] = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (-7250583797191551443LL))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(3486131449U))))));
        arr_13 [i_3] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)31))))) : ((+(arr_11 [i_3])))));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 20; i_6 += 3) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)11934))))))));
                                arr_25 [i_3] [i_4 + 1] [i_5] [i_6 + 2] [i_5] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_10))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_18 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_16 [i_4 + 1] [i_4 + 1] [i_5])))));
                    arr_26 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-102))))));
                    var_18 ^= (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_14 [i_3] [i_5]))))))));
                }
            } 
        } 
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_9)))) ? (((((/* implicit */_Bool) -1481452315)) ? (((/* implicit */int) arr_18 [i_8 - 1] [i_8] [(unsigned char)9] [i_8 - 1])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_22 [(unsigned short)2] [(unsigned short)2] [14] [(signed char)0])))))))));
        /* LoopSeq 4 */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_20 [i_8] [i_8 - 1] [i_8 - 1] [i_9])))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) (signed char)4))))) ? (((((/* implicit */_Bool) var_13)) ? ((~(var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_8 - 1] [i_9] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_18 [i_8 - 1] [i_8] [i_9] [i_9])) : (((/* implicit */int) (unsigned char)0))))))) : (((((/* implicit */_Bool) (~(-1567945159)))) ? (((/* implicit */unsigned long long int) -944725433)) : (((((/* implicit */_Bool) var_14)) ? (arr_28 [i_8 - 1] [i_8 - 1]) : (((/* implicit */unsigned long long int) arr_14 [i_8] [i_8]))))))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2978227915U)))) ? ((~(((/* implicit */int) var_3)))) : ((-(((/* implicit */int) arr_10 [i_9])))))))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_9] [i_8 - 1])) ? (var_0) : (((/* implicit */int) var_8))))))))));
        }
        for (signed char i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_23 [i_8 - 1] [i_8] [i_10] [i_8 - 1] [i_8 - 1] [i_11] [i_11]))))) ? (((((/* implicit */_Bool) arr_11 [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_11 [i_8 - 1]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)236)))))));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8] [i_8 - 1] [i_8] [i_10] [i_8])) ? (((((/* implicit */_Bool) arr_22 [i_10] [i_10] [i_10] [(signed char)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8 - 1] [i_8 - 1] [i_10] [i_11]))) : (2911978534U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_22 [i_10] [i_8 - 1] [i_10] [i_10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (short)2523)) : ((-2147483647 - 1))))))))));
            }
            arr_36 [i_8] = (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))));
        }
        for (signed char i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                for (signed char i_14 = 1; i_14 < 17; i_14 += 3) 
                {
                    {
                        var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-1))))))) ? ((~((-(arr_15 [i_8]))))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_37 [(unsigned short)20])) ? (var_1) : (((/* implicit */int) var_13)))))))));
                        arr_44 [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7428255484665818037LL)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (short)-28250))))) ? ((-(arr_35 [i_8 - 1] [i_14 + 2] [i_14 + 3] [i_14 + 3]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_8] [i_8 - 1] [i_12] [i_8 - 1] [i_8 - 1] [i_12] [i_12]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_8] [i_8 - 1] [i_12] [i_8 - 1] [i_8 - 1] [i_8] [i_12]))))) : (((((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_12] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8])) ? (3491396036U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8] [i_8] [i_12] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])))))));
        }
        for (int i_15 = 1; i_15 < 20; i_15 += 3) 
        {
            arr_47 [i_15] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_15] [i_15] [i_15 - 1] [i_15 - 1])) ? (4294967268U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_15 + 1] [i_15 + 1] [i_8 - 1])))))) ? (((((/* implicit */_Bool) var_12)) ? (arr_38 [i_15 - 1]) : (arr_38 [i_15 - 1]))) : ((-(4294967294U)))));
            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1799771759U)) ? (((/* implicit */int) arr_10 [i_15 + 1])) : (746019432))))));
        }
        arr_48 [i_8] [i_8 - 1] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_21 [i_8] [i_8] [i_8] [i_8 - 1] [i_8] [(unsigned char)12] [i_8 - 1]) : (((/* implicit */int) (signed char)-20)))))));
    }
    var_28 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) var_12))))))));
}
