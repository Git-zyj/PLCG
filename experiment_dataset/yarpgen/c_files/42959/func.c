/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42959
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((int) ((arr_1 [i_0] [i_0]) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_1 + 1])) : (((/* implicit */int) arr_10 [i_1 - 1])))) != (((/* implicit */int) (!(((/* implicit */_Bool) max(((short)21217), ((short)32124))))))))))));
                        var_14 += (+(((4294967277U) - (((/* implicit */unsigned int) -320467505)))));
                        arr_13 [i_3] [i_1] [i_3] [18LL] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_1 + 3])) : (((/* implicit */int) var_11))))));
                        arr_14 [i_0] [i_1 + 2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (26U))));
                        var_15 = var_11;
                    }
                } 
            } 
        } 
        arr_15 [i_0] [i_0] = max((max(((short)21213), ((short)-23818))), (((/* implicit */short) (signed char)24)));
    }
    for (int i_4 = 1; i_4 < 13; i_4 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */int) (short)-21218)), (((max(((_Bool)1), (arr_8 [i_4] [i_4] [i_4] [(signed char)9]))) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (short)8176)))))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) 24U))));
    }
    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_5 + 2])) ? (((/* implicit */int) arr_30 [i_9] [i_5 - 1] [i_8] [0] [i_5])) : (((/* implicit */int) (short)-8176))))) ? (((((/* implicit */_Bool) ((var_12) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? ((+(((/* implicit */int) arr_29 [i_5] [i_6] [i_6] [i_7] [i_8] [i_7])))) : (((/* implicit */int) ((short) var_0))))) : (((/* implicit */int) max((arr_24 [i_5 + 3] [i_7]), (arr_24 [i_5 - 1] [i_8])))))))));
                            arr_31 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
                            arr_32 [i_5] [i_6] [i_9] [i_8] [i_7] = ((/* implicit */unsigned int) var_12);
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned int) var_5);
            var_20 -= ((/* implicit */unsigned int) (short)-8171);
        }
        arr_33 [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) var_5))));
        arr_34 [i_5] = arr_5 [i_5] [i_5] [i_5];
        var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16164)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) arr_23 [i_5 + 1] [i_5 + 2])))), (var_0)));
        arr_35 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((1744444801U), (((/* implicit */unsigned int) (short)-8176))))) ? ((-(4294967295U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-23817)))))));
    }
    var_22 = ((/* implicit */_Bool) (+(-1706346452)));
}
