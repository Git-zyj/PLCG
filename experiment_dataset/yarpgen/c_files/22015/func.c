/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22015
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */int) var_11);
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(2147483647)));
            var_17 += (+(((/* implicit */int) arr_3 [i_0] [i_1])));
        }
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 -= ((/* implicit */unsigned char) (_Bool)1);
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_8 [i_0]))));
        }
        for (int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) arr_11 [i_3] [i_3] [i_0]);
            var_20 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65533))));
        }
        arr_15 [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [8LL] [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (short)23047))));
            arr_18 [(unsigned char)1] [(unsigned char)1] |= ((/* implicit */unsigned short) (unsigned char)255);
            arr_19 [i_0] = ((/* implicit */_Bool) ((int) (short)32739));
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        var_23 *= ((/* implicit */unsigned int) var_13);
    }
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        var_24 = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (short)32756)))));
        arr_24 [(_Bool)1] = ((/* implicit */int) min((arr_22 [i_6] [i_6]), (arr_22 [i_6] [(_Bool)1])));
        arr_25 [i_6] = ((/* implicit */unsigned char) arr_23 [i_6] [i_6]);
        arr_26 [i_6] |= ((/* implicit */unsigned char) (unsigned short)23961);
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((unsigned int) (short)32736)))));
    }
}
