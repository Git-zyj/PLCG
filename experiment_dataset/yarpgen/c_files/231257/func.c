/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231257
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
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) (short)-29040)))))) >= (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_10))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_1] [i_0 - 1] [i_2 - 1])) ? (arr_4 [i_1] [i_0 + 1] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_0 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_4 [i_1] [i_0 - 1] [i_2 - 1]))))))));
                            arr_14 [i_0] [i_0] = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
                arr_15 [i_1] [i_1] |= ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
    var_15 = var_10;
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        var_16 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (var_1)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_5 = 2; i_5 < 8; i_5 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (arr_18 [i_4])))) ? (var_4) : (((/* implicit */int) var_5))));
                arr_25 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29044)) ? (((/* implicit */int) (short)29039)) : (((/* implicit */int) (short)-26055))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            }
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
            {
                var_18 *= (!(var_3));
                arr_28 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_11))))) && (((((/* implicit */_Bool) (short)-29044)) || ((_Bool)1)))));
            }
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
            {
                var_19 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))));
                arr_32 [i_4] [i_5] [i_5] [i_4] = (-(((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_5))))));
                /* LoopNest 2 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [24ULL] [i_5 - 1] [i_5] [24ULL] [i_9 - 1] [(signed char)6])) | (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_8)) - (41537)))))));
                            arr_37 [i_4] [(short)1] [i_9] [i_9 - 1] [i_4] [i_8] = ((/* implicit */short) (~(var_0)));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_9 - 1] [i_5] [i_4] [i_5 - 1])) ? (arr_7 [i_5 + 1] [i_5] [(unsigned char)16]) : (arr_26 [i_5] [i_5] [5U] [i_5 - 1])));
                        }
                    } 
                } 
            }
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                arr_42 [i_11] [i_4] [i_4] = ((/* implicit */long long int) (-(arr_41 [i_5 - 2] [i_11])));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-29045))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [(unsigned short)10] [(unsigned short)10]))))))))));
            }
            var_23 = ((/* implicit */unsigned long long int) var_9);
        }
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) 
    {
        arr_45 [i_12] [i_12] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))));
        arr_46 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_12] [23ULL] [i_12])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) ? (arr_7 [i_12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_1))))));
    }
    var_24 = ((/* implicit */_Bool) var_2);
}
