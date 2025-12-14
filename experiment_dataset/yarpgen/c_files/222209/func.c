/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222209
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */long long int) min((max((((((/* implicit */int) (unsigned short)63)) + (((/* implicit */int) (_Bool)1)))), (848271035))), (((/* implicit */int) (_Bool)1))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) + (((/* implicit */int) (_Bool)1))));
                        var_17 = ((/* implicit */long long int) min((((((((/* implicit */unsigned int) ((/* implicit */int) (short)-8193))) < (4294967295U))) ? (var_13) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_14))));
                    }
                } 
            } 
        } 
        var_18 = max((var_14), (max((arr_6 [i_0 + 1] [i_0 - 1]), (((/* implicit */short) arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [(signed char)14])))));
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) ((short) min(((!(((/* implicit */_Bool) var_4)))), (((((/* implicit */unsigned long long int) var_0)) >= (var_8))))));
    }
    for (short i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 2; i_7 < 12; i_7 += 1) 
                {
                    {
                        arr_23 [i_7] [i_7 + 1] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~((+(var_5)))))) - (((((/* implicit */_Bool) arr_6 [i_7 - 1] [i_7 - 1])) ? (var_9) : (((/* implicit */unsigned int) ((var_5) + (((/* implicit */int) var_2)))))))));
                        var_19 -= var_8;
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    {
                        arr_31 [i_4] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((arr_25 [i_4] [i_8]) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? ((+(((/* implicit */int) arr_9 [i_8] [i_10])))) : (((/* implicit */int) arr_8 [i_4] [i_8] [i_4] [i_4] [i_4] [i_4]))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_25 [i_8] [i_8]))));
                    }
                } 
            } 
        } 
    }
    var_21 = var_3;
    var_22 &= ((/* implicit */unsigned char) var_12);
}
