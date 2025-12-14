/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29636
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
    var_20 = ((/* implicit */signed char) var_9);
    var_21 = ((/* implicit */long long int) 0U);
    var_22 = ((/* implicit */long long int) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) arr_2 [i_0] [i_0]);
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
        var_24 = ((/* implicit */_Bool) (signed char)-46);
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_25 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_0 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (short i_4 = 2; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] = max((((/* implicit */unsigned int) var_15)), (var_10));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) var_10);
                            arr_16 [i_1] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */long long int) ((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? ((((_Bool)1) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14250))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) | (arr_9 [i_3] [i_3] [i_3]))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 3; i_6 < 15; i_6 += 3) 
                        {
                            arr_19 [i_6] [i_6] [i_1] [i_6] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1]))));
                            var_27 = ((/* implicit */int) (+(var_7)));
                        }
                    }
                } 
            } 
        } 
        var_28 -= ((/* implicit */unsigned char) -5055856858337474081LL);
        var_29 -= ((/* implicit */signed char) arr_6 [i_1] [i_1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_7 = 2; i_7 < 15; i_7 += 2) 
        {
            var_30 = ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_17)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
            var_31 -= ((((/* implicit */_Bool) (signed char)98)) ? (13709333282207260440ULL) : (((/* implicit */unsigned long long int) 2991511328599699882LL)));
            var_32 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 9762667306851545635ULL)) ? (((/* implicit */unsigned long long int) 608955583U)) : (10ULL)))));
            var_33 = ((/* implicit */unsigned char) ((var_11) % (arr_14 [i_1] [i_1] [i_1] [i_1] [i_7])));
        }
    }
    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        arr_25 [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_23 [i_8])))) ^ (((/* implicit */int) ((_Bool) (signed char)60)))))), (min((((var_7) >> (((((/* implicit */int) arr_0 [i_8] [i_8])) - (78))))), (((/* implicit */unsigned int) ((arr_2 [i_8] [i_8]) == (((/* implicit */int) (_Bool)1)))))))));
        var_34 = ((/* implicit */short) (((+(var_8))) <= (((/* implicit */int) var_17))));
        var_35 = ((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-109)));
        var_36 = ((/* implicit */_Bool) var_19);
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        var_37 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)26)) && (((/* implicit */_Bool) 0ULL)))))));
        arr_28 [i_9] = ((/* implicit */short) arr_21 [i_9] [i_9]);
        var_38 = ((/* implicit */short) ((long long int) var_5));
    }
}
