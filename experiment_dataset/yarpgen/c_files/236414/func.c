/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236414
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 *= ((/* implicit */short) arr_1 [i_0] [(signed char)14]);
        arr_3 [(short)12] [(short)12] = ((/* implicit */short) arr_2 [(_Bool)1]);
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_6))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_21 += ((/* implicit */int) arr_10 [i_2] [(_Bool)1] [(short)2] [(_Bool)1] [i_2]);
                        arr_12 [i_0] [i_0] [i_1] = (~(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_5 [i_0])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) var_15)) : (-20443920))) << (((((arr_18 [i_5] [i_6]) ? (((/* implicit */int) (_Bool)1)) : (var_7))) - (114431372)))))) < (((max((var_11), (((/* implicit */long long int) arr_15 [i_4] [(unsigned short)0] [11LL])))) / (((/* implicit */long long int) arr_14 [i_4] [i_4]))))));
                    var_23 = ((/* implicit */int) arr_17 [(unsigned short)2] [(unsigned short)14] [(short)4]);
                }
            } 
        } 
        var_24 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15662))))) * (((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_18 [i_4] [13ULL])))))))), (((var_3) & (((/* implicit */unsigned int) var_6))))));
    }
    var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) var_15)))) : (((var_6) << (((var_5) - (218109410)))))))) & (var_1)));
}
