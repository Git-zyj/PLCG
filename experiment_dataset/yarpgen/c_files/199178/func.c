/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199178
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-17377)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((((/* implicit */int) arr_3 [i_0] [i_1])) * (((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned char) arr_2 [i_0]))))) ? (((/* implicit */int) (!(arr_5 [i_0] [i_1])))) : (((arr_5 [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) arr_3 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0])))))) : ((+(((/* implicit */int) arr_2 [i_0])))))))));
                var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_4 [i_1])) % (((/* implicit */int) arr_5 [i_1] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((arr_5 [(_Bool)1] [i_2]) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_2 - 2] [i_2 - 2]))))) / (((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (arr_6 [i_2 + 1] [i_2])))))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((+(arr_6 [(short)12] [(short)12]))), (((/* implicit */unsigned long long int) arr_9 [i_2])))))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_5 [(short)7] [(short)7]))));
        }
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_5 [i_4] [(short)1]))));
        var_22 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_3 [i_4] [i_4]))))));
        /* LoopNest 3 */
        for (short i_5 = 2; i_5 < 20; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_5 - 1])) | (((/* implicit */int) arr_14 [i_5 - 2]))));
                        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_4] [i_4] [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_4]))));
                        var_25 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_5 - 2]))));
                    }
                } 
            } 
        } 
    }
}
