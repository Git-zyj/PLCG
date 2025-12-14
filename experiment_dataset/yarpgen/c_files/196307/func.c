/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196307
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
    for (short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 7; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((int) min((2654468393U), (((/* implicit */unsigned int) var_2))))));
                                arr_15 [i_1] [i_1] [i_3] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */_Bool) 6157243239435009873LL)) && (((/* implicit */_Bool) (unsigned char)26))))), ((short)-14990)));
                            }
                        } 
                    } 
                    var_17 = min((((/* implicit */unsigned int) (unsigned short)23137)), (max((2147481600U), (((/* implicit */unsigned int) ((_Bool) var_2))))));
                    var_18 *= ((/* implicit */unsigned long long int) (unsigned char)215);
                    var_19 = ((/* implicit */short) var_10);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 8; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((17304097259235719020ULL), (7023972086444527359ULL))))));
                    arr_21 [i_0] [i_0] [i_6] = ((unsigned long long int) ((((unsigned long long int) 2654468393U)) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned char)208)))))));
                    arr_22 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (short)-15471);
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_25 [i_7] [12ULL] = ((/* implicit */unsigned int) (_Bool)1);
        arr_26 [i_7] = ((/* implicit */short) var_0);
    }
    for (unsigned int i_8 = 3; i_8 < 20; i_8 += 3) 
    {
        var_21 += ((/* implicit */_Bool) 814802118523008019ULL);
        /* LoopNest 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned char) var_11)))));
                        arr_37 [i_8] [i_9] [i_9 - 1] [i_8] [i_9 - 1] [i_10] = ((/* implicit */_Bool) (unsigned char)221);
                    }
                    for (int i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((((-1) - (((/* implicit */int) var_11)))), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) (unsigned char)220))))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */long long int) 6421692U)) / (((long long int) var_13)))))));
                        arr_41 [i_8 - 3] [i_9] [i_10] [i_12] = ((/* implicit */_Bool) var_2);
                        var_25 = ((/* implicit */unsigned short) ((17631941955186543604ULL) / (((/* implicit */unsigned long long int) ((long long int) var_6)))));
                    }
                    for (short i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        arr_44 [i_13] [i_10] [i_8] = ((/* implicit */unsigned short) var_7);
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (min((10674966423341798267ULL), (((/* implicit */unsigned long long int) var_10))))));
                    }
                    var_27 = ((/* implicit */unsigned long long int) 0);
                    var_28 = var_1;
                    var_29 = ((/* implicit */_Bool) ((signed char) var_7));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */short) (unsigned short)57253);
}
