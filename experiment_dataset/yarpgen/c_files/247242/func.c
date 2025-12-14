/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247242
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
    var_20 = ((/* implicit */unsigned char) (unsigned short)64029);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)1484))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    for (int i_4 = 3; i_4 < 15; i_4 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (unsigned short)1484)) - (1484)))));
                            arr_12 [i_1] [i_1] [i_2] = ((/* implicit */int) arr_3 [i_1]);
                            var_23 = ((/* implicit */unsigned char) (+(((arr_10 [i_0] [i_2] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                var_24 ^= ((/* implicit */signed char) (unsigned short)8108);
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(arr_0 [i_1 + 1]))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (unsigned char i_7 = 2; i_7 < 14; i_7 += 1) 
                    {
                        {
                            arr_21 [i_1] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_7 + 2] [i_7] [i_7] [i_7] [i_7])) < (((/* implicit */int) arr_7 [i_6]))));
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_5] [i_6])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_19 [i_6])))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1481))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)1507)) : (var_4))) : (((/* implicit */int) arr_19 [i_0]))));
            }
        }
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64051)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (unsigned short)1506)) ? (((/* implicit */int) (unsigned short)40667)) : (((/* implicit */int) arr_14 [i_0] [i_8] [i_0])))) : ((~(((/* implicit */int) (unsigned short)64052))))));
            var_29 = (-(((/* implicit */int) arr_19 [i_0])));
        }
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((1500178638U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9] [i_9])) < (var_3)))) > (((((/* implicit */_Bool) arr_5 [i_9] [i_9] [i_9])) ? (var_4) : (((/* implicit */int) arr_6 [i_9] [i_9] [i_9] [i_9]))))));
    }
}
