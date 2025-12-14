/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197530
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
    var_12 = (+(-1999366519));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = (!(((/* implicit */_Bool) ((short) (unsigned short)62779))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_1] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(_Bool)1] [i_0])) / (((/* implicit */int) arr_12 [i_0] [18U] [i_0] [4] [i_4]))));
                            var_14 = (short)9361;
                            arr_16 [i_2] [i_4] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)46629))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((long long int) arr_0 [i_0]));
                            var_16 &= ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) (unsigned short)46642))));
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0]))));
                            var_18 = ((((/* implicit */int) arr_12 [i_0] [i_6] [i_0] [i_5] [i_6])) / (((/* implicit */int) var_0)));
                        }
                    } 
                } 
            }
        }
        var_19 = ((/* implicit */_Bool) arr_14 [i_0] [(unsigned short)14] [i_0] [i_0] [i_0]);
    }
}
