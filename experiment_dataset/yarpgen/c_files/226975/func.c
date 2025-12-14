/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226975
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (~(((8567041442267882459LL) | (arr_5 [i_1]))))))));
                arr_6 [i_0] = ((/* implicit */_Bool) max((-319901826), (-515215876)));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */short) (((((((+(arr_5 [i_2]))) + (9223372036854775807LL))) >> (((((319901807) >> (((var_11) - (1234139750U))))) - (2499222))))) <= (((/* implicit */long long int) -319901825))));
        var_16 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((4294967271U), (((/* implicit */unsigned int) 319901826))))))) ? (((/* implicit */int) ((-319901807) == (((/* implicit */int) (short)9807))))) : (arr_7 [i_2])));
    }
    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_3 - 2]) == (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (2147483647)))))))) <= (var_11)));
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
        {
            for (int i_5 = 3; i_5 < 19; i_5 += 3) 
            {
                {
                    arr_19 [i_5 - 3] [i_3] [i_3] = ((/* implicit */int) ((signed char) max((min((((/* implicit */int) arr_12 [i_4 - 2] [i_3 - 3])), (319901790))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-103)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_17 = (~(((((((/* implicit */int) (signed char)10)) <= (-1073741824))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 - 2] [i_4 + 2] [i_7 - 1]))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (70368744112128ULL))))));
                                arr_24 [i_3] [i_4] [i_3] [i_4 - 2] [i_7] [i_6] [(unsigned short)12] |= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_2 [i_3 - 3] [i_4 - 2])))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) var_3)) : (arr_2 [(short)1] [i_3]))))))));
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
    }
    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        arr_29 [i_8] [i_8] = ((/* implicit */signed char) arr_26 [i_8]);
        arr_30 [i_8] [(signed char)6] = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)8191), (((/* implicit */unsigned short) max(((short)-16467), (((/* implicit */short) (unsigned char)255)))))))) | ((~(((((/* implicit */_Bool) (short)-1)) ? (-319901824) : (((/* implicit */int) (short)16497))))))));
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned char i_10 = 2; i_10 < 14; i_10 += 3) 
            {
                for (unsigned short i_11 = 1; i_11 < 13; i_11 += 4) 
                {
                    {
                        arr_39 [i_11] = ((/* implicit */short) arr_18 [i_8] [i_9]);
                        var_19 = max((((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) arr_33 [i_9]))))) <= (((((/* implicit */_Bool) arr_36 [i_9] [i_10] [i_11 + 1])) ? (((/* implicit */unsigned long long int) arr_7 [i_11])) : (18446673704965439488ULL)))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(319901810))), (((((/* implicit */int) var_9)) | (((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) var_8)) | (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_0))))))));
    var_21 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1180793559))))) >> (((/* implicit */int) var_6))))), (((((-6014459464135326655LL) + (9223372036854775807LL))) >> (((((/* implicit */int) min((((/* implicit */short) (signed char)-103)), (var_7)))) + (13218)))))));
    var_22 = ((/* implicit */int) (~(var_11)));
}
