/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190446
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    var_18 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))) : (((/* implicit */int) (short)222))))), (var_13)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) max(((short)222), ((short)(-32767 - 1))))) : (((/* implicit */int) (short)(-32767 - 1)))));
                                var_19 -= ((/* implicit */long long int) var_5);
                                var_20 = ((/* implicit */int) arr_8 [i_4] [i_0] [i_0] [i_0]);
                                var_21 = ((/* implicit */short) var_7);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)245)) ? (((/* implicit */int) (short)-32746)) : (((/* implicit */int) (unsigned short)16128))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)22633)), (((((/* implicit */_Bool) (unsigned short)16128)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-32746), ((short)32767)))))))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (min((((/* implicit */unsigned long long int) var_13)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_7)), (var_4)))))))) ? (((min((var_13), (((/* implicit */unsigned int) var_1)))) / (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                                arr_20 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min(((short)234), (((/* implicit */short) (_Bool)1)))))))), (var_10)));
                                var_25 = ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    arr_23 [(unsigned char)12] [21] [i_7] [(short)15] = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) max((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_7])), (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_9))))))) : (min((max((((/* implicit */long long int) arr_11 [i_7] [i_7] [i_1] [i_0])), (var_14))), (((/* implicit */long long int) var_8)))));
                    arr_24 [(unsigned char)8] [(unsigned char)8] [i_1 - 3] [(_Bool)1] = var_16;
                    arr_25 [i_1] [(unsigned char)4] = ((/* implicit */unsigned char) arr_2 [i_0]);
                    var_26 *= ((/* implicit */unsigned char) var_0);
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_1] [(signed char)13])))))) ? (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)49407), (((/* implicit */unsigned short) (signed char)-6)))))) : (var_12)));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    var_28 = ((/* implicit */unsigned char) var_4);
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        for (int i_10 = 4; i_10 < 21; i_10 += 4) 
                        {
                            {
                                arr_37 [i_0] [i_1] [i_8] [i_9] [i_8] [i_10] = ((/* implicit */unsigned char) arr_34 [(_Bool)1] [i_1] [i_1] [16ULL] [i_8] [i_9] [i_10]);
                                var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7))))) ? (((var_3) * (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) (~(max((((var_1) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (min((((/* implicit */long long int) var_4)), (var_6)))))));
}
