/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220226
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [0LL] [0LL] &= ((/* implicit */signed char) ((_Bool) max((((((/* implicit */_Bool) arr_3 [8LL] [i_1] [(unsigned short)0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)109)))), (((/* implicit */int) max((var_5), (arr_4 [i_0] [i_0])))))));
                    arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) >= ((~(((/* implicit */int) (unsigned char)109))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 2; i_3 < 7; i_3 += 3) 
        {
            var_17 = ((/* implicit */short) 4930562854403825921ULL);
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            arr_17 [(unsigned short)4] [i_3] [(short)7] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 - 1])) & (((/* implicit */int) ((short) var_1)))));
                            arr_18 [i_5] [i_3] [i_3] [i_3 + 2] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))) >= (arr_16 [7LL] [i_3 - 1] [i_4] [i_5] [i_6])));
                            arr_19 [i_0] [i_3 - 2] [i_5] [i_0] [i_4] = ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)109))))) : ((~(arr_5 [i_5] [i_5] [i_5]))));
                        }
                    } 
                } 
            } 
            var_18 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_3 - 1] [i_3 + 2]))));
            arr_20 [i_0 + 1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_15)) ? (arr_5 [i_0] [i_3 + 2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
            arr_21 [i_0] [(unsigned char)3] [i_3 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [6])) ? (((((/* implicit */_Bool) (unsigned char)109)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)30714)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 - 1])))))));
        }
        var_19 |= ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) >= (((/* implicit */int) var_3))))), (arr_13 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1])))) >> ((((-(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_0 [i_0])))))) + (8751)))));
        arr_22 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_0 - 1] [i_0 + 1]))));
        arr_23 [i_0] = ((/* implicit */int) arr_12 [(short)1] [(unsigned short)0] [i_0 + 1] [i_0 + 1]);
    }
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 2) 
    {
        arr_26 [i_7] [9ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_7] [i_7])) | (((/* implicit */int) arr_24 [i_7 - 2] [(short)5]))))) ? (((/* implicit */int) arr_24 [i_7 + 1] [i_7 + 1])) : (((((/* implicit */int) arr_24 [i_7] [i_7])) | (((/* implicit */int) var_16))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_7 + 1] [i_7 + 1])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)89)) != (((/* implicit */int) arr_25 [i_7]))))) : (((/* implicit */int) arr_24 [i_7 - 2] [i_7 + 1]))));
        arr_27 [i_7] [i_7] = ((/* implicit */short) (unsigned char)90);
    }
    var_21 = ((/* implicit */signed char) (!(((min((((/* implicit */int) var_16)), (var_13))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)101)))))))));
    var_22 &= ((/* implicit */short) max(((-(var_2))), (((/* implicit */unsigned long long int) var_0))));
}
