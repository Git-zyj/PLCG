/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28786
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (short)-3650))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) (short)0);
            arr_6 [1LL] [i_1] [i_0] &= ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]);
            arr_7 [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned short) ((unsigned long long int) (short)-11710));
            arr_8 [(signed char)3] [i_0 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 3] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1 + 1]))))) || (((/* implicit */_Bool) var_16))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2]))));
            arr_13 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) arr_10 [i_2] [i_2] [i_2]);
            arr_14 [i_2] = ((/* implicit */long long int) arr_5 [i_2] [i_2] [i_0 + 1]);
        }
        /* LoopSeq 2 */
        for (long long int i_3 = 3; i_3 < 21; i_3 += 3) 
        {
            var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [21ULL] [i_0 + 2]))) : (var_3))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-78)))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? ((+(((/* implicit */int) arr_16 [i_0] [i_3] [i_3])))) : (((((/* implicit */_Bool) 468332277)) ? (((/* implicit */int) var_9)) : (arr_1 [i_0])))));
        }
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 3; i_5 < 23; i_5 += 1) 
            {
                arr_23 [i_4] [i_0 - 1] [i_4] [i_0 - 1] = ((/* implicit */int) arr_15 [(_Bool)1]);
                var_23 = ((/* implicit */signed char) arr_19 [i_0] [22]);
                var_24 = ((/* implicit */short) arr_19 [i_0] [i_5]);
            }
            arr_24 [i_4] = var_1;
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0)))))));
        }
        var_26 = ((/* implicit */unsigned short) (+(((unsigned long long int) (short)0))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        arr_27 [i_6] = ((/* implicit */unsigned char) (signed char)-109);
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_0 [i_6] [(short)8]);
    }
    var_27 = ((/* implicit */unsigned short) var_2);
    var_28 = ((/* implicit */unsigned short) ((_Bool) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_3)) : (13636664673452787367ULL))))));
}
