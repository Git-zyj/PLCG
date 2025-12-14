/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25645
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
    var_19 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) ((arr_6 [i_2 - 3] [i_1 - 1] [i_0 + 2]) != (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                    arr_10 [i_0 + 1] |= ((/* implicit */long long int) ((arr_8 [i_1 + 2]) + (arr_8 [i_1 + 3])));
                    var_20 ^= ((/* implicit */long long int) arr_3 [i_2] [i_1 + 3]);
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) var_16)))))) : (arr_6 [i_0 + 2] [i_1 - 1] [i_2 - 2])));
                }
            } 
        } 
        arr_11 [i_0] = ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 2])) ? (arr_6 [i_0 + 2] [i_0 + 2] [i_0 - 2]) : (arr_6 [i_0] [i_0 + 2] [i_0]));
        arr_12 [i_0] = ((/* implicit */unsigned char) ((long long int) arr_6 [i_0] [i_0] [i_0 - 3]));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */long long int) var_11);
        var_22 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_3])) && (((/* implicit */_Bool) (short)-14999)))));
        /* LoopNest 3 */
        for (signed char i_4 = 3; i_4 < 15; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        arr_25 [i_3] [i_3] [i_4 + 1] [i_5] [i_6] [i_6] = ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1])));
                        arr_26 [i_3] [(unsigned short)1] [(unsigned short)1] = arr_7 [i_4 - 2] [i_4];
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_19 [i_3] [i_4 - 1] [i_5] [i_6]))));
                        arr_27 [i_3] [i_4 - 3] [i_4 - 3] [i_3] = ((/* implicit */short) ((arr_4 [i_4 - 2] [i_4 - 3]) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned int i_7 = 3; i_7 < 9; i_7 += 4) 
    {
        arr_32 [i_7 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_30 [i_7] [i_7 - 3]) - (arr_30 [i_7 - 3] [i_7])))) || (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_5))) / ((~(((/* implicit */int) var_14)))))))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 1; i_8 < 7; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + ((+(arr_4 [4ULL] [i_8 - 1])))));
                        arr_39 [i_7] [i_8 + 2] [i_8] [i_9] [9LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_8] [(short)1] [i_7 - 3] [i_8] [i_8 - 1])) ? (arr_37 [i_8] [i_7] [i_7 - 3] [i_8] [i_8 + 2]) : (arr_37 [i_8] [i_7] [i_7 + 1] [i_7] [i_8 - 1])))) ? (((arr_37 [i_8] [(short)8] [i_7 - 1] [i_7 - 1] [i_8 - 1]) + (-1LL))) : (((((/* implicit */_Bool) arr_37 [i_8] [i_8] [i_7 - 3] [(unsigned char)0] [i_8 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_37 [i_8] [i_8] [i_7 - 3] [i_7] [i_8 + 2])))));
                        var_25 ^= ((/* implicit */long long int) ((((-1551824596860659823LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))))) == (arr_13 [i_10])));
                        arr_40 [i_8] [i_9] &= ((/* implicit */signed char) arr_31 [i_10]);
                    }
                } 
            } 
        } 
        arr_41 [i_7] = ((/* implicit */unsigned int) ((((unsigned long long int) -1LL)) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_26 = ((/* implicit */unsigned short) var_14);
    }
    var_27 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) var_9)) % (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))));
}
