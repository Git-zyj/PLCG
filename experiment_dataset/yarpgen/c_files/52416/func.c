/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52416
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [(unsigned char)5] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))), (min((0U), (((/* implicit */unsigned int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0]);
                            arr_12 [i_3] [i_1] [i_1] [(unsigned char)16] = ((/* implicit */long long int) max((((signed char) (signed char)112)), (((/* implicit */signed char) var_8))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_10 = ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (unsigned short)65522)));
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (_Bool)1))));
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [9])) - (((/* implicit */int) (unsigned short)14))));
                    arr_17 [i_1] [i_1] &= ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 + 3])) ? (((/* implicit */int) (unsigned short)0)) : (arr_7 [i_1 + 3] [i_5] [i_5] [i_1 + 3]));
                    arr_18 [i_1] [i_1] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 33554431U)))) * (arr_8 [i_1] [13])));
                }
                arr_19 [(signed char)9] [(signed char)9] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) ((short) (unsigned char)10))) ? (((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) (unsigned char)255)) - (255))))) : (((/* implicit */int) (unsigned short)16)))) : (133693440)));
            }
        } 
    } 
    var_14 &= ((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned long long int) 2047U)), (0ULL))));
}
