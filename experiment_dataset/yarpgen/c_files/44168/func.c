/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44168
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)187)), (var_17)));
    var_20 &= (-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), (min((var_17), (((/* implicit */unsigned short) var_16))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) 1406874278);
                var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) : (min((((/* implicit */unsigned int) ((((/* implicit */long long int) 267417959U)) >= (var_13)))), (((((/* implicit */_Bool) arr_3 [4ULL])) ? (((/* implicit */unsigned int) var_6)) : (var_4)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    var_23 += ((/* implicit */int) (signed char)-1);
                    var_24 += ((/* implicit */long long int) (((~(((/* implicit */int) arr_3 [(unsigned char)2])))) - (min((((/* implicit */int) (unsigned char)0)), (max((606956223), (((/* implicit */int) var_5))))))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    var_25 = ((/* implicit */unsigned short) arr_2 [i_1] [i_3]);
                    var_26 = ((/* implicit */long long int) min((var_26), ((+(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_0]))) : (var_3)))))));
                }
                for (signed char i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) min((min((min((2581184676631769582LL), (((/* implicit */long long int) arr_2 [(unsigned char)18] [i_1])))), (min((-6977651928174792884LL), (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))))))));
                    var_28 = ((/* implicit */signed char) max((var_15), (((/* implicit */long long int) (signed char)-83))));
                    var_29 ^= ((/* implicit */unsigned short) 62U);
                    var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((signed char)1), (arr_0 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967234U)))))));
                }
                for (signed char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                {
                    arr_16 [i_5] [i_5] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (unsigned char)27))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) max((var_32), (var_16)));
                                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (signed char)6))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
