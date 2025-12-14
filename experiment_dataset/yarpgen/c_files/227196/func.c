/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227196
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
    var_20 = (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) (_Bool)1)))))));
    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_22 += ((/* implicit */signed char) var_17);
        var_23 -= ((/* implicit */_Bool) (short)31637);
        var_24 = ((/* implicit */unsigned short) max((var_24), (arr_0 [i_0])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                {
                    var_25 ^= ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)0))))));
                    var_26 = ((/* implicit */_Bool) 11110848941741288008ULL);
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_27 -= ((/* implicit */unsigned long long int) min((var_9), (min((arr_9 [i_3] [i_3 + 1]), (((/* implicit */long long int) (unsigned short)8176))))));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)50)), (arr_10 [i_3 + 1])))) : (((/* implicit */int) max((arr_0 [i_3 + 1]), (arr_0 [i_3 + 1]))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        for (long long int i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (short i_7 = 2; i_7 < 21; i_7 += 2) 
                    {
                        {
                            var_29 &= ((/* implicit */signed char) arr_12 [i_4] [i_4]);
                            var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [i_4] [i_4] [i_4]))));
                            var_31 = ((/* implicit */short) arr_14 [i_4] [i_5 + 2] [i_6]);
                        }
                    } 
                } 
                var_32 &= (unsigned short)192;
                /* LoopNest 2 */
                for (unsigned short i_8 = 2; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_33 = arr_23 [i_5 + 1] [i_5] [i_5 - 1] [i_5];
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_10 = 4; i_10 < 21; i_10 += 2) 
                            {
                                var_34 = ((/* implicit */signed char) var_18);
                                var_35 = ((/* implicit */unsigned short) -554826540);
                                var_36 = ((/* implicit */unsigned short) var_7);
                                var_37 = ((/* implicit */unsigned short) max((var_37), (((unsigned short) (+(((/* implicit */int) arr_23 [i_4] [i_10] [i_8] [i_9])))))));
                                var_38 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (-554826540)));
                            }
                            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (~(-554826540))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
