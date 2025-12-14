/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232893
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
    var_10 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_2)), (min((var_6), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_11 += (!(((/* implicit */_Bool) arr_2 [i_1] [i_1 - 2])));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (+(min((((/* implicit */long long int) arr_6 [i_1 + 2] [i_0] [i_0])), (((arr_7 [i_0] [i_0]) ^ (((/* implicit */long long int) 2141056093U)))))))))));
                    var_13 = var_6;
                    var_14 *= ((/* implicit */unsigned short) arr_8 [i_2] [i_1]);
                }
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((unsigned short) arr_6 [i_0] [i_1] [i_3])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) var_1);
                        /* LoopSeq 1 */
                        for (short i_5 = 3; i_5 < 13; i_5 += 4) 
                        {
                            arr_19 [i_3] [i_3] [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)127)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3] [i_0 - 2])))))));
                            var_17 += ((/* implicit */unsigned int) (_Bool)1);
                            var_18 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_9)))) | (((/* implicit */int) ((_Bool) arr_14 [i_4] [i_3] [i_1 + 2])))));
                            arr_20 [i_0] [i_3] [i_0] [i_0 - 1] [i_0] = ((arr_12 [i_3] [i_4] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5 + 2] [i_5] [i_5]))));
                        }
                        arr_21 [i_3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_9))))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((unsigned long long int) arr_3 [i_1] [i_0 + 1]))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */int) arr_9 [i_0 + 4] [i_0 + 4] [i_0]);
                            arr_26 [i_6] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) ((signed char) 2141056094U));
                        }
                    }
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((unsigned int) arr_3 [i_1 + 2] [i_1 + 2])) >= (arr_12 [i_3] [i_1] [i_0]))))));
                }
                for (unsigned char i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    var_22 &= ((/* implicit */long long int) arr_12 [i_1] [i_1] [i_0]);
                    arr_29 [i_0] = ((/* implicit */short) ((unsigned short) max((arr_16 [i_7] [i_0 + 4] [i_7 - 1] [i_7] [i_1]), (((/* implicit */unsigned char) (signed char)112)))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_7 - 1] [i_7 + 1])) / (((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_0 [i_7 - 1] [i_7 - 1])))))))));
                    /* LoopSeq 4 */
                    for (short i_8 = 1; i_8 < 13; i_8 += 3) /* same iter space */
                    {
                        arr_33 [i_0] [i_1 - 2] [i_7] [i_8 + 2] = ((/* implicit */long long int) var_7);
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_1]))) >= (var_0)))))))));
                        arr_34 [i_0] [i_0] = (+(min((((/* implicit */unsigned long long int) 2362214827U)), (((unsigned long long int) 271596861)))));
                    }
                    for (short i_9 = 1; i_9 < 13; i_9 += 3) /* same iter space */
                    {
                        arr_37 [i_9] [i_9] [1] [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)79))));
                        arr_38 [i_9] = ((/* implicit */unsigned char) var_6);
                        /* LoopSeq 1 */
                        for (long long int i_10 = 1; i_10 < 13; i_10 += 2) 
                        {
                            arr_42 [i_9] [9LL] [9LL] [i_10] [i_10] [i_9] = ((/* implicit */int) min((max((arr_12 [i_1 + 3] [5] [i_9]), (((/* implicit */unsigned int) (signed char)-101)))), (((min((((/* implicit */unsigned int) (short)32736)), (2141056077U))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_9] [i_9 + 2] [i_9 + 1])) * (((/* implicit */int) arr_28 [i_0])))))))));
                            arr_43 [i_9] [i_9] = ((/* implicit */long long int) ((short) max((((/* implicit */unsigned long long int) arr_14 [i_0 + 3] [i_7 + 1] [i_10 - 1])), (var_8))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */unsigned int) (+((+(((/* implicit */int) var_2))))))) ^ (2153911202U))))));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_23 [i_0] [i_1] [i_9] [i_7 - 1] [2] [i_9 - 1] [i_1])))) != (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))))));
                        }
                    }
                    for (short i_11 = 1; i_11 < 13; i_11 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (~(min((((/* implicit */long long int) (~(0)))), (var_3))))))));
                        arr_46 [i_1] [10] = (~(((/* implicit */int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5557245000486847019LL))))))))));
                    }
                    for (short i_12 = 1; i_12 < 13; i_12 += 3) /* same iter space */
                    {
                        arr_50 [i_12] [14LL] [14LL] [i_12] = ((/* implicit */short) ((int) ((((/* implicit */int) (unsigned char)255)) >> (((/* implicit */int) ((_Bool) 262128LL))))));
                        var_28 = ((/* implicit */int) arr_7 [i_1] [i_1]);
                        var_29 = ((/* implicit */short) (~(min((var_8), (((/* implicit */unsigned long long int) (unsigned char)204))))));
                    }
                }
                for (short i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (short)419))));
                    var_31 = ((/* implicit */unsigned char) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-12704)) && (((/* implicit */_Bool) arr_31 [i_13] [i_13] [i_1 + 1] [i_1] [i_0])))))) : (min((((/* implicit */long long int) var_6)), (var_0)))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_14 = 2; i_14 < 21; i_14 += 2) 
    {
        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            {
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) 2153911203U))));
                var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_15] [i_15] [i_14]))) < (((unsigned int) arr_57 [i_14] [i_14] [i_14])))))));
            }
        } 
    } 
    var_34 = ((/* implicit */short) max((((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14005))))), ((((+(((/* implicit */int) (short)-1733)))) > (((/* implicit */int) var_9))))));
}
