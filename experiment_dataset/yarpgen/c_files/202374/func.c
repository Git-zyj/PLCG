/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202374
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
    var_14 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 |= ((/* implicit */long long int) (~((-(arr_0 [i_0] [i_0])))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)12)) >= (((/* implicit */int) arr_1 [i_0])))) ? (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) -4494889280885065835LL)))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)235)))), (max((5091152726377824265ULL), (((/* implicit */unsigned long long int) var_11)))))))))));
        var_17 = ((arr_0 [i_0] [i_0]) << (((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) - (10758929210981247073ULL))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */int) var_12);
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_20 = ((/* implicit */int) max((var_20), (max((((((/* implicit */int) arr_2 [i_1] [i_1])) << (((((/* implicit */int) arr_2 [i_1] [i_1])) - (77))))), (((/* implicit */int) var_4))))));
        var_21 ^= (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)97)) == (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_22 *= ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]);
            arr_6 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((var_11) | (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) max(((unsigned char)97), ((unsigned char)97))))));
            arr_7 [i_1] [i_2] = ((/* implicit */unsigned char) arr_2 [i_2] [i_2 + 1]);
            var_23 = ((/* implicit */_Bool) 11603425259262418533ULL);
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_11 [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)158)) << (((((/* implicit */int) (unsigned char)78)) - (57)))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_3])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (unsigned char i_5 = 2; i_5 < 14; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80))))))))));
                            var_26 = ((/* implicit */signed char) var_11);
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_5 - 2] [i_3] [i_4] [i_5] [i_6] [i_1])) ? (arr_20 [i_5 - 2] [i_1] [i_4] [i_5 - 2] [i_6] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97)))));
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 1) 
        {
            {
                var_28 += (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
                arr_25 [i_8 - 2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) arr_24 [i_7] [i_8 + 1] [i_8 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_8 - 2]))) : (4786182953081562200ULL)))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) var_0);
}
