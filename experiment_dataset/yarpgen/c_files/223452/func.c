/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223452
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
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) (unsigned short)41988);
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [(unsigned short)2])) | (max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_16 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_4] [i_5] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (4080ULL)))) ? (((((/* implicit */_Bool) 1602022336U)) ? (-1212923200014208142LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23563))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -1212923200014208142LL))))))) ? (((((/* implicit */_Bool) ((1212923200014208142LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62488)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_13))))) : (-6323268225803935391LL))) : (((/* implicit */long long int) arr_6 [i_2] [i_2]))));
                                arr_17 [i_2] [i_5] [i_4] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -7180889053223249628LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)3062))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)9275)) << (((((/* implicit */int) arr_9 [i_3 + 2] [i_3 - 2])) - (26135)))))) : (arr_11 [i_2 - 2] [i_3] [i_2 - 2] [i_2 - 2])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */unsigned long long int) 1212923200014208141LL)) : (4921172334286113048ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_15 [i_8] [i_3 + 2] [i_3 + 2] [i_2 + 2] [i_2 + 1])))) : (arr_14 [i_3] [i_3] [(short)20])));
                                var_17 ^= ((/* implicit */signed char) max((((/* implicit */int) (short)21737)), (-1972589966)));
                                arr_24 [i_2] [i_3] [i_2] [i_7] [i_8] [i_2] = ((/* implicit */unsigned short) (~(arr_18 [i_8] [i_8] [i_8] [i_8])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = var_10;
}
