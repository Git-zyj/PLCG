/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222685
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_0)) : (((var_1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((signed char) var_1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (var_14)))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) var_3))))));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (signed char)-10)) | (((/* implicit */int) (short)10965)))))) : ((~(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_3)))))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((var_11) >= (var_14)))) : (((/* implicit */int) var_2))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_3))));
        }
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_18 = min((((((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (var_14))) : (((/* implicit */int) min((var_7), (var_12)))))), (min((((/* implicit */int) var_6)), ((~(((/* implicit */int) var_0)))))));
            var_19 &= ((/* implicit */short) ((signed char) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */int) var_7))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        arr_20 [i_0] [i_0] [i_3] [i_5] = (~((~(((/* implicit */int) var_6)))));
                        var_20 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) var_11))), (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_1)), (var_6))))) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_11)) : (var_8)))))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (var_11)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_1))))) : (((unsigned int) var_13)))))))));
                    }
                } 
            } 
        }
        for (short i_6 = 2; i_6 < 22; i_6 += 3) 
        {
            var_22 = ((/* implicit */short) ((max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) var_6)))) + (((((int) -2147483646)) + (max((((/* implicit */int) var_5)), (var_9)))))));
            arr_23 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((min((var_14), (((/* implicit */int) var_13)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_13)) ? (var_11) : (var_9))) - (1791683356)))))) ? (max((var_11), (((((/* implicit */int) var_4)) - (var_9))))) : (((/* implicit */int) (((+(((/* implicit */int) var_5)))) < (((/* implicit */int) ((unsigned short) var_1))))))));
            arr_24 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)32766), ((short)32744)))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)-1))));
            /* LoopSeq 3 */
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 2; i_8 < 22; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_7] [i_6] = ((/* implicit */unsigned short) ((_Bool) var_8));
                            var_23 = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_0))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) max((((unsigned int) max((var_14), (((/* implicit */int) var_4))))), (((/* implicit */unsigned int) max((max((var_9), (((/* implicit */int) var_13)))), (((/* implicit */int) ((unsigned short) var_6)))))))))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 22; i_10 += 2) 
                {
                    for (short i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        {
                            arr_40 [i_0 + 1] [i_6 + 1] [i_6 + 1] [i_0] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */int) (short)-32754)) <= (2147483647)));
                            var_25 = min((((/* implicit */int) var_4)), (((((((/* implicit */int) var_0)) * (((/* implicit */int) var_2)))) / (var_11))));
                        }
                    } 
                } 
            }
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                arr_43 [i_0 + 1] [i_6] [i_0] [4] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_10) : (var_9)))) ? (((/* implicit */int) (!(var_1)))) : ((-(((/* implicit */int) var_5)))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((((/* implicit */int) var_3)) / (((/* implicit */int) var_6))))))));
                arr_44 [i_0] [i_0] [i_6 + 1] [i_12] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)60628)));
            }
            for (int i_13 = 1; i_13 < 21; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 23; i_14 += 1) 
                {
                    for (int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(var_11))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((((int) (-(((/* implicit */int) var_13))))), (((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
                arr_53 [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (max((var_10), (((/* implicit */int) var_4)))) : (min((var_11), (((/* implicit */int) var_7))))));
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))) * (((min((var_10), (((/* implicit */int) var_12)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))))));
                var_29 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_0)))))))), ((+(((((/* implicit */_Bool) 884784580)) ? (-884784565) : (884784560)))))));
                arr_54 [i_0] = ((/* implicit */unsigned char) ((signed char) ((short) var_9)));
            }
        }
        /* LoopSeq 1 */
        for (short i_16 = 0; i_16 < 23; i_16 += 1) 
        {
            arr_57 [i_0] [(short)14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_3), (var_3)))) - (((var_10) + (var_11)))))) ? (((max((var_8), (((/* implicit */unsigned int) var_6)))) - ((-(var_8))))) : (((/* implicit */unsigned int) max((((var_14) + (var_9))), (((/* implicit */int) ((_Bool) var_1))))))));
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 23; i_17 += 3) 
            {
                for (unsigned short i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    {
                        var_30 &= ((/* implicit */int) var_5);
                        arr_63 [i_0] [i_16] [(unsigned short)14] |= ((/* implicit */int) ((unsigned short) ((((((((/* implicit */int) var_4)) % (((/* implicit */int) var_3)))) + (2147483647))) << (((((/* implicit */int) ((short) var_6))) + (22463))))));
                        var_31 = ((/* implicit */short) var_8);
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((var_14) | (var_10))) ^ (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (unsigned short)65535)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_19 = 0; i_19 < 23; i_19 += 4) 
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 23; i_20 += 1) 
                {
                    for (unsigned char i_21 = 0; i_21 < 23; i_21 += 1) 
                    {
                        {
                            var_33 &= ((/* implicit */short) (-((-(((/* implicit */int) var_5))))));
                            var_34 = ((/* implicit */short) var_4);
                        }
                    } 
                } 
                var_35 += ((/* implicit */signed char) ((var_10) % (((/* implicit */int) var_2))));
                var_36 = ((/* implicit */int) ((unsigned short) var_10));
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) % (((((/* implicit */_Bool) (unsigned char)255)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2016)))))));
            }
        }
        var_38 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)4908)) ? ((-(2147483647))) : ((-(var_11))))), (((/* implicit */int) (short)-2035))));
        var_39 = ((/* implicit */_Bool) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) ((short) var_13)))));
    }
    /* LoopNest 2 */
    for (signed char i_22 = 0; i_22 < 20; i_22 += 2) 
    {
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            {
                var_40 += ((/* implicit */short) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))), (max((var_9), (var_11)))));
                arr_79 [i_22] [i_22] [i_22] = ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) ((short) ((var_9) <= (((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) ((unsigned char) var_11))))));
                /* LoopSeq 1 */
                for (unsigned int i_24 = 0; i_24 < 20; i_24 += 1) 
                {
                    arr_83 [i_24] [i_23] [i_24] = ((/* implicit */short) ((((unsigned int) var_6)) << (((/* implicit */int) ((_Bool) var_0)))));
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) var_8))));
                    var_42 = ((/* implicit */signed char) ((int) (short)-1));
                }
            }
        } 
    } 
}
