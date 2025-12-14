/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243386
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_0 [(_Bool)1]))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) var_2))))) ? (max((arr_0 [i_0]), (max((arr_0 [i_0]), (((/* implicit */int) var_10)))))) : ((-(arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */short) ((max((((/* implicit */int) min(((unsigned short)16), ((unsigned short)35942)))), (((arr_0 [i_0]) + (((/* implicit */int) (unsigned short)35942)))))) | (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)0))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-120)) / (2147483647)));
        var_21 = ((/* implicit */unsigned long long int) ((_Bool) arr_3 [(short)14]));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (arr_7 [i_2] [i_5])))) <= (((/* implicit */int) arr_14 [i_2] [i_5] [i_5] [i_5]))));
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_21 [i_6] [i_5 - 1] [i_6] [i_3 + 1] [(short)22] = ((/* implicit */int) arr_18 [i_2] [i_3 - 1] [i_6] [i_6] [(unsigned char)7]);
                            var_23 = ((/* implicit */unsigned short) arr_20 [i_6] [i_6] [(short)23] [i_6] [i_2]);
                            arr_22 [i_6] [i_3 - 1] [i_6] [i_5] [i_6] = ((/* implicit */unsigned short) arr_16 [(unsigned short)6] [(unsigned short)6] [i_4] [i_4]);
                            arr_23 [i_6] [i_6] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_20 [i_2] [i_4] [i_2] [i_6] [i_4]))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_19 [i_6])) ^ (((arr_9 [i_4] [i_2] [i_2]) << (((((/* implicit */int) (signed char)-1)) + (25)))))));
                        }
                        for (short i_7 = 1; i_7 < 23; i_7 += 2) 
                        {
                            arr_26 [i_5] [i_4] [i_4] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */short) ((arr_11 [i_2] [i_4] [i_4]) && (arr_11 [i_2] [i_4] [(unsigned short)7])));
                            var_25 = ((/* implicit */short) ((_Bool) arr_11 [i_3 + 1] [i_5 - 1] [i_7 + 1]));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [(signed char)23] [i_8] [i_3] [i_8] [i_5 - 1] = ((/* implicit */short) (unsigned short)35922);
                            arr_30 [i_2] [i_8] [i_4] [i_5 - 1] [i_8] = ((((/* implicit */_Bool) ((short) arr_12 [i_8] [i_4] [i_3] [(short)1]))) && (((/* implicit */_Bool) (short)-1)));
                            var_26 = arr_7 [i_3 + 2] [i_3 - 1];
                        }
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_16)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [16]))))) : (((/* implicit */int) arr_25 [i_5] [i_9] [i_9] [i_5 - 1] [i_5]))));
                            var_28 = ((/* implicit */int) ((short) arr_8 [i_3 - 1] [i_5 - 1]));
                            arr_35 [i_5 - 1] [i_3 + 1] [22ULL] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */int) var_14)) << (((((/* implicit */int) var_6)) - (25535))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11039)))))));
                        }
                        var_29 = ((unsigned short) arr_10 [i_5 - 1] [i_3 + 2]);
                    }
                } 
            } 
        } 
        var_30 = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
        arr_36 [i_2] = (((((_Bool)1) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_14)))) <= (((/* implicit */int) arr_27 [(short)0] [(short)0] [i_2] [(_Bool)1] [i_2])));
    }
}
