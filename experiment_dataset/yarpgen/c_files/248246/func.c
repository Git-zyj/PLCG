/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248246
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_10 [(unsigned short)0] [i_3] [(unsigned short)0] [(short)8] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_0] [i_3]))));
                        arr_11 [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) 13U));
                        arr_12 [i_0] [i_3] = (!(((/* implicit */_Bool) (unsigned short)65176)));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_17 [i_3] [i_1] [i_2] [i_1] [(signed char)8] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))));
                            arr_18 [i_3] [i_1] = ((/* implicit */int) ((_Bool) 710922122));
                        }
                    }
                } 
            } 
        } 
        arr_19 [3U] = ((((/* implicit */_Bool) 927392400)) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0 + 1] [(unsigned short)7])));
        arr_20 [(unsigned char)9] = ((/* implicit */long long int) ((int) arr_7 [(_Bool)1] [4] [i_0 - 1] [i_0]));
        arr_21 [6ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_8))));
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        arr_24 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50201))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (663457026))) : (663457022)))) : (((unsigned int) -595914424))));
        arr_25 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3087506898845005199ULL)) ? (((/* implicit */long long int) 927392400)) : (318010988785723728LL)))) ? (((/* implicit */int) ((unsigned short) var_6))) : (595914405)))) : (((((/* implicit */_Bool) (short)7572)) ? (3087506898845005226ULL) : (((/* implicit */unsigned long long int) arr_23 [i_5] [i_5]))))));
    }
    /* vectorizable */
    for (long long int i_6 = 1; i_6 < 16; i_6 += 3) 
    {
        arr_28 [i_6] [i_6] = ((/* implicit */signed char) ((long long int) arr_26 [i_6 + 1] [i_6 - 1]));
        arr_29 [(unsigned short)3] [i_6] = ((/* implicit */_Bool) ((short) (unsigned short)465));
        arr_30 [1] [i_6] = ((/* implicit */long long int) ((short) (+(arr_27 [i_6]))));
        arr_31 [(unsigned char)15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -927392383)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_26 [i_6 + 2] [i_6 + 2]))));
        arr_32 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_27 [i_6 + 2]))));
    }
    var_10 &= ((/* implicit */short) (~(((/* implicit */int) var_3))));
}
