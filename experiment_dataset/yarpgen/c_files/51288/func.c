/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51288
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
    var_11 = ((/* implicit */unsigned long long int) -8520475410406631123LL);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_5);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [9LL] [1U] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned short)3] [i_2])) ? (1189695210294289624ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_0])))))) ? (((/* implicit */long long int) 2650906194U)) : (8681187389852196942LL)));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_0] [(short)1] [2LL] [9U] = ((/* implicit */_Bool) (short)(-32767 - 1));
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (-(9192706950953632496ULL))))));
                            var_14 ^= ((/* implicit */int) ((arr_7 [i_0] [(unsigned short)2] [i_2] [(unsigned short)3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3)))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) arr_15 [i_0] [i_1] [i_1]);
                            var_16 &= ((/* implicit */unsigned short) ((((-6199966657319281234LL) + (9223372036854775807LL))) << (((arr_5 [i_2] [i_1] [8ULL]) - (2269793162U)))));
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((arr_16 [i_6] [i_7]) - (((/* implicit */unsigned long long int) ((arr_18 [i_7]) ^ (arr_18 [i_7])))))))));
            var_18 = ((/* implicit */long long int) ((unsigned char) ((int) arr_18 [i_7])));
            /* LoopNest 2 */
            for (signed char i_8 = 1; i_8 < 15; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    {
                        var_19 = ((((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_8 - 1] [i_8 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_17 [i_6])));
                        var_20 = ((/* implicit */unsigned long long int) arr_22 [i_8 + 1] [i_8 + 1] [i_8 - 1]);
                        arr_26 [i_6] [i_6] [i_7] [i_8 - 1] [i_9] [i_6] = arr_18 [i_9];
                        arr_27 [i_6] [i_7] [(unsigned char)4] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 9192706950953632496ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_6] [i_6] [i_6]))) : (9192706950953632496ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8 + 1] [i_8 + 1] [i_8 + 1])))));
                        arr_28 [i_6] [(short)4] [i_6] [i_8] = arr_25 [i_8 - 1] [i_6] [i_6] [i_8 + 1];
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) ((int) arr_24 [i_7] [i_7] [i_7] [i_7] [i_6] [i_6]));
        }
        var_22 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_16 [i_6] [7ULL])))) && (((/* implicit */_Bool) min((arr_18 [i_6]), (arr_18 [i_6])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_17 [i_6])))) : (((((/* implicit */_Bool) arr_24 [i_6] [(unsigned char)2] [i_6] [i_6] [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_16 [i_6] [i_6])) ? (arr_19 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_6] [i_6]))))))))));
    }
}
