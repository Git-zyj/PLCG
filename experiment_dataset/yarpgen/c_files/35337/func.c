/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35337
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 - 2])) << (((var_1) - (5358095762182686745ULL)))))) ? (((((/* implicit */_Bool) max((1821609199U), (((/* implicit */unsigned int) arr_2 [i_0 + 1]))))) ? (max((((/* implicit */unsigned long long int) var_11)), (13072117663454177975ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))) : (((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) -2052720691))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-44)) + (2147483647))) << (((var_7) - (3547230031377682845LL)))))) : (11977880649116812143ULL)))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 4; i_2 < 17; i_2 += 3) 
                {
                    var_14 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_2 - 3]))))) - (max((((((/* implicit */_Bool) 1496419038482935906ULL)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 2052720691)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(_Bool)1])) >> (((/* implicit */int) var_11))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_0] [i_1] [10] = ((/* implicit */long long int) -2103472817);
                        arr_13 [i_1] = ((/* implicit */short) ((arr_4 [i_1] [i_1 + 1] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0] [i_0] [i_1 + 1])))));
                    }
                    for (short i_4 = 3; i_4 < 18; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_10)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_0] [i_0 + 1])) : (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21190)))))))));
                        var_16 = ((/* implicit */unsigned short) var_1);
                        arr_17 [i_0] [i_1] [i_0] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */int) ((1002524738904625677LL) < (max((((/* implicit */long long int) arr_1 [i_0])), (1002524738904625689LL)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -7450375550077139758LL)))))));
                        var_17 = ((/* implicit */unsigned int) ((max((arr_4 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (-1002524738904625691LL) : (var_7)))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 2]))) : (((1002524738904625681LL) | (1002524738904625689LL))))))));
                        var_18 = ((/* implicit */unsigned long long int) arr_7 [11] [i_1 - 1] [i_4 - 3]);
                    }
                    var_19 = ((/* implicit */int) (+(arr_4 [i_1] [i_2 + 1] [i_2 + 1])));
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 16; i_5 += 3) 
                {
                    arr_20 [i_1] = ((/* implicit */int) var_11);
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32766)) ? ((~(arr_4 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 + 3] [i_5 - 2])))));
                    var_21 = ((/* implicit */int) var_4);
                }
                for (long long int i_6 = 1; i_6 < 18; i_6 += 1) /* same iter space */
                {
                    arr_23 [i_1] [i_0] [i_6] = ((/* implicit */unsigned int) arr_3 [i_0 + 1] [i_0 + 1]);
                    arr_24 [i_1] [i_1] [12] = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) -1756681697)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))));
                    arr_25 [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_0 + 1] [(short)2])) < (((/* implicit */int) arr_10 [i_0 + 1] [i_0])))) && (((/* implicit */_Bool) max(((short)-9745), (((/* implicit */short) arr_10 [i_0 + 1] [i_0])))))));
                    var_22 = ((/* implicit */int) max((var_22), (((int) ((((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1])) | (var_2))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_7 = 3; i_7 < 16; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_0] [i_0 + 1] [6LL] [i_0 + 1])) ? ((~(var_10))) : (((/* implicit */unsigned long long int) arr_26 [i_6 + 1] [i_7 - 3] [i_1] [i_7]))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))))) : (var_12))))));
                    }
                }
                for (long long int i_8 = 1; i_8 < 18; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 1; i_9 < 15; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_29 [i_0 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (800359128) : (((/* implicit */int) (_Bool)1))))) : (max((2998268215145462967LL), (((/* implicit */long long int) (signed char)11))))))));
                        var_26 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) 944651232)) ? (var_12) : (((/* implicit */unsigned long long int) max((2048022650U), (2632771469U)))))) ^ (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) | (((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1])))))))));
                    }
                    arr_32 [16] &= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [(short)4] [i_1] [i_8])) ? (max((2246944645U), (((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_1] [(unsigned short)17])))) : (((/* implicit */unsigned int) ((int) arr_22 [6] [6] [0ULL] [(unsigned char)4]))))));
                }
                arr_33 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0 + 1]);
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) max((((max((((/* implicit */unsigned long long int) var_5)), (var_6))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))))), (var_10)));
    /* LoopNest 2 */
    for (signed char i_10 = 2; i_10 < 15; i_10 += 4) 
    {
        for (unsigned int i_11 = 3; i_11 < 17; i_11 += 2) 
        {
            {
                var_28 = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)120))))) ? (((/* implicit */int) ((_Bool) arr_21 [i_10 - 2]))) : (((arr_35 [i_11 - 2]) ? (((/* implicit */int) arr_35 [i_10])) : (var_2))));
                var_29 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (809851280)))) >= (-10)))) >= ((-(((((/* implicit */int) (unsigned short)27057)) | (((/* implicit */int) arr_11 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 2]))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 3; i_12 < 15; i_12 += 3) 
                {
                    var_30 ^= (~(((((/* implicit */_Bool) arr_3 [i_10 - 2] [i_10 - 2])) ? (arr_3 [i_10 + 3] [i_10 - 2]) : (((/* implicit */unsigned long long int) 3408902489U)))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_10 + 2])) ? (((/* implicit */int) arr_21 [i_10 + 1])) : (((/* implicit */int) arr_21 [i_10 + 3]))))) != (2516098545U)));
                    var_32 = ((/* implicit */short) ((((-1046715760) != (((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */int) (signed char)-102)) : (arr_8 [i_12] [i_11 + 1] [i_12]))))) ? (-1002524738904625675LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_7)))))))));
                }
                var_33 &= ((/* implicit */short) (-(max((((/* implicit */int) arr_28 [i_11 + 1] [i_11 - 1] [i_10 + 2])), (max((((/* implicit */int) arr_7 [i_10 + 1] [i_10 + 2] [i_10])), (-1)))))));
            }
        } 
    } 
}
