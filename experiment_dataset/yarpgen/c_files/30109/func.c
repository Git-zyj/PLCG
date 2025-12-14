/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30109
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((short) 959680966942505328ULL))) ? (17487063106767046288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3968))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [(signed char)3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3969))) : ((-(17487063106767046287ULL))))) > (((((/* implicit */_Bool) 4294967287U)) ? (max((arr_1 [(signed char)8]), (((/* implicit */unsigned long long int) -7555512417050910658LL)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_0) - (764300422U)))))))))))));
        var_18 += ((/* implicit */unsigned char) 17487063106767046299ULL);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (short)3968))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (var_13)));
                    var_20 = ((/* implicit */signed char) var_9);
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_21 += (short)-25865;
        arr_13 [(short)6] = ((/* implicit */short) ((((/* implicit */long long int) (+((~(var_15)))))) > (5995799845094900700LL)));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)3956))) | (min((((/* implicit */long long int) arr_11 [i_4])), (arr_15 [i_5] [i_4] [i_5])))));
            arr_16 [i_4] [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 17487063106767046287ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)0))))), (((long long int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_15))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [9])) ? (var_12) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_4] [i_4])) ^ (((/* implicit */int) arr_12 [i_4] [i_5])))))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            arr_19 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_6]))) - (arr_15 [i_6] [i_6] [i_6])));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    var_25 &= ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_8] [i_8])) >= (((/* implicit */int) arr_14 [i_8] [8LL]))));
                    var_26 = ((/* implicit */long long int) (unsigned short)46399);
                    arr_24 [i_4] [i_6] [(_Bool)1] [i_8] [i_4] [i_7] = ((/* implicit */signed char) (~(-1)));
                }
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19136)) | (((/* implicit */int) (short)-5864))))) ? (((/* implicit */unsigned long long int) -7555512417050910658LL)) : (((unsigned long long int) arr_15 [i_7] [i_6] [i_7]))));
            }
        }
    }
    for (long long int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_10 = 2; i_10 < 18; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) var_5);
                    var_29 = ((/* implicit */_Bool) max((var_7), (((/* implicit */short) ((_Bool) max((((/* implicit */unsigned short) (unsigned char)205)), (arr_12 [i_10 - 1] [i_10])))))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3355292515425810267LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2176443729U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [(_Bool)1] [(short)7] [i_9])) && (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_7)))))));
    }
}
