/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212660
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
    var_10 = ((/* implicit */signed char) var_8);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */int) min((var_11), ((-(((/* implicit */int) (unsigned short)23799))))));
        var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((unsigned short)23799), ((unsigned short)23804)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)41737)))) >> (((((/* implicit */int) (unsigned short)62426)) - (62422)))));
        var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)41747))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                arr_10 [i_1] [i_3] = ((/* implicit */signed char) (~((-(((/* implicit */int) (_Bool)1))))));
                arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)41738))));
                var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_8 [i_1] [i_1] [i_2] [i_2 + 2]), (arr_8 [i_1] [i_1] [i_2] [i_2 + 1]))))));
                arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_8 [i_1 + 1] [i_1] [i_3] [i_3]), (((/* implicit */unsigned short) arr_9 [i_1] [i_1]))))) << (((max((min((((/* implicit */unsigned int) arr_0 [i_2])), (43101397U))), (max((arr_2 [i_1] [i_2]), (((/* implicit */unsigned int) (_Bool)1)))))) - (3170030740U)))));
            }
            /* vectorizable */
            for (signed char i_4 = 3; i_4 < 19; i_4 += 3) 
            {
                var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_2 - 2] [3U] [i_1])) ? (((((/* implicit */_Bool) arr_4 [(signed char)8] [(unsigned char)16] [i_1 + 1])) ? (((/* implicit */int) arr_7 [10U] [i_2 - 1] [i_4])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2] [0LL]))));
                var_16 = ((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_4]);
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((arr_13 [i_1 + 3] [i_4 - 3] [i_4 - 3] [i_4 - 3]) ^ (arr_13 [i_1 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 3]))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned int i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        {
                            arr_19 [i_1] [i_4 - 2] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) arr_14 [i_1] [i_2] [i_1 - 1] [(signed char)13]));
                            var_18 = ((/* implicit */long long int) ((arr_9 [i_1] [i_6 + 2]) ? (((/* implicit */int) arr_9 [i_1] [i_6 + 2])) : (((/* implicit */int) arr_9 [i_1] [i_6 + 1]))));
                            var_19 = ((/* implicit */short) ((unsigned char) arr_16 [i_1] [i_1] [i_4 - 2] [i_5]));
                        }
                    } 
                } 
            }
            arr_20 [i_1] [i_1] = ((/* implicit */int) (~(0U)));
            arr_21 [i_1] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_7 [i_1] [i_1 - 1] [i_2 - 1])), (arr_14 [i_1] [i_2] [i_1] [i_1]))) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1 - 2] [i_2 - 1])))));
        }
        var_20 = ((/* implicit */long long int) ((unsigned char) max((((((/* implicit */_Bool) (short)24585)) ? (((/* implicit */unsigned int) 16777215)) : (98304U))), (((/* implicit */unsigned int) arr_15 [i_1 - 3] [i_1 - 3] [i_1] [i_1 + 3] [i_1] [i_1 + 3])))));
        arr_22 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_2 [i_1] [i_1])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned char)208)))) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1 + 3]))))) ? (((long long int) ((unsigned short) (_Bool)1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1 + 3])) > (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 3])) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1]))))))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) 389352783U))))), ((-2147483647 - 1)))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        arr_25 [i_7] [i_7] = ((/* implicit */unsigned char) (+(arr_6 [8ULL])));
        arr_26 [i_7] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [(signed char)16])) ? (arr_23 [i_7 + 1]) : (((/* implicit */int) arr_17 [i_7] [i_7] [(unsigned short)2]))));
        var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        arr_30 [i_8] = ((/* implicit */signed char) max((((arr_27 [i_8] [i_8]) ? (((/* implicit */int) arr_3 [i_8] [i_8])) : (((/* implicit */int) arr_3 [i_8] [i_8])))), (((/* implicit */int) ((unsigned char) arr_27 [i_8] [i_8])))));
        arr_31 [i_8] [i_8] |= ((/* implicit */_Bool) ((int) (unsigned short)23808));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((unsigned short) (unsigned char)68)))) ? ((+(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (1736081131) : (((/* implicit */int) (_Bool)0))))))));
        var_24 &= min((((int) arr_8 [i_8] [i_8] [i_8] [i_8])), (((/* implicit */int) ((short) min((arr_2 [(short)11] [i_8]), (1545973209U))))));
    }
}
