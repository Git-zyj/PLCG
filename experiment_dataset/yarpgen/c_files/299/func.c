/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/299
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_16))));
                        arr_11 [i_0] [i_1] = ((/* implicit */_Bool) arr_7 [i_1] [i_2]);
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_9 [i_1] [i_2] [i_3]))));
                    }
                } 
            } 
        } 
        arr_12 [(_Bool)1] = ((/* implicit */signed char) (unsigned short)7);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_5 = 1; i_5 < 11; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                for (unsigned int i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) var_15);
                            var_21 = ((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((arr_25 [i_8] [11U] [i_6] [i_5 - 1] [i_4]), (var_4)))) : (((/* implicit */int) arr_23 [i_5])))))));
                        }
                        arr_26 [i_5] [i_4] [i_5] [i_6] [i_7 + 4] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)23040)) && (((/* implicit */_Bool) 10641353309404137660ULL))));
                        arr_27 [i_6] [i_5] [i_7] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_11)))) && ((!(((/* implicit */_Bool) arr_19 [i_4] [i_5])))));
                        arr_28 [i_5] = ((/* implicit */short) arr_15 [i_5] [i_5]);
                    }
                } 
            } 
            arr_29 [i_5] = ((/* implicit */unsigned long long int) ((-6487504542362615605LL) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_5 + 3])))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) arr_23 [i_9]);
            arr_32 [(short)9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (var_12) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)26723))))))) ? (((((/* implicit */int) arr_17 [i_9] [i_4])) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29769))))))) : (((/* implicit */int) (unsigned char)96))));
            var_23 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-116)))) ? (min(((+(var_13))), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6487504542362615604LL)) ? (((/* implicit */int) arr_19 [i_4] [(unsigned char)10])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
        }
        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
        {
            arr_35 [i_10] = ((/* implicit */unsigned char) arr_22 [i_4] [(unsigned short)2] [i_10]);
            var_24 = ((/* implicit */_Bool) max((arr_15 [i_10] [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_6)))) ? (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_15)) : (var_9)))) : (6487504542362615604LL))))));
            var_25 = ((/* implicit */signed char) var_6);
        }
        var_26 = ((/* implicit */short) max((var_26), (arr_25 [(short)4] [i_4] [i_4] [i_4] [i_4])));
    }
    var_27 = ((/* implicit */unsigned char) var_17);
    var_28 = ((/* implicit */signed char) (unsigned short)26723);
    var_29 = ((/* implicit */unsigned int) ((int) min((var_5), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))))))));
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_1)));
}
