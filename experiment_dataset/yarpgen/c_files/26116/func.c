/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26116
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_1))));
        var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) arr_0 [i_1] [i_1]);
        var_12 = ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) ((((unsigned int) arr_1 [i_1] [i_1])) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))) : (((/* implicit */int) (((+(((/* implicit */int) arr_0 [i_1] [i_1])))) != (((/* implicit */int) (_Bool)1))))));
        arr_7 [i_1] [i_1] |= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_3 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) arr_9 [i_2] [i_2]);
        var_13 = ((/* implicit */signed char) (-((((-(((/* implicit */int) arr_9 [i_2] [i_2])))) * (((int) (short)-1))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_22 [i_5] = ((/* implicit */unsigned int) ((short) (-(0LL))));
                        /* LoopSeq 3 */
                        for (long long int i_7 = 1; i_7 < 9; i_7 += 2) 
                        {
                            var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3] [i_3])) ? (2129384160U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (arr_20 [i_6] [i_6] [i_3] [i_3] [i_3])));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (-((-(var_7))))))));
                            var_16 += ((/* implicit */unsigned short) arr_24 [i_3] [i_3] [i_3]);
                            var_17 += -655470101;
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 6; i_8 += 1) 
                        {
                            arr_27 [i_3] [i_5] = ((/* implicit */unsigned short) arr_25 [i_3] [i_3] [i_3] [i_5] [i_5] [i_5] [i_3]);
                            arr_28 [i_5] = ((/* implicit */long long int) var_9);
                        }
                        for (signed char i_9 = 2; i_9 < 7; i_9 += 2) 
                        {
                            arr_32 [i_5] = ((/* implicit */unsigned char) arr_19 [i_5]);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (var_5)))) < (arr_30 [i_5] [i_5] [i_5] [i_5] [i_5 + 1])));
                        }
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_5 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_3] [i_5] [i_5]))))) : (((var_9) | (((/* implicit */int) arr_9 [i_3] [i_3]))))));
                        arr_33 [i_3] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((arr_20 [i_3] [i_3] [i_3] [i_3] [i_3]) & (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3])));
    }
    var_21 *= (~(((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_8))))) * (max((((/* implicit */unsigned int) var_6)), (var_4))))));
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            {
                var_22 = ((/* implicit */short) var_2);
                var_23 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))) - (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (8432027632816532555ULL))), (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_10] [i_10] [i_10])))))))));
            }
        } 
    } 
}
