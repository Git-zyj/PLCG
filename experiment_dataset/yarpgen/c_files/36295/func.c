/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36295
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
    var_14 |= ((/* implicit */unsigned long long int) var_13);
    var_15 = ((/* implicit */unsigned long long int) ((long long int) var_0));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) arr_0 [19ULL] [19ULL]))))), (((/* implicit */int) max((var_7), (((/* implicit */short) arr_2 [i_0]))))))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    var_17 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((arr_7 [i_2] [i_1] [i_0] [(unsigned short)16]) ? (3729011360U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))), ((~(max((arr_4 [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_6 [i_0]))))))));
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1]))));
                    var_19 = ((/* implicit */int) var_2);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) 3729011379U)), (8504343536812703182ULL)));
                                var_21 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) var_0)), (7303407313854038650ULL))) : ((-(17106705547049707705ULL))))), (((/* implicit */unsigned long long int) 565955920U))));
                                var_22 ^= ((/* implicit */unsigned long long int) ((min((arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]), (((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4])))) > ((((_Bool)0) ? (((/* implicit */int) (short)2190)) : (((/* implicit */int) (signed char)89))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                {
                    arr_15 [(unsigned short)17] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 2119187698))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (-812647412)))) : (((((/* implicit */_Bool) 3729011379U)) ? (var_2) : (13507774581093447700ULL)))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((max((12178284481250927543ULL), (13542779584356593366ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [16U])))))))))));
                    var_23 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned long long int) -996242804)), (arr_4 [i_0] [i_0]))))), (((unsigned long long int) arr_10 [i_5] [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (int i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((unsigned long long int) var_12));
                                var_25 = ((/* implicit */unsigned int) (+(min((var_9), (((/* implicit */long long int) max((arr_21 [i_0] [i_0] [i_5] [i_5] [i_5]), (((/* implicit */int) (unsigned char)43)))))))));
                                var_26 *= ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((unsigned char) max((arr_10 [i_0] [3] [i_0] [(unsigned short)11] [i_0]), (((/* implicit */unsigned char) var_0))))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) max((arr_5 [(unsigned char)6] [i_5] [i_5]), (((/* implicit */unsigned int) var_0))))), (max((((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [i_0] [i_0] [i_5])), (13847360668429286177ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 19; i_9 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((int) (~(((var_10) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) var_1)))))));
                                var_28 = ((/* implicit */unsigned long long int) (~(((long long int) arr_20 [i_9] [i_9] [i_9] [i_9] [i_9 - 2]))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    arr_34 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_1] [7] [13U])) : (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_10] [i_1] [i_0] [i_0]))) : (601111279U)))))) < (((/* implicit */long long int) min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) max((arr_10 [i_0] [i_1] [i_0] [i_10] [i_10]), (var_8)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 18; i_11 += 2) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_29 ^= ((/* implicit */unsigned char) ((unsigned int) arr_9 [i_12] [i_10] [i_10] [i_1]));
                                arr_39 [i_0] [i_1] [i_10] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1]))))) ? (((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0] [16]) ? (((/* implicit */int) arr_1 [i_10])) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((var_4) % (((/* implicit */long long int) 2132777240))))) : ((((_Bool)1) ? (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)26457)) ? (((/* implicit */int) (_Bool)0)) : (-1762041393))) ^ (((/* implicit */int) arr_36 [i_11] [i_10] [i_1] [(_Bool)1])))))));
                                var_30 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (unsigned char)99)), (((var_3) - (((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_11 + 2] [i_11 + 2] [i_11 + 2]))))))) ^ (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_36 [i_0] [i_1] [12LL] [(unsigned short)4])) ? (((/* implicit */int) var_0)) : (arr_14 [8ULL] [i_1] [(unsigned short)16] [(unsigned short)16]))))))));
                                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) var_7))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) 3987296304322135868ULL))));
                                var_33 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))) > (((((/* implicit */_Bool) (unsigned char)171)) ? (arr_26 [i_0] [i_1] [i_10] [i_13] [i_1] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_14] [i_0] [i_0] [i_1] [i_0]))))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    var_34 = ((/* implicit */_Bool) var_6);
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21112)) ? (((/* implicit */int) arr_6 [i_15])) : (arr_43 [i_0] [i_17] [i_15] [i_16] [i_0]))));
                                var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_11)) <= (((/* implicit */int) (unsigned char)162))))))));
                                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (11238020243093375665ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                    var_38 -= ((/* implicit */long long int) (+(((/* implicit */int) (!(arr_3 [i_0] [(unsigned char)5]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 4) 
                        {
                            {
                                arr_60 [i_0] [1U] [(_Bool)1] [i_19] = ((/* implicit */_Bool) ((int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_1]));
                                arr_61 [(unsigned char)17] [i_0] [(unsigned char)17] [i_1] [14U] [i_18] [i_18] = ((/* implicit */long long int) 18060708197316295354ULL);
                            }
                        } 
                    } 
                }
                arr_62 [i_0] = ((/* implicit */_Bool) 7347199153603778073ULL);
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (signed char i_20 = 0; i_20 < 19; i_20 += 1) 
    {
        for (unsigned int i_21 = 0; i_21 < 19; i_21 += 4) 
        {
            {
                var_40 = ((/* implicit */short) arr_63 [i_20]);
                var_41 -= ((/* implicit */unsigned int) ((max((var_10), (arr_8 [i_20] [i_21] [(unsigned char)4] [i_20]))) ? (((min((((/* implicit */long long int) arr_56 [i_20] [(unsigned char)16] [(unsigned char)16] [(unsigned char)16] [i_21] [i_20])), (-5438062022068664566LL))) & (((/* implicit */long long int) -1360693080)))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_20] [i_21] [i_21] [i_20])))))));
            }
        } 
    } 
}
