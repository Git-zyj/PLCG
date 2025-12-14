/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232906
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
    var_13 = ((/* implicit */unsigned short) ((_Bool) var_0));
    var_14 = var_0;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) ((signed char) max((15872), (((/* implicit */int) arr_3 [i_0 + 1] [i_0])))))) ? ((+(((/* implicit */int) (unsigned short)1024)))) : (((/* implicit */int) max((arr_0 [14] [i_0 + 2]), (arr_0 [i_0] [i_0 + 1])))));
        arr_5 [i_0] = ((/* implicit */signed char) arr_1 [i_0 - 1] [i_0 - 1]);
        var_15 = ((/* implicit */short) max((((/* implicit */unsigned short) ((_Bool) (unsigned short)65504))), (arr_2 [i_0 + 3])));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            arr_9 [i_1] [i_0] [i_0] = ((/* implicit */long long int) min((arr_1 [i_0 + 4] [i_1 - 2]), (((/* implicit */int) ((unsigned char) arr_1 [i_0 - 1] [i_1 + 4])))));
            arr_10 [i_0 - 2] = ((/* implicit */int) var_8);
            arr_11 [i_0] = ((/* implicit */unsigned long long int) ((short) max((var_9), (((/* implicit */unsigned short) arr_0 [i_0 + 3] [i_0 - 2])))));
            var_16 |= ((/* implicit */short) min((((/* implicit */int) ((unsigned short) min((-15869), (((/* implicit */int) arr_6 [i_0])))))), (((((/* implicit */_Bool) ((unsigned char) arr_7 [i_1 + 4] [i_0]))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0 + 2])))) : (((/* implicit */int) arr_0 [i_0] [(unsigned short)5]))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 14; i_2 += 3) /* same iter space */
        {
            var_17 += arr_2 [i_0 + 4];
            var_18 |= ((/* implicit */short) arr_0 [i_0 + 3] [i_2 + 2]);
        }
        for (int i_3 = 1; i_3 < 14; i_3 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned long long int) var_3)))));
            var_20 = ((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0 + 3]);
            arr_16 [i_3] = ((/* implicit */_Bool) arr_3 [i_0] [i_3 + 2]);
            var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)12] [i_3])) ? (((/* implicit */int) arr_0 [i_0 + 3] [i_3 + 1])) : (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_0)))))));
            arr_17 [i_3] [i_0] = ((/* implicit */signed char) min((max((arr_12 [i_0 + 3] [i_3]), (((/* implicit */int) var_1)))), (arr_12 [i_0 + 3] [i_3])));
        }
        arr_18 [i_0] |= ((/* implicit */short) arr_14 [i_0] [i_0 - 1] [i_0 - 1]);
    }
    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) arr_1 [i_4 + 1] [i_4 - 1])), (var_3)))));
        /* LoopNest 3 */
        for (unsigned short i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_23 = ((/* implicit */int) min((var_8), (arr_0 [i_5] [i_5])));
                        var_24 = ((/* implicit */int) var_12);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 2) 
        {
            arr_34 [i_8] [i_8] [i_4] = ((/* implicit */long long int) arr_32 [i_4]);
            arr_35 [8] |= ((/* implicit */int) arr_31 [(short)14]);
        }
    }
    var_25 = ((/* implicit */_Bool) (-(var_10)));
}
