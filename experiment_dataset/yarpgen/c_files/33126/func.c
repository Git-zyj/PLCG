/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33126
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
    var_17 = ((((/* implicit */int) (unsigned char)213)) / (((/* implicit */int) var_14)));
    var_18 = ((/* implicit */int) (unsigned char)255);
    var_19 = ((/* implicit */short) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_4 [(unsigned char)3] [(unsigned char)3] = arr_1 [i_0] [i_0];
        /* LoopSeq 4 */
        for (int i_1 = 2; i_1 < 6; i_1 += 1) 
        {
            var_20 ^= ((/* implicit */short) ((((/* implicit */int) arr_3 [i_1 - 2])) != (((/* implicit */int) arr_3 [i_1 - 2]))));
            arr_8 [i_0] [(unsigned char)9] [(_Bool)1] = (-(((/* implicit */int) arr_3 [i_1])));
        }
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            arr_13 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)220)) != (((/* implicit */int) (unsigned char)11))));
            arr_14 [i_2] = ((/* implicit */unsigned short) ((arr_11 [i_0]) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11)))))));
        }
        for (unsigned int i_3 = 2; i_3 < 6; i_3 += 1) 
        {
            var_21 = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_3 + 4]))));
            var_22 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_15 [i_0]))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_19 [i_4] [i_4] = ((/* implicit */signed char) arr_9 [i_4] [i_4]);
            arr_20 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_17 [i_0] [i_0]))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(signed char)0] [(signed char)0]))))) != (((/* implicit */int) arr_0 [i_0]))));
            arr_21 [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_12 [i_4]))));
        }
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        arr_26 [i_5] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) (unsigned char)15)))) ^ ((~(((/* implicit */int) (short)21157)))))) | (((/* implicit */int) (unsigned char)211))));
        var_24 = ((/* implicit */int) (+(var_6)));
    }
    for (short i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
    {
        var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) ((short) (unsigned char)247)))))) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) arr_22 [i_6]))))));
        var_26 = ((/* implicit */signed char) ((int) arr_28 [i_6] [i_6]));
        arr_30 [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) & ((+(((/* implicit */int) arr_22 [i_6]))))));
    }
}
