/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4897
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((unsigned long long int) var_4)))) ? (((((/* implicit */_Bool) var_16)) ? (((long long int) var_3)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1621820646051484058LL)) ? (-639377601) : (639377624)))))) : (var_2)));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned int i_3 = 3; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_3] = ((/* implicit */unsigned char) var_8);
                        arr_14 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) ((long long int) ((unsigned short) var_1))));
                        arr_15 [i_0] [i_1] [i_2] [6LL] = ((/* implicit */unsigned int) var_4);
                        arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_9))) & (((/* implicit */int) ((short) var_4)))))) ? (((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */unsigned long long int) ((long long int) var_3))) : (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) var_14)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5431891747490585999LL)) ? (((/* implicit */int) (short)19190)) : (-197158643)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_0)) : (var_6))) : (((/* implicit */unsigned long long int) ((unsigned int) var_14)))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
            {
                var_18 = ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_15))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_6))) : (((/* implicit */unsigned long long int) ((unsigned int) var_13)))))) ? (((unsigned long long int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-12757))))));
            }
            var_20 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned int) var_8)) : ((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_9)) : (var_12))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                for (long long int i_6 = 3; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_21 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))));
                        var_22 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((((/* implicit */_Bool) var_5)) ? (var_13) : (var_5))) : (((unsigned int) var_9)))))));
                        arr_26 [i_0] |= ((/* implicit */int) var_13);
                        var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (var_11) : (((/* implicit */unsigned long long int) ((int) 4294967295U))))));
                    }
                } 
            } 
        }
        for (long long int i_7 = 1; i_7 < 12; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                for (long long int i_9 = 2; i_9 < 14; i_9 += 3) 
                {
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((int) var_5))) : (((long long int) var_14))))) ? (((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_16)))))) : ((-(((unsigned int) 4294967289U))))));
                        arr_34 [i_0] [i_7] [(_Bool)1] [i_9] = ((/* implicit */unsigned long long int) var_10);
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_25 *= ((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) var_0)))) > (((/* implicit */unsigned long long int) var_14)))));
                            var_26 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) var_9)))))))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+((~(((unsigned int) var_16)))))))));
                        }
                        for (unsigned int i_11 = 2; i_11 < 14; i_11 += 1) 
                        {
                            var_28 -= ((/* implicit */long long int) (+(((int) ((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */long long int) var_13)))))));
                            arr_39 [i_0] [i_7] [i_11] [i_9] [i_11] = ((/* implicit */unsigned int) ((long long int) ((unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11))))));
                            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) ((short) var_6))))));
                        }
                        for (unsigned short i_12 = 2; i_12 < 14; i_12 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) ((_Bool) (+(((int) var_13)))));
                            var_31 = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_16))))))) / (((/* implicit */int) ((var_7) != (((/* implicit */long long int) var_13)))))));
                            var_32 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) 16776192)) | (4294967288U)))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */long long int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) -968724053)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6660))) : (-1LL)))))));
                        }
                        arr_43 [i_9] [10U] [9LL] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((unsigned int) var_4))) != (((unsigned long long int) 4294967295U)))) ? (((/* implicit */long long int) ((unsigned int) ((unsigned int) var_5)))) : (((long long int) var_10))));
                    }
                } 
            } 
            var_33 ^= ((/* implicit */short) var_7);
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        {
                            arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [0ULL] = ((/* implicit */unsigned short) var_5);
                            arr_53 [i_0] [i_7] [i_13] [i_7] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_9)) : (var_12))))) | (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (+(var_8)))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned int i_16 = 0; i_16 < 17; i_16 += 4) 
    {
        arr_58 [i_16] [i_16] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) > (var_11))));
        arr_59 [3LL] [i_16] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (var_13) : (var_13)))))));
    }
    for (unsigned char i_17 = 1; i_17 < 10; i_17 += 4) 
    {
        arr_63 [i_17] = var_10;
        arr_64 [i_17] = ((/* implicit */_Bool) ((495160522) - (((/* implicit */int) (unsigned char)173))));
        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((long long int) var_14)) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_7)))))))));
        var_35 = ((/* implicit */unsigned char) ((int) (-(292944019U))));
        var_36 *= ((/* implicit */_Bool) ((unsigned int) var_3));
    }
    for (long long int i_18 = 1; i_18 < 20; i_18 += 1) 
    {
        arr_67 [i_18] [i_18] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_14))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned int) var_9))))) : (var_1))));
        var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) 191526617U)))));
        /* LoopSeq 1 */
        for (long long int i_19 = 0; i_19 < 21; i_19 += 4) 
        {
            var_38 = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((var_6) % (var_1)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_13)) : (var_11))) : (((unsigned long long int) var_1)))) : (((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_13)))))));
            var_39 -= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))));
        }
    }
    var_40 += ((/* implicit */long long int) ((int) var_10));
    var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_2)) : (var_11))))) || (((/* implicit */_Bool) ((int) (+(((/* implicit */int) var_10)))))))))));
}
