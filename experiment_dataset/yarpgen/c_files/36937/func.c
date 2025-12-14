/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36937
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
    var_18 *= ((/* implicit */unsigned long long int) var_9);
    var_19 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((short) arr_1 [i_0 - 1]));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_10 [i_3] [i_3] = ((/* implicit */long long int) var_16);
                        arr_11 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) 2481250176120876497LL);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            var_20 = arr_7 [i_4] [i_4] [i_4] [i_0];
            var_21 = ((/* implicit */unsigned char) var_10);
            /* LoopNest 2 */
            for (long long int i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                for (short i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    {
                        var_22 = ((/* implicit */long long int) var_9);
                        arr_18 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_16))) == (((/* implicit */int) ((arr_0 [i_0 - 1]) == (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                        arr_19 [i_6] [(unsigned char)6] = ((/* implicit */unsigned char) (unsigned short)44654);
                    }
                } 
            } 
            var_23 |= (+(((((/* implicit */_Bool) ((var_14) / (((/* implicit */int) var_6))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)33))))))));
            var_24 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [i_4] [i_4] [i_4] [i_4])) ^ (((/* implicit */int) arr_17 [i_0 + 1] [i_4] [i_4] [i_4] [i_4] [(unsigned char)0]))))));
        }
        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            var_25 *= ((/* implicit */unsigned char) (((((~(((/* implicit */int) (unsigned short)44675)))) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20857)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)43))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (signed char)12)))) : (((/* implicit */int) (unsigned short)20013)))) - (87)))));
            arr_22 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))) & (arr_12 [i_0 + 1]))) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_8])))));
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                arr_28 [i_8] = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
                arr_29 [i_8] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44680))))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_9] [i_0 - 1] [i_0 + 1] [i_0]))) <= (((((/* implicit */_Bool) var_15)) ? (-4484502207943193531LL) : (((/* implicit */long long int) var_7)))))))));
            }
            for (unsigned short i_10 = 1; i_10 < 12; i_10 += 2) 
            {
                var_27 = (~((~(-1))));
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) % (((((/* implicit */_Bool) -767013543)) ? (((/* implicit */int) (short)29575)) : (((/* implicit */int) (_Bool)1)))))))));
                var_29 ^= ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) arr_26 [i_0] [i_8] [i_10] [i_0 + 1])))));
            }
        }
    }
    var_30 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (signed char)91)))))) != (min((((/* implicit */unsigned int) var_8)), (739286637U))))) ? (((((/* implicit */int) ((((/* implicit */int) (unsigned char)52)) >= (((/* implicit */int) (unsigned short)20882))))) >> (((((/* implicit */int) var_13)) + (29527))))) : (((((137438953471LL) > (((/* implicit */long long int) ((/* implicit */int) var_11))))) ? (((((/* implicit */int) var_17)) * (((/* implicit */int) var_17)))) : (((/* implicit */int) ((var_10) || (((/* implicit */_Bool) (signed char)91)))))))));
}
