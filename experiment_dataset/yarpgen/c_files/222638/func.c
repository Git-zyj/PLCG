/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222638
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    var_17 |= ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-19566)));
                    var_18 = ((/* implicit */short) arr_0 [(_Bool)1] [i_0]);
                    var_19 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((var_12) + (1113539671039711140LL)))))) ? (((unsigned long long int) var_10)) : (((((/* implicit */_Bool) arr_0 [13] [13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_2])))))) ? ((+(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2 + 1])))))));
                }
                /* vectorizable */
                for (long long int i_3 = 1; i_3 < 21; i_3 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_3 - 1] [i_3 + 2])) ? (((((/* implicit */_Bool) arr_8 [19U] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)19565)) : (((/* implicit */int) (unsigned char)31)))) : (((/* implicit */int) (short)19586))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_3])) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-19566))))) : ((+(-9223372036854775806LL)))));
                }
                for (long long int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (short i_5 = 3; i_5 < 23; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((-(arr_6 [i_0] [i_1] [i_5]))))))));
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)19582))) ? ((+(281474976710655LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0])))))) ? (3490680649111612390LL) : (((/* implicit */long long int) 4291471986U)));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 23; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_13 [i_6] [i_1] [(unsigned char)0] [i_6] [i_1]))))) ? (((((/* implicit */int) arr_15 [2LL] [i_1] [i_1] [i_1])) - (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_12 [10LL] [i_1] [i_1]))));
                        var_25 = (+(var_1));
                        var_26 = ((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1))))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_27 += arr_0 [i_4] [i_1];
                        var_28 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_13 [i_0] [i_1] [i_4] [i_4] [i_1]))) ? (((/* implicit */int) (!(var_16)))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)6)), ((short)-1))))))) : ((+((+(var_5)))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0ULL))))), (max((((/* implicit */unsigned int) arr_19 [i_4 + 3])), (var_11)))));
                        var_30 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (short)10289)))));
                    }
                    var_31 = ((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1])) ? (arr_1 [i_4]) : (((/* implicit */unsigned long long int) -1219634631))))) || (((/* implicit */_Bool) (short)19556)))))) : (((long long int) min((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_20 [i_0] [i_0] [i_1] [i_4 + 3] [i_0])))));
                    var_32 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_4 + 3]))))) ? (arr_7 [i_4 + 2] [i_1]) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_17 [i_0] [i_0])), (var_11))))))), (max((((/* implicit */unsigned long long int) ((short) arr_4 [i_0]))), (max((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_5)))))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 3; i_10 < 23; i_10 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (-(var_7))))));
                                var_34 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))) - (var_12)));
                                var_35 = ((/* implicit */unsigned long long int) (-((((+(-1LL))) & (((/* implicit */long long int) ((/* implicit */int) (short)-19593)))))));
                            }
                        } 
                    } 
                }
                var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((long long int) ((short) ((short) var_5)))))));
                var_37 = ((/* implicit */short) 18446744073709551593ULL);
            }
        } 
    } 
    var_38 = ((/* implicit */int) var_6);
}
