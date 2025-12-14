/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44003
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_11 = ((signed char) (unsigned char)49);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            var_12 ^= ((/* implicit */unsigned int) var_3);
            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */unsigned int) arr_1 [i_1 - 1] [i_1 - 1])) : (arr_2 [i_0]))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) (short)-14038);
            /* LoopNest 2 */
            for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
            {
                for (unsigned int i_4 = 3; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_14 = ((/* implicit */short) arr_11 [i_0] [i_2]);
                        arr_13 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)16384)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (short)510))))));
                        var_15 = ((/* implicit */_Bool) arr_3 [i_2]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    {
                        var_16 = ((/* implicit */long long int) arr_16 [(signed char)5] [i_0]);
                        arr_20 [i_6] [i_5] [i_2] [i_2] [(short)2] = ((/* implicit */short) (+((-(((/* implicit */int) (short)-26893))))));
                        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((_Bool) (signed char)-13)))));
                            var_19 = ((/* implicit */unsigned short) ((unsigned long long int) arr_19 [i_2] [i_5] [i_6] [i_7]));
                        }
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            arr_25 [i_0] [11] [i_5] [i_6] [i_8] = ((/* implicit */short) arr_19 [(short)7] [i_2] [i_2] [i_6]);
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_2] [(short)2] [i_6]))));
                            arr_26 [i_0] [i_0] [i_5] [i_6] [i_8] |= ((/* implicit */_Bool) arr_10 [i_5] [i_6] [i_8]);
                        }
                        for (unsigned int i_9 = 2; i_9 < 14; i_9 += 2) 
                        {
                            var_21 += ((/* implicit */int) var_2);
                            var_22 = ((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) arr_24 [i_9 - 1] [i_9] [i_9 - 2] [(unsigned short)9] [i_9 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [3U] = ((/* implicit */_Bool) -2147483636);
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */int) arr_15 [i_0]);
        }
    }
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (signed char)106))));
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) 3944974188U))));
}
