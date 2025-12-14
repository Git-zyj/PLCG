/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42027
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_11 += ((/* implicit */signed char) ((unsigned int) var_1));
                            arr_9 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)63556)), (min((((/* implicit */unsigned int) arr_3 [i_0] [i_3])), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_8 [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_0] [i_2])))))))));
                            arr_10 [i_1 - 2] [i_0] [i_1 - 2] = ((/* implicit */unsigned int) arr_1 [i_0]);
                            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)-18087)) : (((/* implicit */int) (unsigned short)5))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned char) min((min((arr_1 [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_0])))), (((/* implicit */long long int) ((arr_8 [i_1]) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [(unsigned char)18]))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? ((~(2147483647))) : (((/* implicit */int) (short)24576))));
    var_14 = ((/* implicit */short) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_7))));
    var_15 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
    {
        for (int i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    var_16 = ((/* implicit */_Bool) (~(arr_17 [11U] [i_5] [(unsigned short)3])));
                    var_17 ^= ((/* implicit */unsigned int) 9102196836777580223ULL);
                }
                var_18 = ((/* implicit */long long int) arr_16 [i_4] [i_5]);
            }
        } 
    } 
}
