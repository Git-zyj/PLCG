/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43819
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((var_4) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))));
            var_12 = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 + 1]);
        }
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 8; i_2 += 1) 
    {
        for (unsigned short i_3 = 3; i_3 < 6; i_3 += 4) 
        {
            {
                arr_9 [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_3 [i_2 - 2] [i_3] [i_3 - 2])))) == (((/* implicit */int) (!(((((/* implicit */int) arr_6 [i_2])) == (((/* implicit */int) var_6)))))))));
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 7; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((((18446744073709551615ULL) >> (((((/* implicit */int) var_5)) - (57419))))) << ((((~(var_10))) - (6288913599787303045ULL))))) << (((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2] [i_4] [i_5])) << (((18446744073709551613ULL) - (18446744073709551607ULL)))))) ? (-1427977179) : (((/* implicit */int) arr_13 [(_Bool)1] [i_5] [(short)2] [i_2] [i_2] [(_Bool)1])))) + (1427977237))))))));
                            arr_16 [i_5] [i_5] [i_5] [i_5] [i_3] [i_5] = ((/* implicit */long long int) min((((/* implicit */short) arr_13 [i_3] [(unsigned short)3] [(unsigned short)3] [(unsigned short)3] [(unsigned short)3] [i_3])), (arr_5 [i_2] [i_5])));
                        }
                    } 
                } 
                arr_17 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 2])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_6 [i_2 - 1])))));
            }
        } 
    } 
}
