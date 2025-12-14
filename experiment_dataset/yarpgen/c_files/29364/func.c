/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29364
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
    var_13 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    arr_6 [i_2] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)194))))))))));
                    var_14 = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (short)-31425)))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    arr_10 [i_0] [i_1] [i_1] &= var_9;
                    var_15 = ((/* implicit */unsigned short) ((short) arr_1 [i_0 - 3] [i_0 - 2]));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    arr_13 [i_4] [i_1] [i_1] = (~((-(((/* implicit */int) arr_3 [i_1] [(short)6])))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0 - 2] [i_1] [i_4] [(unsigned char)9] [i_4] [i_6] = ((/* implicit */unsigned char) ((short) ((short) (-(arr_18 [i_0] [i_1] [i_4] [i_5] [i_5] [1])))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_8))));
                                var_17 = ((/* implicit */int) arr_7 [(unsigned short)5] [1U]);
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_6))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 2; i_8 < 10; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0] [i_0]);
                                var_20 = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_8] [i_9])) == (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 2] [i_8 - 2] [i_8 - 1]))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_0 - 3] [i_0 - 1] [i_8 + 1])))))));
                                var_22 = ((/* implicit */short) ((((0LL) == (((/* implicit */long long int) arr_15 [i_1] [i_7] [(unsigned char)10] [i_8])))) ? (2091595000) : (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)10320)))))));
                            }
                        } 
                    } 
                    var_23 *= ((((/* implicit */_Bool) (-(8793807372513158144ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_7]))) == (arr_29 [i_0 - 1] [i_0 - 1] [i_7]))))) : ((~(-9131134266456648091LL))));
                    var_24 = ((/* implicit */long long int) var_6);
                }
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) max((var_25), (arr_28 [i_1] [i_1] [i_10] [i_11] [8U] [9LL] [i_12])));
                                var_26 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5))))))));
                                var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)31434)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (((-(((/* implicit */int) arr_5 [6ULL] [i_1] [1] [i_1])))) == (((((/* implicit */int) (short)31445)) ^ (((/* implicit */int) (unsigned short)44460)))))))));
                                var_28 += ((/* implicit */unsigned long long int) var_1);
                            }
                        } 
                    } 
                    arr_38 [i_0] [i_1] [4ULL] [4ULL] |= ((unsigned int) 0LL);
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)31436)))) / (((((/* implicit */_Bool) arr_29 [i_0] [2ULL] [i_0 - 2])) ? (arr_32 [(unsigned short)4] [i_0 - 1] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                }
            }
        } 
    } 
}
