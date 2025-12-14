/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30151
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)(-32767 - 1)))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_1 - 1])));
            arr_6 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) (((-(var_5))) << (((((arr_2 [i_0 - 3] [i_0]) + (662737538116886317LL))) - (34LL)))))) : (((/* implicit */unsigned long long int) (((-(var_5))) << (((((((arr_2 [i_0 - 3] [i_0]) + (662737538116886317LL))) - (34LL))) - (7821067061112916105LL))))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47870))) > (arr_4 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (8265290592231968700LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            var_22 = ((/* implicit */unsigned short) ((var_2) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)211)) >> (((4257778267309234821LL) - (4257778267309234802LL))))))));
        }
        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0] [(_Bool)1])) : (((/* implicit */int) (unsigned char)247)))))), ((+(var_6)))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) ((long long int) var_8));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    arr_16 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((long long int) arr_14 [i_2] [i_3]));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) (((_Bool)0) ? (arr_4 [i_3] [i_5 + 2] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6])))));
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_5 - 2])) ? (((unsigned int) 1354243793)) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_3))));
                                var_27 = ((/* implicit */long long int) var_18);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_8 [i_4])) : (((/* implicit */int) var_17))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_7 = 1; i_7 < 10; i_7 += 3) 
        {
            var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_7 - 1] [(short)11] [i_2] [i_2] [i_2] [i_2])) >> (((((/* implicit */int) (short)27135)) - (27108)))));
            /* LoopSeq 1 */
            for (int i_8 = 2; i_8 < 11; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (long long int i_10 = 1; i_10 < 11; i_10 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((int) (+(((/* implicit */int) var_12))))))));
                            var_31 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_2 [i_2] [i_10])))));
                            var_32 = ((/* implicit */unsigned char) ((_Bool) arr_24 [i_7 - 1] [i_7 - 1]));
                            arr_32 [i_2] [i_7] [i_7] [i_10] [i_9] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_8 - 1] [i_10])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1354243778)) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 4294967295U)) : (var_6)))));
                        }
                    } 
                } 
                arr_33 [i_8 - 2] = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)219)))));
                var_33 = ((/* implicit */long long int) (((+(((/* implicit */int) var_18)))) > ((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12))))));
                var_34 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_7 + 2] [i_7 - 1] [i_8 - 1])) ? (arr_22 [i_7 + 1] [i_7 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [i_7] [i_2] [i_7 + 2] [i_8] [i_7])))));
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (~(arr_22 [i_2] [(_Bool)1])))))))));
            }
            /* LoopNest 2 */
            for (long long int i_11 = 4; i_11 < 8; i_11 += 3) 
            {
                for (unsigned char i_12 = 1; i_12 < 10; i_12 += 3) 
                {
                    {
                        var_36 |= ((/* implicit */unsigned short) ((var_5) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_11 - 1])))));
                        var_37 = ((/* implicit */short) arr_10 [i_7 - 1] [i_12 + 2]);
                        var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_28 [i_11] [i_11 + 1] [i_12] [i_12] [i_12] [i_11 + 1]))));
                        var_39 = ((/* implicit */unsigned char) ((arr_1 [i_11]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_2] [i_11])));
                        arr_39 [i_11] = ((/* implicit */unsigned short) arr_0 [i_11]);
                    }
                } 
            } 
        }
        arr_40 [i_2] |= ((/* implicit */_Bool) arr_3 [i_2]);
    }
    var_40 = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) (unsigned char)1)))));
    var_41 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_15)), (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_17)) - (((/* implicit */int) var_10))))) : (var_11))));
}
