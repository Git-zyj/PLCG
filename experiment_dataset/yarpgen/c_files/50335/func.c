/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50335
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_10 |= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (max((((/* implicit */int) var_7)), (((arr_1 [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) ? (var_4) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        var_11 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (unsigned short i_4 = 2; i_4 < 7; i_4 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_4 - 2] [i_4] [i_4 + 3] [i_4] [i_4] [i_4 - 2]) : (arr_10 [i_4 - 1] [i_4] [i_4 - 2] [i_4] [i_4] [(unsigned char)0]))))));
                        var_13 = ((((-2984174403123033759LL) + (9223372036854775807LL))) >> (((4252734214584120430LL) - (4252734214584120430LL))));
                        var_14 = ((/* implicit */unsigned short) var_2);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
                        {
                            var_15 |= ((/* implicit */_Bool) var_1);
                            arr_16 [i_1] = ((/* implicit */_Bool) (short)(-32767 - 1));
                            var_16 = ((/* implicit */unsigned char) var_5);
                            arr_17 [i_2] [i_2] [i_3] [i_1] [i_5 + 1] = (!(((/* implicit */_Bool) arr_11 [i_5 - 1] [i_3] [i_4 + 3] [i_1])));
                            arr_18 [i_1] [i_1] [i_3] [i_1] [(signed char)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [i_1] [i_2] [i_3] [i_4 + 3] [i_5 - 1] [i_4])) : (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_1]))))) : (((16728195273776665396ULL) ^ (((/* implicit */unsigned long long int) 4252734214584120430LL))))));
                        }
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_7 [i_1]))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 1) 
    {
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) arr_22 [i_6 + 3] [i_6])) : (((/* implicit */int) (signed char)62)))))));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) (signed char)-7))));
                        var_20 ^= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) | (2505096307U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9] [i_6 + 1] [i_8])))));
                    }
                } 
            } 
        } 
        arr_31 [i_6] = ((/* implicit */_Bool) 0);
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned short) (_Bool)0)))));
        arr_35 [i_10] = ((((/* implicit */int) arr_27 [i_10])) ^ (((/* implicit */int) arr_27 [i_10])));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)147)) : (((((/* implicit */_Bool) arr_0 [i_10])) ? (67108800) : (var_5)))));
    }
    var_23 = ((/* implicit */long long int) var_7);
}
