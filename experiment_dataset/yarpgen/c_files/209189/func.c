/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209189
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
    var_10 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */long long int) min((var_11), (max((9223372036854775807LL), (((/* implicit */long long int) (short)-7792))))));
                    var_12 = ((144115187538984960LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))));
                }
            } 
        } 
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (-1891251274490452855LL) : (1328623808295387479LL)));
        var_14 = arr_4 [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) 
    {
        arr_10 [i_3] = ((/* implicit */short) (signed char)-1);
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (_Bool)1))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8206710384904745706ULL)) || (((/* implicit */_Bool) 3950177089U))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 4; i_4 < 13; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (unsigned char i_6 = 3; i_6 < 15; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    {
                        arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) -268435456)) ? (1406655725695129439LL) : (((/* implicit */long long int) -486668109))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 2; i_8 < 14; i_8 += 4) 
                        {
                            arr_26 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2473312309U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) : (2841756671770464456ULL)));
                            var_16 = ((/* implicit */unsigned long long int) arr_25 [i_4] [i_7]);
                        }
                        for (unsigned int i_9 = 1; i_9 < 15; i_9 += 2) 
                        {
                            arr_29 [i_9] [i_7] [i_6] [i_4] [i_4] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)18))));
                            arr_30 [i_4] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */long long int) -1943081125)) & (915750586132271658LL)));
                        }
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 2; i_10 < 15; i_10 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)9326)) : (((/* implicit */int) (signed char)-1))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)46)) && (((/* implicit */_Bool) 2996533132U))));
                            arr_33 [i_10] [i_6] = ((/* implicit */unsigned char) (-(1751394310U)));
                        }
                        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) arr_15 [i_6 - 1]);
                            var_19 = ((/* implicit */unsigned int) var_5);
                            arr_39 [i_11] [i_11] [i_11] [i_11] [i_11] |= ((/* implicit */signed char) (+(((/* implicit */int) (short)0))));
                        }
                        for (long long int i_12 = 2; i_12 < 12; i_12 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_8))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120))) : (18014398509481983ULL)));
                            var_22 = ((/* implicit */unsigned long long int) ((_Bool) 9223372036854775807LL));
                        }
                        for (unsigned char i_13 = 2; i_13 < 13; i_13 += 4) 
                        {
                            arr_47 [i_4] [i_4] [i_6] [i_6] [i_6] [i_7] [i_13 + 1] = arr_19 [i_5] [i_13];
                            var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-32747))));
                            arr_48 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2084784572U)) ? (((/* implicit */int) (short)-1450)) : (((/* implicit */int) (signed char)19))));
                        }
                        var_24 &= ((/* implicit */_Bool) (~(((/* implicit */int) (short)16383))));
                        arr_49 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) (signed char)-69);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned int) (~(-1812451653)));
    }
    var_26 += ((/* implicit */short) var_6);
}
