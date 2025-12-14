/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200165
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) (signed char)-67);
        var_19 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_0 [i_0]))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (arr_3 [i_0]) : (arr_3 [i_0])));
        var_21 = ((/* implicit */short) arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_22 = ((/* implicit */long long int) (short)-2048);
            var_23 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (var_17)))));
            var_24 = ((/* implicit */unsigned char) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-120)));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_4])))) & (arr_17 [i_5] [i_2] [7LL] [7LL] [i_5])));
                            var_26 = ((/* implicit */int) (short)26190);
                            arr_20 [i_5] [i_4] = ((/* implicit */short) ((long long int) var_15));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_1] [i_6]))))) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_12 [i_1] [i_6])), (arr_18 [i_6] [i_1]))))) : (((var_13) % (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_1]))))))))))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    {
                        var_28 *= ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_8] [5U] [5U] [i_8] [i_1])) ^ (((/* implicit */int) arr_19 [i_6] [i_7] [i_7] [i_8] [i_6]))));
                        var_29 *= ((/* implicit */unsigned int) (+(((long long int) (unsigned short)45674))));
                    }
                } 
            } 
            var_30 = var_3;
        }
        arr_29 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned char) (signed char)-87)), (arr_11 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))));
        arr_30 [i_1] [i_1] = ((/* implicit */int) var_5);
        arr_31 [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_12 [i_1] [i_1])) ? (((/* implicit */int) arr_18 [i_1] [i_1])) : (((/* implicit */int) var_3))))));
        arr_32 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned int) arr_14 [i_1] [i_1] [i_1] [i_1])), (arr_13 [i_1] [i_1] [i_1] [i_1]))));
    }
    var_31 = (unsigned short)65535;
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_3))) || (((/* implicit */_Bool) ((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_2))))))));
}
