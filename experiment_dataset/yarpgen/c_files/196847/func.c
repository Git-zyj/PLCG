/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196847
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)109)) * (((/* implicit */int) var_5))))))) ? ((+(arr_0 [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_11 [i_2] [i_1] [(signed char)17] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) var_12)));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_11)))))) != (((unsigned long long int) var_14))));
                            var_22 = (short)18222;
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_2 - 1]))) <= (var_11))))));
                            var_24 = ((/* implicit */unsigned long long int) var_3);
                            var_25 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)-5))))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 4) 
                        {
                            arr_16 [i_0] [i_0] [i_2] = ((/* implicit */short) (~(((/* implicit */int) (short)32762))));
                            arr_17 [i_0] [(short)4] [(short)4] [i_0] [(short)16] [i_2] = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) var_4))) >= (((unsigned long long int) var_0))))) > (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_17))))), ((unsigned char)147)))));
                        }
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_3 [i_0] [i_3]))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                    {
                        arr_22 [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_5 [(short)2] [i_2] [i_2 - 1] [i_2])) & (((/* implicit */int) arr_20 [i_0 - 3] [i_2 - 1]))))) < (((((/* implicit */long long int) ((/* implicit */int) var_3))) + (min((((/* implicit */long long int) arr_5 [i_7] [i_2] [i_0] [i_0])), (var_1)))))));
                        var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) (short)-18223))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) << (((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_0] [i_2] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)18220)))) - (25839)))))) < (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)18205))))) * (var_13)))));
                        var_29 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0] [i_0] [i_7])))));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((var_19) << (((var_8) - (18134171222960202299ULL)))))) * (max((arr_4 [i_7] [i_1] [i_0] [20ULL]), (((/* implicit */unsigned int) (unsigned char)36)))))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_2] [i_0] [i_0] [(short)8] = ((/* implicit */short) arr_0 [i_0]);
                                var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) ((_Bool) var_9))) > (((/* implicit */int) var_17)))))));
                                var_32 |= ((/* implicit */unsigned short) var_14);
                                var_33 = ((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((((long long int) (short)-18247)) + (18252LL)))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned long long int) var_2);
                }
            } 
        } 
    } 
    var_35 = var_8;
    var_36 = ((/* implicit */short) (~(((/* implicit */int) var_6))));
}
