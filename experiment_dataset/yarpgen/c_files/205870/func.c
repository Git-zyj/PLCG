/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205870
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
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) 0)) & (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64)))))))));
    var_17 = ((/* implicit */unsigned long long int) ((int) -1));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [11] [11] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_0])), ((~((~(-1)))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)255);
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(short)17] [i_1] [i_2] [i_3])) / (((/* implicit */int) arr_6 [i_3] [i_2] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (signed char)-74)) : (0))) : (((/* implicit */int) ((0) < (((/* implicit */int) var_2)))))));
                    }
                } 
            } 
            arr_11 [i_1] = ((/* implicit */long long int) max((((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (117954033)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)230)))) : (((/* implicit */int) arr_1 [i_1])))))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])), (var_14))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_1])) : (arr_4 [i_1] [i_0] [i_0])))))))));
            var_20 = ((/* implicit */unsigned int) var_12);
        }
        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 1; i_5 < 23; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        {
                            arr_20 [(short)1] [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) (-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)16])) : (((/* implicit */int) arr_0 [i_5])))))));
                            var_21 = ((/* implicit */int) arr_19 [i_0] [i_7] [i_5 + 2] [i_7] [24LL] [i_7]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    {
                        arr_26 [i_4] = ((/* implicit */short) ((arr_5 [i_9] [i_4] [i_4] [i_0]) >= (min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_9])) || (((/* implicit */_Bool) -1))))), ((-(0)))))));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [6U] [i_0] [i_0])) ? (arr_23 [i_0] [i_4] [(short)24] [(short)4]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) - (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? ((-(arr_25 [i_4] [(_Bool)1] [i_8] [i_9] [(unsigned char)10]))) : ((+(((/* implicit */int) var_15))))))) : (min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) arr_5 [(short)0] [i_4] [14U] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0]))) : (var_5)))))));
                    }
                } 
            } 
            arr_27 [i_4] = ((/* implicit */unsigned char) ((int) arr_17 [i_0] [i_4] [i_0] [i_0]));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) (unsigned short)15376);
        arr_32 [i_10] [3U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) % (var_14)))) ? (((((/* implicit */_Bool) 3860084532U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) : ((-(((/* implicit */int) var_10))))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (0) : (((/* implicit */int) arr_6 [i_10] [i_10] [(unsigned short)17] [i_10]))));
        arr_33 [i_10] = ((((/* implicit */int) (signed char)(-127 - 1))) <= ((-(((/* implicit */int) arr_9 [i_10] [i_10] [i_10] [i_10] [(_Bool)1] [i_10])))));
        var_25 = ((/* implicit */unsigned char) arr_13 [(unsigned char)24]);
    }
}
