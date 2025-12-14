/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219911
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((unsigned int) min((var_0), (((/* implicit */long long int) arr_0 [i_0])))));
                var_12 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1]);
                arr_5 [i_0 + 1] [i_1 + 1] = ((/* implicit */short) (~((~(((/* implicit */int) arr_2 [i_1]))))));
                arr_6 [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 2]))) != (max((((/* implicit */long long int) ((signed char) var_8))), (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
                var_13 = ((/* implicit */short) max(((-(((/* implicit */int) arr_1 [i_1 + 1] [i_0 - 2])))), (((((/* implicit */int) arr_0 [i_0 + 2])) | (((/* implicit */int) arr_0 [i_0 + 1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) | (var_7))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) arr_16 [i_2 + 3] [(short)1] [i_3]);
                        arr_19 [5] [5] [i_4] [i_3] = ((/* implicit */signed char) (_Bool)1);
                        var_16 = ((/* implicit */_Bool) (unsigned short)60471);
                        arr_20 [i_5] [i_3] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_3 + 2] [11ULL] [i_3 + 3] [i_3] [i_3 + 2])) >= (((/* implicit */int) arr_17 [5ULL] [i_3] [(_Bool)1] [i_5 + 1] [i_5 + 1]))));
                    }
                    for (unsigned short i_6 = 3; i_6 < 18; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) (+(var_7)));
                        arr_23 [i_3] = ((/* implicit */unsigned short) arr_10 [i_2 + 2]);
                        var_18 = ((/* implicit */_Bool) arr_11 [i_3]);
                    }
                    var_19 = ((/* implicit */int) var_0);
                }
            } 
        } 
    } 
}
