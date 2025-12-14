/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30149
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) var_5);
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((var_8) ^ (var_10))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))));
                            var_19 = ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_2))) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))))) << (((/* implicit */int) ((((((/* implicit */int) var_14)) << (((((/* implicit */int) var_11)) - (104))))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+((-(var_10))))))));
                var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_15)) ? (var_8) : (var_1))) - (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))));
                    var_23 = var_5;
                    var_24 = ((/* implicit */signed char) (-((((+(((/* implicit */int) var_0)))) & (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_3)))))))));
                    var_25 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_1))))))) <= (((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))) + (2147483647))) >> (((var_2) - (2197174816U)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 1; i_7 < 17; i_7 += 4) 
    {
        for (short i_8 = 2; i_8 < 17; i_8 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_9 = 1; i_9 < 18; i_9 += 4) 
                {
                    var_26 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) ((((((/* implicit */int) var_5)) == (((/* implicit */int) var_14)))) || (((/* implicit */_Bool) var_9)))))));
                    /* LoopSeq 2 */
                    for (short i_10 = 3; i_10 < 18; i_10 += 4) 
                    {
                        var_27 = ((((/* implicit */_Bool) (((+(((/* implicit */int) var_5)))) + ((-(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) (-(var_7)))) ? ((-(var_7))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_2))))) : (((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_1))));
                        arr_31 [(short)3] [(unsigned char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 1; i_11 < 15; i_11 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) ((var_10) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15)))))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))));
                    }
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (-(((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(var_10)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_15)))))))));
                }
                for (unsigned int i_12 = 3; i_12 < 15; i_12 += 4) 
                {
                    arr_37 [i_7] [i_8] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) - (((/* implicit */int) var_15))))) && (((/* implicit */_Bool) (-(var_7))))));
                    arr_38 [i_12] [(unsigned char)15] [(short)18] [(short)18] = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_14)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (var_7))))));
                }
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) var_16)) + (((/* implicit */int) var_6))))) - ((+(var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? ((~(((/* implicit */int) var_13)))) : ((+(((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
    {
        for (signed char i_14 = 2; i_14 < 8; i_14 += 4) 
        {
            for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                {
                    var_33 = ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_14)))))));
                    var_34 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13)))) + ((+(((/* implicit */int) var_6)))))) >> ((((~(var_2))) - (2097792446U)))));
                    var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_2)))) ? ((-(((/* implicit */int) var_15)))) : (((((/* implicit */int) var_13)) * (((/* implicit */int) var_9))))));
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((-(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? ((+((-(var_10))))) : ((((-(var_10))) * (var_10)))));
                }
            } 
        } 
    } 
}
