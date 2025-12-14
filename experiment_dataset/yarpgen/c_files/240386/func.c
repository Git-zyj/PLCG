/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240386
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    var_13 = ((/* implicit */signed char) ((0U) >> (0U)));
                    var_14 += ((/* implicit */unsigned char) var_12);
                    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) + (((((/* implicit */_Bool) ((unsigned short) 4294967295U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)107))) / (-7570631155845917354LL)))) : ((~(18446744073709551605ULL)))))));
                }
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_16 *= ((/* implicit */_Bool) (+((~(((/* implicit */int) (short)-27159))))));
                            /* LoopSeq 1 */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) (_Bool)0))))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((+(((((/* implicit */int) arr_12 [i_0] [(short)10] [(short)10])) << (((((/* implicit */int) arr_4 [i_5] [i_4] [i_0])) - (39394))))))))))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 - 4] [i_1 + 1] [(signed char)6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_1 - 3] [i_1 - 2] [i_1 + 1]))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 3] [(signed char)8])))))));
                                var_19 *= ((/* implicit */_Bool) var_4);
                                var_20 = (((!(((/* implicit */_Bool) arr_9 [i_5])))) ? (((((/* implicit */_Bool) (+(2147483647)))) ? (((/* implicit */int) arr_11 [i_5] [i_1 - 3] [(unsigned char)1] [i_1] [i_5])) : (((/* implicit */int) arr_11 [i_5] [i_1] [6LL] [i_1 - 2] [i_5])))) : (((/* implicit */int) arr_12 [i_3] [i_4] [0])));
                            }
                        }
                    } 
                } 
                arr_14 [(signed char)3] [(signed char)3] [(unsigned short)1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2921141849U)) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58182)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13))) : (arr_13 [i_0] [i_1] [i_0] [i_1] [i_1 - 4] [i_0] [i_1 + 3])))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (signed char i_6 = 1; i_6 < 21; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((unsigned int) (((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_8] [i_8]))))) : (((((/* implicit */_Bool) arr_16 [i_6] [i_6])) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (short)25477)))))));
                    var_23 *= ((/* implicit */unsigned char) arr_18 [i_7]);
                    arr_22 [i_6] [i_6] [(_Bool)1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_20 [i_6 + 1] [i_6 + 1])))) ? (((-7570631155845917354LL) & (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6 - 1]))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65528)))))));
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6 + 1])) ? (((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_18 [i_6 - 1]))) : (((/* implicit */unsigned long long int) 2921141822U)))))));
                }
            } 
        } 
    } 
}
