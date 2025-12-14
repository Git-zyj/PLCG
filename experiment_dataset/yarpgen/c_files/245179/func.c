/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245179
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(((/* implicit */int) ((short) arr_1 [i_0] [i_0]))))))));
        var_20 -= ((/* implicit */_Bool) max((var_3), (((/* implicit */int) ((((_Bool) (unsigned char)88)) || (((/* implicit */_Bool) var_3)))))));
        arr_2 [i_0] = ((/* implicit */short) var_0);
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_13 [i_2] [i_2] [6] = ((/* implicit */short) arr_1 [i_1] [i_1]);
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_7))), (((/* implicit */long long int) ((short) (short)-32757))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)251))))));
                        arr_14 [i_2] [i_2] = ((/* implicit */short) arr_8 [i_2] [i_3] [i_2]);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_1] [i_1] [i_1])), ((unsigned char)114)))) : (((/* implicit */int) min((((/* implicit */short) arr_8 [i_1] [i_1] [(unsigned short)2])), (arr_5 [(short)0] [i_1] [(short)0]))))));
    }
    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
    {
        arr_17 [i_5] |= ((/* implicit */unsigned char) max((4064), (((/* implicit */int) max((min((((/* implicit */short) (unsigned char)114)), (arr_5 [i_5] [i_5] [i_5]))), (((/* implicit */short) (_Bool)0)))))));
        var_23 |= ((/* implicit */short) (unsigned char)179);
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 4) 
    {
        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) 0))))) >> (((((int) (unsigned char)179)) - (170))))));
                arr_24 [(short)11] = max((((((/* implicit */_Bool) (short)-28270)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7 + 2]))) : (((unsigned int) var_12)))), (((/* implicit */unsigned int) var_15)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 3; i_8 < 21; i_8 += 2) 
    {
        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            {
                arr_30 [i_8] [i_8] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) var_11))), ((-((+(((/* implicit */int) (unsigned short)59867))))))));
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    for (short i_11 = 3; i_11 < 19; i_11 += 2) 
                    {
                        {
                            arr_37 [i_10] [i_11] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((((/* implicit */_Bool) arr_36 [4] [i_9] [i_8] [(_Bool)1] [i_9] [i_8])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)32761)))) : ((+(var_16)))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (((((-(((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */int) (short)30791)) : (((/* implicit */int) (short)32761)))))) + (2147483647))) >> (((((/* implicit */int) max((((/* implicit */short) var_8)), (arr_29 [i_8] [i_9] [i_11 - 1])))) - (5857))))))));
                            var_26 = ((/* implicit */short) (((-(var_3))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_15 [i_8 - 2] [i_9])))))) * (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_9] [i_9])) && ((_Bool)0))))))))));
                var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [0LL] [i_8])))));
            }
        } 
    } 
}
