/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213520
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
    var_14 = ((/* implicit */short) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_10);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0 + 1] [i_0] [6U] [i_0 - 1] = ((/* implicit */_Bool) ((unsigned char) ((var_13) - (((/* implicit */int) var_4)))));
                        arr_10 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) var_2)))) ^ (((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            arr_13 [i_0] [i_4] = ((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)1] [i_4] [i_4 - 1]);
            arr_14 [(_Bool)1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 2327252788U)) - (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1)))))));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                var_15 = ((_Bool) (_Bool)1);
                arr_17 [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (unsigned short)65507)) : (((/* implicit */int) (short)32767))));
            }
            arr_18 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)1)))) != (var_8)));
            arr_19 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) var_1)))));
        }
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 1; i_10 < 14; i_10 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_30 [i_6 + 1] [i_7] [i_6 + 1] [i_10 + 1] [i_6 + 1])) : (((/* implicit */int) (unsigned short)1))))) ? (((((/* implicit */int) (unsigned short)65523)) & (((/* implicit */int) (signed char)7)))) : ((~(((/* implicit */int) ((_Bool) var_8)))))));
                            arr_33 [i_7] [4U] [i_9] [i_8] [i_7] [(_Bool)1] [i_7] = (~(((((/* implicit */unsigned int) ((/* implicit */int) ((arr_26 [i_9] [i_8] [i_7]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))) + (((unsigned int) var_5)))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_32 [(_Bool)1] [(unsigned char)8] [i_6] [i_6] [i_6])) - (((/* implicit */int) arr_21 [i_6])))) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_32 [i_11] [i_9] [(unsigned short)7] [i_6] [i_6])) : (((/* implicit */int) var_9)))))))) < (var_10))))));
                            var_18 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_4))))) != (var_0)));
                        }
                        arr_36 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((var_13) / (((/* implicit */int) (signed char)-94)))) : (((/* implicit */int) ((signed char) var_5)))));
                    }
                } 
            } 
        } 
        arr_37 [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_28 [i_6] [14ULL] [14ULL] [i_6])) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((signed char) (unsigned short)0)))));
        arr_38 [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)61439))));
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned char)107))))))) : (max((((long long int) (_Bool)1)), (var_0)))));
    var_20 = ((/* implicit */short) var_3);
}
