/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215553
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) (+(((unsigned long long int) (short)-25220))));
        var_14 = ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_2 [i_0 - 1] [i_0])))), (((((/* implicit */int) arr_0 [i_3])) | (((/* implicit */int) (signed char)113)))))))));
                                arr_16 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */signed char) var_6);
                                arr_17 [i_0] [i_0] [i_4] = ((unsigned long long int) var_4);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1])))));
                    arr_18 [i_0] [i_1] = ((/* implicit */short) (~(max((((/* implicit */int) var_11)), (arr_14 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0])))));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 3) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-25222)) ? (2147483647) : (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (arr_19 [i_5])))) > (((arr_21 [i_5]) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) arr_20 [i_5])))))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_9)))) / ((+(1425517265)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)25222))))) ? (((/* implicit */int) (!((_Bool)0)))) : ((-(((/* implicit */int) arr_21 [i_5])))))) : (((((/* implicit */_Bool) arr_20 [i_5 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) arr_21 [i_5])) >= (((/* implicit */int) arr_19 [i_5])))))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6])) ? (var_1) : (((/* implicit */int) arr_21 [i_6 - 2]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_2))))) : (var_6)));
        arr_25 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_19 [i_6]))))) ? (arr_24 [i_6]) : (((((/* implicit */_Bool) (unsigned char)185)) ? (var_6) : (arr_24 [i_6])))));
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(var_0))))))) - (((unsigned long long int) (unsigned char)220))));
}
