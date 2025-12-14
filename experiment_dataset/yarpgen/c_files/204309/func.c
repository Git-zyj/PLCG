/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204309
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [(_Bool)1] &= ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
                            arr_14 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    var_13 = ((/* implicit */unsigned char) ((arr_11 [i_1] [i_1] [i_1] [i_0]) << (((((/* implicit */int) var_1)) - (57256)))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        arr_23 [(short)8] [i_4] [i_5] [i_1] [6] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned char) arr_19 [4U] [4U] [4U])))));
                        var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_4] [i_5 + 1] [i_5 + 1] [i_5]))));
                        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_4])) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_17 [i_0] [i_1])) : (((/* implicit */int) var_7))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            {
                                arr_31 [i_6] [i_6] [i_1] [i_4] [(unsigned short)12] [i_6] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) < (arr_12 [i_6] [(unsigned char)18] [i_6] [i_6] [i_7] [i_7])));
                                var_16 = ((/* implicit */long long int) var_7);
                                var_17 = ((/* implicit */long long int) ((unsigned int) arr_30 [i_4] [i_4] [i_4] [i_4] [8]));
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((arr_20 [i_6] [i_1]) ? (((/* implicit */int) arr_20 [i_0] [i_7])) : (((/* implicit */int) arr_20 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_4);
}
