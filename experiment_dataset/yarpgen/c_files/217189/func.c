/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217189
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
    var_12 |= var_0;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned char)186)))), ((+(((/* implicit */int) (unsigned char)87)))))))));
                    var_14 = ((/* implicit */unsigned char) (((~(((/* implicit */int) max(((unsigned char)102), ((unsigned char)255)))))) & (((/* implicit */int) min(((unsigned char)7), ((unsigned char)197))))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (min(((unsigned char)136), ((unsigned char)77)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] [(unsigned char)1] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (unsigned char)76)))), (max((((/* implicit */int) min(((unsigned char)227), ((unsigned char)55)))), ((~(((/* implicit */int) (unsigned char)244))))))));
                                arr_14 [i_2] [i_2] = max(((unsigned char)200), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)63)) <= ((~(((/* implicit */int) (unsigned char)240))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
    {
        var_16 ^= (unsigned char)248;
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)190)) > (((/* implicit */int) (unsigned char)90)))))));
        arr_17 [i_5] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)55)) != (((/* implicit */int) (unsigned char)183))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)184))));
            arr_20 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)98)) / (((/* implicit */int) (unsigned char)200))));
            var_19 = (unsigned char)55;
        }
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)158))));
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            arr_25 [i_7] [i_7] [i_8] = (unsigned char)227;
            arr_26 [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)2)) * (((/* implicit */int) (unsigned char)0))));
        }
        for (unsigned char i_9 = 2; i_9 < 18; i_9 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)201))));
            var_22 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)250))));
            arr_29 [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)90)) / (((/* implicit */int) (unsigned char)98)))) / (((/* implicit */int) (unsigned char)158))));
        }
        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)7))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))))))));
            var_24 = ((/* implicit */unsigned char) min((var_24), ((unsigned char)106)));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)76)) / (((/* implicit */int) (unsigned char)57))));
        }
    }
    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((max(((-(((/* implicit */int) (unsigned char)230)))), (((/* implicit */int) (unsigned char)200)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)212))))))))));
        /* LoopNest 2 */
        for (unsigned char i_12 = 2; i_12 < 18; i_12 += 3) 
        {
            for (unsigned char i_13 = 4; i_13 < 18; i_13 += 2) 
            {
                {
                    arr_41 [i_11] [i_13 - 2] &= ((/* implicit */unsigned char) (+(((/* implicit */int) min(((unsigned char)78), ((unsigned char)77))))));
                    var_27 &= (unsigned char)246;
                    var_28 |= ((/* implicit */unsigned char) min((((/* implicit */int) min(((unsigned char)240), ((unsigned char)54)))), ((-(((/* implicit */int) (unsigned char)33))))));
                }
            } 
        } 
    }
}
