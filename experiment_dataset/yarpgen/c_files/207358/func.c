/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207358
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
    var_16 ^= ((/* implicit */unsigned int) min(((unsigned short)26194), ((unsigned short)65535)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) (unsigned short)65535);
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)-9940)) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned short) (~(4294967294U)));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157)))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            {
                var_22 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) (short)-1194)), (min((4294967295U), (1309843380U)))))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 2; i_4 < 12; i_4 += 4) 
                {
                    var_23 = var_0;
                    var_24 ^= (unsigned short)65535;
                    var_25 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_3]))));
                }
                for (long long int i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 8384512U)) ? (((/* implicit */int) (unsigned char)148)) : (-605803224))))) ? (((/* implicit */int) ((_Bool) (unsigned char)99))) : ((-(var_9)))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_7 = 2; i_7 < 10; i_7 += 3) 
                        {
                            var_27 = ((/* implicit */_Bool) arr_6 [i_3] [i_6 - 1]);
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5 - 1] [i_5] [i_6 - 1])) ? (((/* implicit */int) arr_11 [i_5 - 1] [i_6] [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_11 [i_5 - 1] [i_6 - 1] [i_6 + 1] [i_6])))))));
                            var_29 = ((/* implicit */_Bool) var_10);
                        }
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) : (3660716795U)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))));
                        var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)200))));
                    }
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)105)))))));
                        var_33 = ((/* implicit */int) (unsigned short)59341);
                        var_34 = ((((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)122)))) + (((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_2] [i_2] [i_2]))) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [10LL] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 2041262163))))))));
                    }
                }
                var_35 -= ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_6)))))));
            }
        } 
    } 
    var_36 = ((/* implicit */_Bool) (((-2147483647 - 1)) + (((/* implicit */int) var_13))));
    var_37 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((var_9), (var_10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7832763918761544765LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) : (((unsigned long long int) var_13))));
}
