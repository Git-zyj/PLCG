/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243260
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
    var_16 = ((/* implicit */_Bool) ((long long int) max((var_11), (((/* implicit */unsigned short) (short)22862)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((unsigned short) arr_1 [i_2] [i_3 + 1]));
                        var_17 = ((/* implicit */short) var_6);
                        var_18 = ((/* implicit */int) var_8);
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (unsigned short)15891))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) >= (arr_5 [i_0] [i_1] [i_0]))))) : (((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
        }
        for (short i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)2)))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_4 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_4 + 2]))) : (arr_0 [i_0] [i_0])))));
            arr_12 [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))))) / (((arr_0 [i_4 + 1] [i_4 + 2]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)15871)))))))));
            var_21 = arr_8 [i_4 + 1] [i_0] [i_0];
        }
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (signed char)104))));
        var_23 ^= ((/* implicit */unsigned int) ((_Bool) ((int) var_5)));
        arr_13 [(short)17] = ((/* implicit */int) (-(3354694160U)));
    }
    var_24 = ((/* implicit */signed char) var_12);
}
