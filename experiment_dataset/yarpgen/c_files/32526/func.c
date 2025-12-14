/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32526
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 13ULL))) ? (var_7) : (((/* implicit */unsigned int) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 7; i_4 += 3) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned int) arr_12 [(unsigned short)4] [i_1] [i_1] [(unsigned short)8] [i_1] [i_1]);
                                var_21 ^= ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned long long int) arr_8 [i_4] [(_Bool)0] [i_1] [i_4])), (var_12))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */_Bool) (~((~(arr_1 [i_0] [8U])))))) ? ((~(((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_2] [i_1] [(_Bool)0] [i_3])) ? (var_11) : (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4])))))) : (((unsigned int) var_5))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_8);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 8; i_6 += 2) 
                        {
                            {
                                var_23 -= ((/* implicit */short) min((((/* implicit */int) max((arr_9 [i_6 - 2] [i_6 + 1] [i_6 + 2] [i_6] [i_1]), (arr_9 [i_6 - 1] [i_6 - 2] [i_6 + 1] [i_6] [i_1])))), ((+(((/* implicit */int) arr_6 [i_0] [i_0] [1U] [1U]))))));
                                arr_19 [i_0] [i_0] [i_2] [(_Bool)1] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2020412523U)) ? ((-(((((/* implicit */int) (signed char)56)) % (((/* implicit */int) (signed char)65)))))) : (((/* implicit */int) (short)-25751))));
                                arr_20 [i_2] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [5U] [i_1] [i_2] [i_5] [(unsigned short)0] [9U] [4ULL])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) (short)25751))))), (max((var_18), (((/* implicit */unsigned int) (short)-9122))))))));
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */short) ((((/* implicit */_Bool) var_13)) || ((!(((/* implicit */_Bool) 16U))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) (+(var_13)));
                                var_26 = ((/* implicit */_Bool) (signed char)10);
                            }
                        } 
                    } 
                }
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */signed char) ((unsigned long long int) var_7));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            {
                                arr_35 [i_0] [i_10] [(signed char)3] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_25 [(signed char)6] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_10] [i_0] [i_11] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_33 [i_11] [i_10] [i_9] [i_10] [i_9] [i_0] [i_0])))) : (max((((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_10] [i_0])), (3536954403U)))))) ? (((((((/* implicit */int) (signed char)93)) > (((/* implicit */int) (short)-9113)))) ? ((~(((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [(short)5])))) : (((arr_21 [i_0] [i_0] [i_0] [(short)9]) ? (((/* implicit */int) (short)9127)) : (((/* implicit */int) (short)252)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)25754)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))));
                                arr_36 [i_0] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])), ((~(1996234047413431077ULL)))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(var_17)))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (((arr_21 [i_0] [i_0] [(short)2] [i_0]) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), ((-(((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_1])))))))));
                    arr_40 [i_0] = max(((~(((/* implicit */int) arr_5 [i_12] [i_1] [i_0])))), ((~(((/* implicit */int) arr_34 [i_0] [i_0] [i_1] [(signed char)1] [i_12])))));
                    arr_41 [i_0] = ((/* implicit */signed char) (-((~(arr_0 [i_0])))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_3 [i_14]))) || (((/* implicit */_Bool) (-(arr_33 [i_0] [(short)1] [(short)1] [4ULL] [8] [4ULL] [i_14])))))))));
                            arr_47 [i_0] [1LL] [i_14] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_13]))))), ((~(arr_8 [i_0] [i_0] [i_0] [i_14])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min(((short)-25751), (((/* implicit */short) (signed char)-110))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_16)))))) : (var_3))), (((/* implicit */unsigned int) var_2))));
}
