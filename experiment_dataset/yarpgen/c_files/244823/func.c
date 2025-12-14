/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244823
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
    var_16 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) var_4);
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) var_8));
        var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_18 *= ((/* implicit */short) (unsigned short)18636);
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((long long int) (unsigned short)39729)))));
                            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25806))) * (var_4))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_4] [i_4 - 1])))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((((/* implicit */_Bool) var_9)) ? (max((var_4), (((/* implicit */unsigned long long int) (unsigned char)233)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_4 - 1])) : (((/* implicit */int) (unsigned short)25819)))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */signed char) arr_17 [i_1] [i_2] [i_1] [i_2] [i_2]);
        }
        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            var_23 = var_1;
            /* LoopNest 2 */
            for (long long int i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                for (long long int i_8 = 2; i_8 < 18; i_8 += 3) 
                {
                    {
                        var_24 = ((/* implicit */long long int) arr_20 [i_1] [i_8] [i_1] [(short)18]);
                        /* LoopSeq 1 */
                        for (int i_9 = 3; i_9 < 17; i_9 += 3) 
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) ((arr_17 [i_1] [i_6] [i_1] [i_6] [i_9]) >> (((((/* implicit */int) arr_1 [i_6])) - (27069)))))))))));
                            var_26 *= ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned short)25832)), (((unsigned int) arr_1 [i_6]))));
                            arr_30 [i_1] [i_7] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_11 [i_7 - 1] [i_8 - 2] [i_9 + 2] [i_9])) % (((/* implicit */int) arr_11 [i_7 + 2] [i_8 + 1] [i_9 - 1] [i_9])))));
                        }
                        var_27 = ((/* implicit */long long int) arr_24 [i_8] [i_8] [i_8] [i_8 + 1]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            arr_34 [i_1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((int) var_12))));
            var_28 = ((/* implicit */int) (!(arr_21 [i_1] [i_10])));
        }
        for (short i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            arr_37 [i_1] [8] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */int) arr_18 [i_11] [i_1]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)10))));
            var_29 = ((/* implicit */int) arr_26 [i_11] [i_11]);
        }
        var_30 = ((/* implicit */int) ((short) (-(((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
        var_31 *= ((/* implicit */unsigned int) var_6);
    }
    var_32 *= ((/* implicit */signed char) (~(((/* implicit */int) var_15))));
}
