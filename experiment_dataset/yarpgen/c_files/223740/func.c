/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223740
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */short) arr_1 [i_0]);
                            arr_12 [i_2] = ((/* implicit */unsigned int) ((((((var_9) ? (arr_9 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) 4294967269U)))) == (((/* implicit */long long int) (((_Bool)1) ? (arr_4 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15182)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? ((~(arr_4 [i_0] [i_1] [i_2]))) : (arr_6 [i_0])))) : ((((-(arr_0 [i_0]))) ^ (((/* implicit */long long int) arr_2 [i_2] [i_2]))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-6312)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))))) * (((unsigned int) var_9)));
                            arr_14 [i_3] [i_1] = ((/* implicit */long long int) (-(min((((((/* implicit */int) var_0)) << (((/* implicit */int) arr_3 [i_1])))), ((~(((/* implicit */int) (unsigned char)70))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned short i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_5 + 2] [i_5 + 2])) > (((unsigned long long int) (unsigned char)186)))))) : (((((arr_3 [i_4]) ? (arr_15 [i_0] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) << (((/* implicit */int) ((_Bool) var_4)))))));
                            arr_19 [i_5] [i_4] [i_4] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)55)), (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (var_4) : (arr_17 [i_0] [i_4] [i_0] [i_5])))));
                            var_14 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_1] [i_4 + 1] [i_5] [i_4])) ? (((((/* implicit */long long int) var_4)) - (arr_0 [i_0]))) : (((/* implicit */long long int) min((arr_15 [i_4] [i_1] [i_4]), (((/* implicit */unsigned int) (_Bool)1))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_6] [i_7])), (((arr_10 [i_1]) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32512)))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))))))));
                                var_16 = 2020319012;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_9 = 1; i_9 < 20; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        {
                            var_17 = ((((/* implicit */_Bool) min((arr_23 [i_9 + 3] [i_9 + 1] [i_9] [i_9]), (arr_23 [i_9 + 1] [i_9 + 3] [i_9] [i_9])))) ? ((+(((/* implicit */int) (short)461)))) : ((-(arr_23 [i_9 + 3] [i_9 + 2] [i_9] [i_9]))));
                            arr_32 [i_0] [i_1] [i_9] [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 3) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_40 [i_12] [i_13] = max((((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_11] [i_12 + 1] [i_0] [i_13])), (((((unsigned int) (_Bool)1)) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_12 - 1]))))));
                                arr_41 [i_11] [i_11] [i_11] [i_11] [i_13] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [17U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)46625))))) ? (((/* implicit */int) arr_31 [i_0] [i_11] [i_0] [i_0])) : (((/* implicit */int) ((_Bool) arr_3 [i_0])))))));
                                var_18 *= ((/* implicit */_Bool) arr_30 [i_13] [i_0] [i_11] [i_0] [i_0]);
                                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (short)461)), (arr_17 [i_13] [i_11] [i_11] [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((+(arr_9 [i_12 + 1] [i_1] [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_42 [(signed char)13] [(signed char)13] [i_11] [i_11] [i_12] [i_12] [i_13] = ((/* implicit */unsigned char) 937665701U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 17; i_14 += 1) 
    {
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 2; i_16 < 16; i_16 += 2) 
                {
                    for (long long int i_17 = 0; i_17 < 17; i_17 += 3) 
                    {
                        {
                            arr_56 [i_14] [i_15] [i_14] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_30 [i_14] [i_14] [i_16 - 2] [i_17] [i_17])) ? (((/* implicit */int) arr_30 [(unsigned short)1] [i_14] [i_16 - 1] [i_16 - 1] [i_16 - 1])) : (((/* implicit */int) (_Bool)1))))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)2227)))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_15] [i_15 - 1] [i_16] [i_17] [i_16 + 1] [i_15 - 1])) ? (((/* implicit */int) arr_22 [i_14] [i_15] [i_15])) : (((/* implicit */int) arr_38 [i_14] [i_15 - 1] [i_16 - 2] [i_16 - 2])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_18 = 4; i_18 < 16; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 17; i_20 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (_Bool)1)))));
                                var_22 *= ((/* implicit */unsigned int) max((arr_10 [i_20]), ((_Bool)1)));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551610ULL)))) ? (((/* implicit */int) ((_Bool) arr_21 [i_18 - 2] [i_15] [i_15 - 1]))) : (((((/* implicit */int) (short)4096)) << (((((unsigned int) (signed char)-18)) - (4294967261U)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (unsigned long long int i_22 = 1; i_22 < 16; i_22 += 1) 
                    {
                        {
                            arr_70 [i_14] [i_14] [i_14] [i_22 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_28 [i_14] [i_14])), ((~(((/* implicit */int) (short)-7783))))))) ? (((/* implicit */int) (unsigned char)63)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12686)) ? (((/* implicit */int) arr_66 [i_15] [i_14])) : (arr_11 [i_14] [i_14] [i_15 - 1] [i_21] [i_22])))) ? (((/* implicit */int) arr_69 [11U] [i_15] [i_21] [i_14])) : (((((/* implicit */_Bool) arr_26 [i_14] [i_15 - 1] [i_21] [i_21] [(_Bool)1] [i_22])) ? (((/* implicit */int) (short)-444)) : (((/* implicit */int) arr_63 [i_14]))))))));
                            arr_71 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)475))))) ? (((/* implicit */int) (short)4096)) : (((((/* implicit */_Bool) arr_67 [i_22 + 1] [i_15 - 1] [i_15])) ? (((/* implicit */int) arr_67 [i_22 + 1] [i_15 - 1] [i_15 - 1])) : (((/* implicit */int) arr_67 [i_22 + 1] [i_15 - 1] [i_14]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 1) 
                {
                    for (unsigned char i_24 = 0; i_24 < 17; i_24 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */_Bool) ((((long long int) arr_10 [i_15 - 1])) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((arr_60 [i_24] [(unsigned short)4] [i_15]), (arr_58 [i_14] [i_15] [i_23] [i_24]))))))));
                            arr_76 [i_14] [i_15 - 1] [i_23] [i_23] [i_14] = ((/* implicit */_Bool) min((arr_9 [i_14] [i_15] [i_23]), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)4099)), (arr_33 [i_15 - 1] [i_15 - 1] [i_15]))))));
                            var_25 *= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (~(arr_17 [i_14] [16LL] [i_23] [i_23])))) ? ((-(((/* implicit */int) (short)4099)))) : (((/* implicit */int) arr_38 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_25 = 3; i_25 < 15; i_25 += 2) 
                {
                    for (long long int i_26 = 2; i_26 < 14; i_26 += 2) 
                    {
                        {
                            arr_81 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_65 [i_15] [i_15 - 1] [i_15 - 1] [i_15])), ((-(((arr_69 [i_14] [i_15] [i_25] [i_14]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4102))) : (var_3)))))));
                            arr_82 [i_14] [i_14] [i_25] [i_26 - 1] = ((/* implicit */unsigned char) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
}
