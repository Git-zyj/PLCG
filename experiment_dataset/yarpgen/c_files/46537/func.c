/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46537
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)3)))), (((/* implicit */int) var_0))))) && (var_7)));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) (unsigned short)27149)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25))) : (var_11)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_16 *= ((/* implicit */unsigned int) (~(arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)22392))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_11 [i_1] = ((/* implicit */signed char) ((var_0) ? (((/* implicit */unsigned long long int) 265212675)) : (arr_3 [1U] [i_0] [i_0])));
                        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_2 + 2] [i_2 + 4] [i_1]))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_6 [i_2] [i_2] [(short)14] [i_3])))) : (((/* implicit */int) ((signed char) var_12)))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        arr_14 [i_2 + 1] [i_4] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))));
                        arr_15 [i_0] [i_1] [i_2] [i_4] = (~(((/* implicit */int) var_0)));
                    }
                    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)32767)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 1] [(unsigned char)1] [i_2 - 1] [i_2 + 2]))) : (var_10)));
                        arr_20 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 3])) ? ((~(((/* implicit */int) (unsigned char)81)))) : (arr_2 [i_2] [i_0])));
                        var_20 += ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [(unsigned char)0]))) : (arr_4 [i_0] [i_0] [i_5] [i_5])));
                    }
                    arr_21 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -764560852)) != (10201465132388653411ULL)));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_2 + 3] [i_1] [i_2 + 3] [i_1])) != ((~(((/* implicit */int) var_8))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) var_9);
    }
}
