/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248818
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)-1)))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (int i_4 = 3; i_4 < 11; i_4 += 2) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-1))));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_0))));
                        }
                    } 
                } 
            } 
            arr_12 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-2))));
            var_18 += ((/* implicit */unsigned short) arr_2 [i_0 - 1]);
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-7)) : (((/* implicit */int) (short)7))))) : (arr_2 [(short)7])));
        }
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 - 1]))))) ? (arr_7 [(unsigned char)9] [i_0] [i_5] [i_5] [(unsigned char)9] [(unsigned char)9]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1])))));
        }
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) var_3);
            /* LoopNest 2 */
            for (unsigned char i_7 = 4; i_7 < 11; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32761))) | (((((/* implicit */_Bool) (+(((/* implicit */int) (short)23771))))) ? (((unsigned int) var_5)) : (((((/* implicit */_Bool) 4294967295U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)10] [i_7 - 1] [i_8])))))))));
                        var_23 &= ((/* implicit */int) min((max((((/* implicit */unsigned int) (short)-22)), (16383U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) (short)35)) : (((/* implicit */int) ((short) (short)0))))))));
                        /* LoopSeq 4 */
                        for (int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_6] [i_6] [i_7] [i_7] = var_11;
                            var_24 = ((/* implicit */unsigned char) var_6);
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) arr_26 [i_0] [(short)9] [i_7] [i_8])))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) ^ (4294967280U))))));
                            arr_34 [i_0] [i_0 - 2] [i_0] [i_6] [i_0 + 1] = ((/* implicit */long long int) (short)(-32767 - 1));
                            var_27 += (short)-32765;
                            var_28 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            arr_38 [(unsigned char)9] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 1] [i_0])))))));
                            var_29 |= ((/* implicit */short) (unsigned short)10838);
                            var_30 += ((/* implicit */unsigned short) ((short) (~(1843010878))));
                        }
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            var_31 += ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                            arr_43 [0U] [i_6] [i_7] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 262143U)))))));
                        }
                        var_32 = ((/* implicit */short) arr_22 [i_8] [i_7 - 4] [(unsigned char)1] [i_0]);
                    }
                } 
            } 
            var_33 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)18484))));
        }
        var_34 = ((/* implicit */unsigned int) arr_17 [i_0] [(unsigned short)11]);
    }
    /* LoopSeq 1 */
    for (short i_13 = 0; i_13 < 21; i_13 += 4) 
    {
        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) arr_45 [(short)14]))));
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */int) (short)-22)) : (((/* implicit */int) (short)10696))));
        var_37 = ((/* implicit */unsigned char) ((_Bool) (-(arr_44 [i_13] [i_13]))));
    }
}
