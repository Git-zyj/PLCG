/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31452
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [7U] [i_0] [i_0]))) >= (0ULL)))) >= (((/* implicit */int) (!(var_3))))))), (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) (unsigned char)246)) | (((/* implicit */int) (unsigned char)255)))) : (max((arr_2 [6ULL]), (-44251396)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_16 |= ((/* implicit */unsigned char) ((short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (18446744073709551615ULL))))));
                                arr_11 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31096))) : (arr_0 [i_2])));
                                var_17 = var_14;
                            }
                        } 
                    } 
                } 
                var_18 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((8752009182165117082ULL) < (max((arr_5 [(signed char)6] [i_1] [i_0 + 3] [i_0 + 3]), (arr_7 [8] [i_1] [i_1] [i_1]))))))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((unsigned char) ((unsigned int) ((var_3) ? (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [12U])) : (-8521931292152083109LL))))))));
                arr_12 [i_0] [i_0] [(unsigned char)1] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [(short)5] [(short)5] [(short)5] [i_1])) & (((/* implicit */int) (unsigned char)232))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_20 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (arr_15 [i_5] [i_5] [i_7])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)50067))))) % (2883162283U)));
                    arr_21 [i_7] [i_5] [6U] = max((((44251395) << (((((((/* implicit */_Bool) (unsigned short)21995)) ? (((/* implicit */int) (unsigned short)54214)) : (((/* implicit */int) (unsigned char)255)))) - (54211))))), (min((var_6), (((/* implicit */int) ((unsigned char) var_14))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((min((((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))))) & (((/* implicit */unsigned int) ((int) max((var_10), (((/* implicit */long long int) (unsigned short)248))))))));
}
