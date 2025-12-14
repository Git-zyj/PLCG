/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54223
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-13996)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_13)));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) var_3)) : (var_13)));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+((~(var_15))))))));
            }
            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_1]);
            arr_10 [i_0] [i_1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (120751556) : ((-2147483647 - 1))));
        }
        arr_11 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 0ULL)))) & (((long long int) 8881157132673172079ULL))));
        var_20 = ((/* implicit */long long int) ((unsigned char) (-((-(var_6))))));
        arr_12 [i_0] = (~(((arr_6 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_3 = 4; i_3 < 9; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    arr_22 [i_3] [i_4 + 1] [2LL] &= min((((unsigned int) (!(((/* implicit */_Bool) var_2))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)-23184)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_2 [i_3] [i_3])))), (min((2147483647), (2147483647)))))));
                    arr_23 [i_3] = max((((/* implicit */unsigned long long int) min(((short)18), (((/* implicit */short) arr_4 [i_4 - 1] [i_5]))))), ((~(((unsigned long long int) arr_13 [i_4 - 1] [i_4 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 4; i_6 < 10; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((var_5) ? (1080641159) : (((/* implicit */int) (short)0))))) ? ((-(-2147483647))) : (((((/* implicit */int) var_10)) | (((/* implicit */int) (unsigned short)27372))))))));
                                var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(-9005043592163196635LL)))) ? ((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [18U]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)124), (((/* implicit */unsigned char) var_5))))))))));
                                arr_29 [i_3] [i_4] [i_5] [i_3] [i_5] = ((/* implicit */long long int) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
