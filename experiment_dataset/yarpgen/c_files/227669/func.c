/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227669
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
    var_16 = ((/* implicit */long long int) (~(var_6)));
    var_17 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0 + 1] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0 + 1] [i_0]);
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    var_18 = ((/* implicit */long long int) 18446744073709551615ULL);
                    arr_8 [i_0] [i_1] [i_0] = (+(min((var_13), (((/* implicit */int) var_3)))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) ^ ((~(max((var_13), (((/* implicit */int) var_3))))))));
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) var_8);
                }
                for (long long int i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
                {
                    arr_12 [i_0 - 1] [i_0 - 1] |= ((((/* implicit */_Bool) arr_2 [i_3 + 2])) ? (((/* implicit */int) ((short) 17101469935834072818ULL))) : (((/* implicit */int) ((signed char) 13ULL))));
                    var_20 ^= max((9223372036854775807LL), (((((/* implicit */_Bool) (-(arr_3 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_1 [i_1] [i_1]))));
                    arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_3] [i_3]))) : (var_10)))) ? (min((var_8), (var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1])))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -3926205734596549489LL)))) - (((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) var_9))))) : (((((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])) - (var_10)))))));
                }
                /* vectorizable */
                for (long long int i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
                {
                    arr_17 [i_0] [i_4] [i_4] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1 - 2] [i_1]))) == (var_11));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((_Bool) 3926205734596549490LL))));
                    arr_18 [i_0] [i_0] [i_1 + 1] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_1 - 2] [i_0 + 1]))));
                }
                for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 22; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */int) ((unsigned char) ((3061128347U) == (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)11157), (((/* implicit */unsigned short) (_Bool)1)))))))));
                        arr_24 [i_6 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
                        var_24 = ((/* implicit */signed char) var_12);
                        var_25 ^= ((min((((/* implicit */long long int) (unsigned short)8176)), ((-9223372036854775807LL - 1LL)))) - ((+(var_14))));
                    }
                    arr_25 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            {
                                arr_32 [i_0 - 1] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_7]))))), (((((/* implicit */_Bool) (unsigned char)199)) ? (2147483644) : (((/* implicit */int) (unsigned short)255)))))));
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_7] [i_7])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [i_1 - 2])))))) ? ((~(((/* implicit */int) arr_30 [i_7] [i_7])))) : ((~(((/* implicit */int) arr_30 [i_7] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            {
                                arr_39 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) min((min((4ULL), (((/* implicit */unsigned long long int) arr_27 [i_0 + 1])))), (((/* implicit */unsigned long long int) ((unsigned int) max(((short)0), (((/* implicit */short) arr_26 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1]))))))));
                                var_27 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) (~(var_13)))))));
                            }
                        } 
                    } 
                }
                arr_40 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_1] [i_1 - 2] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(var_6))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_6)))))) ? ((-(18446744073709551603ULL))) : (((/* implicit */unsigned long long int) var_5))));
}
