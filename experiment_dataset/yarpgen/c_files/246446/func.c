/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246446
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_0 [i_0] [i_0])))) <= (((/* implicit */int) ((signed char) 631301058393640286ULL)))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 2) /* same iter space */
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (short)10779))) ? ((~(((/* implicit */int) arr_4 [i_0] [i_0])))) : (arr_7 [i_0])));
            var_14 ^= ((/* implicit */int) ((_Bool) var_9));
        }
        for (unsigned int i_2 = 4; i_2 < 19; i_2 += 2) /* same iter space */
        {
            var_15 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_2 - 1])) ^ (arr_6 [i_2] [i_2] [i_2 - 2])));
            arr_11 [i_0] [(unsigned short)8] = ((/* implicit */int) ((short) (_Bool)1));
            var_16 = ((/* implicit */_Bool) (~(arr_7 [i_2 - 2])));
            arr_12 [i_2] = ((/* implicit */signed char) ((short) arr_7 [i_2 - 3]));
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 22; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    arr_17 [i_4] [i_0] [i_0] [i_0] |= ((/* implicit */short) arr_9 [i_0] [(short)15]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_26 [i_0] [i_0] [(signed char)5] [i_3] [i_4] [(signed char)5] [i_6] = ((/* implicit */unsigned short) (+(arr_6 [i_3] [i_3 - 2] [i_3])));
                                var_17 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_3 - 3] [(unsigned short)0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned char) ((int) var_11));
    var_19 = ((/* implicit */int) (+(((((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) << (((var_7) - (2027426821U)))))));
}
