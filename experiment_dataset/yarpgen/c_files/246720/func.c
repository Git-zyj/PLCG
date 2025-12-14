/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246720
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_10 *= ((/* implicit */signed char) (((((~(((/* implicit */int) var_8)))) / (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) arr_1 [i_2])))))) % (var_6)));
                    arr_8 [(_Bool)1] [i_0] [i_2] = ((max((((/* implicit */long long int) var_3)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0]))))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) max(((((!((_Bool)1))) ? (((var_6) % (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 7; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 4) 
                        {
                            var_11 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((long long int) (unsigned short)1751))))) ? (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_1)) : (arr_18 [i_3] [i_4] [(short)8] [i_3]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) (unsigned char)115))))) ? (1852777789) : ((~(1852777789)))))));
                            arr_22 [5] [i_7] [3] [i_7 - 1] [i_4] [i_4] = ((/* implicit */unsigned char) var_8);
                            var_12 = ((/* implicit */short) (((~(arr_17 [i_4 + 2] [i_3] [i_7 - 1] [i_6]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (arr_17 [i_4 + 3] [i_4] [i_7 - 2] [i_4 + 3])))));
                            arr_23 [i_4] [i_4] = ((/* implicit */long long int) arr_14 [i_4] [i_4]);
                        }
                        var_13 = ((/* implicit */int) ((unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [(unsigned char)15]))) != (var_9))) ? (((((/* implicit */_Bool) var_9)) ? (6291885589122376155LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3]))))) : (((/* implicit */long long int) arr_14 [i_4] [i_4 - 1])))));
                        arr_24 [i_3] [i_3] [i_4] [i_6] = ((/* implicit */short) (unsigned char)229);
                        var_14 = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) arr_1 [i_4])))))), (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))) : (var_5))), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (signed char i_9 = 1; i_9 < 9; i_9 += 4) 
                        {
                            {
                                var_15 *= ((/* implicit */short) min((((/* implicit */int) (signed char)57)), (var_3)));
                                arr_30 [i_3] [i_4] = ((/* implicit */unsigned char) ((((long long int) ((4207610800411918836LL) / (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9] [i_9] [i_5] [i_8] [i_9 + 1])))))) / (((/* implicit */long long int) min((((((/* implicit */_Bool) -577864756)) ? (var_6) : (((/* implicit */int) (short)12425)))), (((/* implicit */int) ((unsigned char) arr_27 [i_3] [i_3] [i_5] [i_8] [i_9]))))))));
                                arr_31 [i_3] [i_3] [(_Bool)1] [1] [3LL] [i_4] = ((/* implicit */long long int) min((((/* implicit */short) (_Bool)0)), ((short)-2395)));
                                var_16 = var_5;
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_32 [i_3] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_4 [i_3] [8U] [i_3] [(signed char)9])) ? (arr_4 [i_3] [13LL] [6] [i_3]) : (arr_4 [i_3] [i_3] [i_3] [i_3])))));
        var_17 = ((/* implicit */signed char) ((short) (_Bool)1));
        var_18 = ((/* implicit */signed char) (~((~(((unsigned long long int) var_9))))));
    }
}
