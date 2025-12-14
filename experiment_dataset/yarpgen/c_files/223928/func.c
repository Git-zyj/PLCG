/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223928
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
    var_10 |= ((/* implicit */signed char) var_3);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */int) (short)-12752)) | (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) (signed char)123))))));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) max((((((((((/* implicit */int) var_5)) + (((/* implicit */int) (short)-12752)))) + (2147483647))) << ((((-(((/* implicit */int) var_6)))) - (76))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)12761))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (var_2))))))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-13775)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) ((signed char) var_7));
                        arr_15 [i_4 - 2] [i_2 + 2] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-5074)) ^ (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))));
                        var_15 = ((/* implicit */signed char) ((unsigned long long int) var_9));
                        arr_16 [i_1] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
                        var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) 5772159665118641641ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_9)));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)6))))) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
    }
    /* vectorizable */
    for (short i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (unsigned char i_7 = 1; i_7 < 8; i_7 += 1) 
            {
                {
                    var_18 *= ((/* implicit */short) var_7);
                    var_19 = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)0)))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                                arr_32 [i_5] [i_7 + 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (short)-9942)) : (((/* implicit */int) (unsigned char)127))));
                                arr_33 [i_5] [i_6] [i_8] [(signed char)1] [i_9] [i_9] [i_7 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12146))) : (8388607ULL)))) ? (var_9) : (((/* implicit */unsigned long long int) (+((-2147483647 - 1))))));
                                var_21 *= 3803350171U;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) var_1))));
        arr_34 [i_5] [i_5 + 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_0)))));
        var_23 = ((/* implicit */_Bool) var_7);
        /* LoopNest 2 */
        for (unsigned char i_10 = 2; i_10 < 7; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                {
                    var_24 = (unsigned char)255;
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 8; i_12 += 3) 
                    {
                        for (signed char i_13 = 2; i_13 < 10; i_13 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) ((short) var_1)))));
                                arr_45 [i_5] = ((/* implicit */signed char) ((_Bool) (_Bool)1));
                                arr_46 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) (signed char)105)))));
                                var_26 = ((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) var_8))) + (-3LL))) + (9223372036854775807LL))) << ((((((-(((/* implicit */int) (short)15876)))) + (15886))) - (10)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
