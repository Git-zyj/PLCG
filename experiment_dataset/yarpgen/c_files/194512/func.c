/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194512
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
    var_19 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_13 [i_4] [i_3 - 1] [i_4])) % (arr_10 [i_0] [i_1 - 1] [i_3 - 2] [i_4 - 2]))) == (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3 - 2]))));
                                arr_15 [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_2] [i_1 - 1] [i_2] [i_2])) ? (((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) <= ((-(((/* implicit */int) (unsigned char)72)))))))));
                                arr_16 [i_2] [i_4] [i_2] [10ULL] [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (((unsigned long long int) max((((/* implicit */unsigned long long int) arr_9 [i_4] [i_4 - 2] [i_3] [i_1] [i_1] [19])), (15ULL)))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)30242)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (-1855680613)));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 3; i_5 < 20; i_5 += 3) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (_Bool)1))));
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)0))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                            {
                                var_23 = ((/* implicit */unsigned short) ((unsigned char) min((arr_18 [i_3] [i_3] [i_1 + 1] [18] [i_1 - 1] [i_0]), (((/* implicit */int) arr_21 [i_3 + 1] [i_2] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_0])))));
                                arr_23 [i_6] [11ULL] [(unsigned char)8] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((unsigned short) 18446744073709551601ULL));
                                var_24 = ((/* implicit */_Bool) ((var_0) >> (((((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_0])) + (122)))));
                            }
                            var_25 ^= ((/* implicit */unsigned char) (!((_Bool)1)));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)90)) ? (var_6) : (var_0)))) ? (((/* implicit */int) var_18)) : (arr_17 [i_1 + 1] [2ULL] [i_0] [i_1] [i_0] [(unsigned char)2]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 4; i_7 < 11; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned char i_9 = 2; i_9 < 10; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_10] [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_8])) & (((/* implicit */int) var_5))));
                        var_28 = ((/* implicit */unsigned char) var_7);
                    }
                    var_29 = arr_3 [i_7 - 3];
                    var_30 = (unsigned char)120;
                }
            } 
        } 
    } 
}
