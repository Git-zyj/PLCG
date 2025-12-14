/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209379
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
    var_10 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_1)), (var_4))) << (((2659442704095873576ULL) - (2659442704095873557ULL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_12 = arr_7 [i_0] [i_1] [0ULL] [i_2];
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((arr_0 [i_1 + 1]) < (((/* implicit */unsigned long long int) var_5)));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            var_14 = var_3;
                            var_15 = ((/* implicit */unsigned short) ((_Bool) arr_12 [i_0] [i_4] [7U] [7U] [i_4]));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) arr_11 [i_3 - 1] [(unsigned short)3] [i_2] [i_2] [i_1 + 1])) * (((((((/* implicit */int) (short)-9321)) + (2147483647))) >> (((65535) - (65508))))))))));
                            var_17 = ((/* implicit */unsigned int) arr_6 [i_1 + 1] [i_1] [11U] [i_1]);
                        }
                        for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_1] [i_0] [5ULL]))));
                            var_19 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (+(808366974)))) : (((((/* implicit */_Bool) -1)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1))))));
                            var_20 = ((/* implicit */short) (+(arr_0 [i_0])));
                        }
                    }
                    var_21 = ((((/* implicit */_Bool) arr_3 [i_2] [i_0])) ? (((((/* implicit */_Bool) 9223372036850581504ULL)) ? (((/* implicit */unsigned long long int) 808366974)) : (var_0))) : (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_1 + 1] [i_0])) ? (arr_19 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1]) : (var_7))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 808366974)) ? (-2011925599) : (arr_13 [i_7] [0ULL] [i_7] [(_Bool)1] [i_7])))) : (arr_1 [i_7])));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11336607271046508608ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55248))) : (5837582968291398620ULL)));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [(unsigned short)16] [i_7] [i_7] [i_7] [i_7] [12ULL] [i_7])) || (((/* implicit */_Bool) var_2))))))))));
            var_25 = ((/* implicit */short) var_9);
        }
        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_9] [i_7]))) : ((~(2450882300U)))));
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((short) ((((/* implicit */_Bool) 1342746639122508534ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))))));
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [i_9] [i_7] [i_7] [i_9])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || ((_Bool)1)))) : (((/* implicit */int) (short)-23522))));
            var_29 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_24 [i_7])) != (-65536)))));
        }
    }
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (short)1)) ? (((((((/* implicit */_Bool) var_0)) ? (8232570583208847791ULL) : (4777809327769530806ULL))) + ((-(var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 7116343659803159149ULL)))))))));
}
