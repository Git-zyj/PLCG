/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33112
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)0)), ((unsigned short)61962))))));
                var_12 &= arr_1 [i_1] [i_1];
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) var_3)))));
        var_13 -= ((/* implicit */short) ((unsigned char) (~(var_3))));
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (short i_5 = 2; i_5 < 24; i_5 += 1) 
            {
                for (unsigned int i_6 = 3; i_6 < 22; i_6 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            arr_22 [i_3] [i_3 - 1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) (short)31527))))) : (((/* implicit */int) ((arr_13 [(short)23] [i_4] [(short)23] [i_7]) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                            var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)0)) > (((/* implicit */int) arr_11 [i_4] [i_6] [i_7]))))) ^ (((/* implicit */int) var_8))));
                        }
                        for (short i_8 = 1; i_8 < 24; i_8 += 2) 
                        {
                            var_15 = ((/* implicit */short) ((long long int) ((_Bool) (short)0)));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((/* implicit */int) (short)-1)))))));
                            arr_27 [i_3 - 1] [i_4] [i_6] [i_5] [i_5] [i_6] [i_8 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_5] [i_5 + 1] [i_4] [i_3] [i_3])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)162)) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_6))));
                            var_17 = ((_Bool) ((((/* implicit */int) arr_5 [i_3 - 1] [i_6 + 3])) >= (((/* implicit */int) (short)19))));
                        }
                        arr_28 [i_6 - 1] [i_6] [i_6] [i_3] = ((/* implicit */unsigned short) ((_Bool) arr_25 [i_6] [i_6] [i_6] [i_6 - 3] [i_6 + 2]));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_3 - 1] [16ULL] [(unsigned short)18] [16ULL] [i_3 - 1])) ? (((/* implicit */int) (short)-31528)) : (((/* implicit */int) arr_24 [i_3 - 1] [i_3 - 1] [i_3] [(unsigned short)18] [i_3 - 1]))))))))));
    }
}
