/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215317
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
    var_11 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    var_12 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) (unsigned char)11)))));
                    var_13 = ((/* implicit */signed char) ((short) ((unsigned int) (~(((/* implicit */int) (unsigned char)232))))));
                    var_14 = ((/* implicit */unsigned char) ((int) ((int) (unsigned char)8)));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) ((unsigned char) arr_2 [i_0] [i_1]));
                    var_16 = ((/* implicit */_Bool) (~(var_2)));
                    var_17 *= ((/* implicit */unsigned short) ((unsigned char) 3844036780U));
                }
                for (int i_4 = 2; i_4 < 14; i_4 += 3) 
                {
                    arr_11 [i_0] [i_0] [(signed char)14] [i_0] = (~(((/* implicit */int) ((unsigned char) (short)-12328))));
                    var_18 = ((/* implicit */unsigned short) ((signed char) (+(((int) var_10)))));
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_18 [i_0] [(_Bool)1] [0] [i_6] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (short)-32763))))));
                                var_19 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-12348))));
                                var_20 &= ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (unsigned char)244)))));
                                arr_19 [(unsigned short)8] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) ((unsigned short) 1881433099));
                                var_21 |= ((/* implicit */short) (-(((unsigned int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_22 = (-(((/* implicit */int) (unsigned char)160)));
                    var_23 = ((/* implicit */signed char) ((unsigned char) (unsigned short)22383));
                    var_24 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) (signed char)-56)))));
                    arr_22 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
                    arr_23 [(short)7] [i_0 + 1] [i_0] [i_7] = ((/* implicit */unsigned short) (~(arr_13 [i_0] [i_1] [i_1] [(unsigned short)1] [i_1] [i_1])));
                }
                var_25 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) -2059528400))))));
                var_26 = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_0 [i_0 - 1] [i_1])))));
                var_27 = ((/* implicit */short) (-((-(var_2)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_8 = 4; i_8 < 16; i_8 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_28 [i_8] [i_8] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) arr_24 [i_9] [i_8 - 4])))));
            var_28 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) (~(((/* implicit */int) (short)12327))))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) 2097151U)))));
                        var_30 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_4)))));
                    }
                } 
            } 
            arr_35 [i_8] [i_10] [i_8] = ((/* implicit */signed char) (+((~(((/* implicit */int) ((short) (signed char)104)))))));
            var_31 |= ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_27 [(short)16] [i_10])))));
        }
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-115))));
            var_33 ^= ((/* implicit */_Bool) ((unsigned int) ((_Bool) var_1)));
        }
        var_34 = ((/* implicit */_Bool) (+(((int) var_10))));
        var_35 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(1915430645))))));
        var_36 = (~(1915430660));
    }
    for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
    {
        var_37 |= ((/* implicit */signed char) (!(((_Bool) 50331648U))));
        var_38 *= ((signed char) ((short) var_9));
    }
}
