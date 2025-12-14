/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196296
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_12 [(short)12] = max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-2147483647 - 1))), (2316854596U)))) ? (((/* implicit */unsigned long long int) ((arr_11 [i_4] [(short)8] [i_2 + 1] [(short)8] [i_0]) % (1978112682U)))) : (arr_3 [i_1 + 2] [i_4]))), (min((((/* implicit */unsigned long long int) 2316854614U)), (arr_5 [(unsigned short)12] [i_1 - 1] [i_2 + 1] [i_3 - 1]))));
                                arr_13 [i_1] [i_1] [i_2 - 1] [i_2] [i_2] [i_2 - 4] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_10)))) + (2147483647))) << (((min((arr_5 [3LL] [7LL] [(unsigned char)1] [3ULL]), (((/* implicit */unsigned long long int) 1978112676U)))) - (1978112676ULL)))))), (min((1978112694U), ((~(1978112700U)))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [(short)6] [i_2] = ((/* implicit */unsigned long long int) (-(7)));
                    arr_15 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1 + 2])) ? ((~((~(((/* implicit */int) (_Bool)1)))))) : (var_9)));
                    arr_16 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2316854606U)))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        arr_20 [i_5] |= ((/* implicit */unsigned short) var_3);
                        arr_21 [i_5] [i_1 + 1] [4ULL] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_1)) ? (var_2) : (var_2)))));
                        arr_22 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_1 + 1] [i_2 - 1] [i_5])) + (2147483647))) >> ((((+(13636894936081638421ULL))) - (13636894936081638406ULL)))))) >= (arr_11 [i_0] [i_1] [i_2] [i_1] [i_0])));
                    }
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) (+((-(max((2316854587U), (((/* implicit */unsigned int) var_6))))))));
}
