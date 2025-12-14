/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198254
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
    var_14 = ((/* implicit */_Bool) var_6);
    var_15 = ((/* implicit */int) ((long long int) var_13));
    var_16 = ((/* implicit */unsigned char) max((var_4), (((/* implicit */long long int) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) (short)112)) == (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_17 += ((/* implicit */_Bool) 4294967292U);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_0]))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_0 [i_0] [10U]);
            arr_7 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(signed char)2] [i_0] [i_1])) ? (((/* implicit */long long int) arr_4 [i_1] [i_1] [0U])) : (arr_5 [i_0]))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4])) && (((/* implicit */_Bool) (unsigned char)99)))))));
                            var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)99)))) ? (((/* implicit */int) (unsigned short)33856)) : (((/* implicit */int) (unsigned short)65535))));
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2] [i_3]))));
                            arr_16 [(short)0] [(short)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_3])) ? (var_13) : (((/* implicit */int) var_1))));
                        }
                        for (short i_5 = 1; i_5 < 11; i_5 += 2) 
                        {
                            arr_19 [9LL] [i_1] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-17))));
                            var_22 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) -929943506))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_11 [i_2] [i_3]);
                            var_23 = ((((/* implicit */int) arr_15 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5])) - (((/* implicit */int) arr_15 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1] [(_Bool)1] [5U])));
                        }
                        var_24 = ((/* implicit */long long int) arr_17 [(_Bool)1] [i_1] [i_2]);
                    }
                } 
            } 
        }
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            arr_24 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [0LL] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_0] [i_6] [i_6]))));
            arr_25 [i_0] [i_0] = ((/* implicit */signed char) ((arr_13 [i_6] [i_6] [i_6] [i_0]) ? (((/* implicit */unsigned int) var_5)) : (arr_14 [i_0] [(_Bool)1] [i_0] [3U] [i_0] [i_0])));
        }
    }
}
