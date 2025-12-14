/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42904
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-5120), ((short)32387)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (var_1)))) ? (var_3) : (((/* implicit */long long int) max((var_8), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)7144)))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) (-(arr_0 [i_0])));
        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [13] [i_0]))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_1))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */int) var_4);
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-26072)) | (((/* implicit */int) (short)-15897))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_4 = 4; i_4 < 20; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 3) 
                {
                    {
                        var_18 = (+(arr_13 [i_4 - 3] [i_5] [i_6 + 2]));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 15ULL)) || (((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 - 3] [i_4])))))));
                        var_20 = ((/* implicit */short) var_2);
                        var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)7144)))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) >= (var_10)))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        for (short i_8 = 3; i_8 < 24; i_8 += 4) 
        {
            for (unsigned int i_9 = 1; i_9 < 24; i_9 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((arr_19 [i_7]), (((/* implicit */unsigned long long int) max((arr_18 [i_7] [i_8 - 1]), (((/* implicit */long long int) var_2)))))));
                    var_23 = ((/* implicit */unsigned int) var_10);
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)7130)) : (-2147483638)));
                        var_25 = ((/* implicit */short) ((((/* implicit */int) var_11)) | (arr_20 [i_7] [i_9] [i_9 + 1] [i_10])));
                    }
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1646)) || (((/* implicit */_Bool) 3971760057U))));
                }
            } 
        } 
    } 
}
