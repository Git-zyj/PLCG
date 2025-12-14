/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39307
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((_Bool) arr_1 [i_0]));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_10 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_1] [i_2] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2]))) : (((((arr_5 [i_3] [i_2] [i_1] [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_4 [i_3] [i_1]))))));
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_4))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                var_17 = ((/* implicit */unsigned short) min((((int) max((arr_12 [i_0] [i_1] [i_4]), (((/* implicit */signed char) var_9))))), (((/* implicit */int) (unsigned short)25))));
                var_18 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9773))) ^ (arr_3 [i_0]))));
                arr_15 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) (short)9773))))) ^ (min((arr_14 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_4] [i_1])))))));
            }
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                arr_19 [i_5] [i_1] [i_0] = ((/* implicit */_Bool) arr_7 [i_0] [i_0]);
                arr_20 [i_0] [i_1] = ((/* implicit */unsigned short) arr_5 [i_5] [i_5] [i_0] [i_0]);
                var_19 = (-(((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_0])) : (((/* implicit */int) (short)-9788)))));
                arr_21 [i_5] = ((/* implicit */long long int) max((arr_3 [i_0]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_0 [i_5]), ((short)9752)))))))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                var_20 = ((/* implicit */short) (_Bool)1);
                var_21 |= ((/* implicit */_Bool) (-((+(((/* implicit */int) var_10))))));
            }
            /* LoopNest 2 */
            for (long long int i_7 = 1; i_7 < 7; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    {
                        arr_32 [i_0] [i_1] [i_7] [i_8] [i_8] = ((/* implicit */long long int) min((((/* implicit */int) arr_29 [i_7 + 3] [i_7 - 1] [i_7] [i_7 + 3])), (((((/* implicit */_Bool) arr_29 [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 1])) ? (((/* implicit */int) arr_29 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) (short)9772))))));
                        var_22 = ((/* implicit */signed char) arr_9 [i_7] [i_0]);
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max((min((((/* implicit */short) ((_Bool) (short)9773))), (min((((/* implicit */short) arr_22 [i_0] [i_1] [i_7 + 1] [i_8])), ((short)-9774))))), (((/* implicit */short) ((min((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_27 [i_8] [i_7] [i_1] [i_0])))) != (min((arr_14 [i_8] [i_7] [i_1]), (((/* implicit */unsigned long long int) var_3))))))))))));
                        arr_33 [i_8] [i_7] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_1] [i_7] [i_8]))))), (var_2)))) : (arr_26 [i_7] [i_1] [i_0])));
                    }
                } 
            } 
            arr_34 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (short)4124)) ? (((/* implicit */int) (short)-9766)) : (((/* implicit */int) var_0)))));
            var_24 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_0] [i_1])))) ? (min((arr_7 [i_0] [i_1]), (arr_7 [i_0] [i_0]))) : (min((((/* implicit */unsigned int) (short)-9800)), (arr_7 [i_0] [i_1]))));
        }
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_28 [i_0] [i_0] [i_0])), (var_13))) | (((/* implicit */long long int) ((/* implicit */int) ((short) 2602693206U)))))))));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 4) 
        {
            for (int i_11 = 1; i_11 < 18; i_11 += 4) 
            {
                {
                    arr_44 [i_9] [i_10 - 1] [i_11 - 1] [i_10] = ((/* implicit */unsigned long long int) var_6);
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 4) 
                        {
                            {
                                arr_50 [i_9] [i_9] [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) var_14);
                                var_26 = var_0;
                                var_27 += ((/* implicit */_Bool) arr_39 [i_9]);
                                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_48 [i_11] [i_10] [i_11 - 1] [i_10] [i_10 - 1])), (var_14))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)9800)), (arr_46 [i_10 + 1] [i_13] [i_13] [i_13])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
