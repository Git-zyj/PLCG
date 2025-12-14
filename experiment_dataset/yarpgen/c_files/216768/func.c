/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216768
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [i_0]))))) < (var_5)));
        var_16 *= 2928401456U;
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_17 = ((arr_0 [i_1]) ? (((/* implicit */int) ((signed char) arr_4 [i_1] [i_1]))) : (((((/* implicit */int) var_12)) >> (((((/* implicit */int) arr_6 [i_1] [i_1])) - (189))))));
        arr_8 [i_1] [i_1] = (-(((/* implicit */int) (signed char)-55)));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_1])) % (((int) var_11))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */long long int) (+(arr_14 [i_1] [21] [21])));
                        arr_19 [i_4] [(unsigned short)7] [i_2] [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
                        arr_20 [i_1] [i_2] = ((/* implicit */_Bool) (~(-1954057698)));
                        arr_21 [i_2] [i_4] = ((/* implicit */_Bool) ((1890598885U) - (((/* implicit */unsigned int) 1370747849))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
    {
        arr_24 [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_5]))));
        arr_25 [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) (-(((/* implicit */int) (short)28424))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))) + (2427119162U))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)69)) > ((-(((/* implicit */int) (short)30019)))))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (short i_7 = 2; i_7 < 20; i_7 += 3) 
            {
                {
                    var_20 += ((((/* implicit */_Bool) arr_18 [i_5] [i_6])) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)15)) + (((/* implicit */int) (_Bool)1))))) % (max((var_5), (16893343997718542333ULL)))))));
                    arr_32 [(unsigned short)16] [i_6 + 1] [(unsigned short)16] [i_6 + 1] = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_5]))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_5] [i_5])) ? (((((/* implicit */int) ((_Bool) (signed char)22))) ^ ((~(-593938679))))) : (((/* implicit */int) arr_30 [(short)1] [i_6 + 1])))))));
                    arr_33 [i_7] [i_6 + 1] [i_5] = ((/* implicit */short) min((((((/* implicit */long long int) 1281025692)) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64564))) : (1004839384351371017LL))))), (((/* implicit */long long int) arr_1 [i_7]))));
                    arr_34 [i_7 + 2] = ((/* implicit */_Bool) (short)14259);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
}
