/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202784
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) var_1))));
    var_11 *= ((/* implicit */short) var_4);
    var_12 = ((/* implicit */signed char) 10056635421786873552ULL);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_0 [i_0])))) + (2147483647))) >> (((/* implicit */int) var_8))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0])))))))));
        var_14 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (short i_1 = 4; i_1 < 20; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (unsigned short i_3 = 4; i_3 < 19; i_3 += 3) 
            {
                {
                    var_15 = max(((+(max((arr_3 [i_1 + 1]), (arr_3 [i_3 - 3]))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (unsigned short)18713))));
                        arr_11 [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_1] = ((/* implicit */short) arr_9 [i_4] [i_4 + 2] [i_3 - 1] [i_2] [i_2] [i_1]);
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        arr_15 [i_1 - 3] [i_2] [i_3] [i_5] = ((/* implicit */signed char) (+(arr_3 [i_5 + 1])));
                        var_17 = ((/* implicit */short) ((long long int) ((arr_9 [i_5 + 1] [i_5] [i_3] [i_2] [i_1 - 1] [i_1]) * (arr_9 [i_1] [i_1] [i_2] [i_2] [i_3 + 2] [i_5]))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (short)-1))));
                        var_19 |= ((/* implicit */short) ((((_Bool) ((arr_5 [i_1] [i_3]) && (((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 4] [i_1]))))) ? (((((/* implicit */_Bool) ((arr_10 [i_6] [i_3] [i_2] [i_2] [i_1]) << (((/* implicit */int) arr_5 [i_1 - 3] [i_1]))))) ? (((/* implicit */int) (unsigned short)46845)) : (((/* implicit */int) arr_6 [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1 - 1])))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        arr_22 [i_1] [i_2] [i_3] [i_3] [i_3 + 2] [i_7] = ((/* implicit */int) (unsigned short)61234);
                        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)8))));
                        arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(arr_18 [i_1 - 2] [i_3 - 2])));
                        arr_24 [i_1] [i_2] [i_3] [i_7] = ((/* implicit */long long int) (-(18446744073709551611ULL)));
                        arr_25 [i_1 - 1] [i_3] [i_7] = ((/* implicit */short) arr_8 [i_1 - 3] [i_1 - 4] [i_2]);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 2) 
                        {
                            {
                                arr_31 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 4] [i_1] |= ((/* implicit */short) max(((unsigned short)65528), (((/* implicit */unsigned short) (short)(-32767 - 1)))));
                                var_21 = ((/* implicit */long long int) arr_27 [i_8] [i_3 - 2] [i_2] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_17 [i_1 - 4]))));
        /* LoopNest 3 */
        for (long long int i_10 = 1; i_10 < 19; i_10 += 2) 
        {
            for (short i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                for (short i_12 = 2; i_12 < 19; i_12 += 2) 
                {
                    {
                        arr_39 [i_1 - 2] = ((/* implicit */_Bool) var_0);
                        var_23 ^= ((/* implicit */signed char) arr_10 [i_10 + 2] [i_10 + 1] [i_10] [i_10] [i_10]);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) 4294967288U))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_28 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))));
        arr_42 [i_13] = ((/* implicit */unsigned short) (short)(-32767 - 1));
    }
}
