/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201840
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (8072251741897592186LL)))) ? (((/* implicit */unsigned long long int) var_16)) : (((((/* implicit */_Bool) var_0)) ? (17868096378446326144ULL) : (arr_0 [i_0] [i_0])))))))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [(signed char)14] [19ULL])), (min((-8072251741897592187LL), (((/* implicit */long long int) var_10))))))) : (17868096378446326140ULL)));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    arr_9 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_1] [i_2] [i_3] [i_2]) ? (min((arr_8 [i_2]), (var_5))) : (var_14)))) ? (((var_3) | (min((var_4), (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) var_2))));
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_19 *= ((/* implicit */_Bool) 578647695263225471ULL);
                        var_20 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)64143))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((18446744073709551593ULL), (17776294493989727708ULL))))));
                        arr_13 [i_1] [i_2] [i_1] [12U] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) 8166635189242916079ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_13))), (min((var_5), (((/* implicit */unsigned long long int) var_4)))))) >> (((max(((~(578647695263225471ULL))), ((~(15024960358251560625ULL))))) - (17868096378446326093ULL)))));
                    }
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_5] [i_1])) | (((/* implicit */int) arr_3 [i_2] [i_5]))))) ? (min((var_4), (((/* implicit */long long int) (unsigned short)12288)))) : (((/* implicit */long long int) (-((-(((/* implicit */int) var_11))))))))))));
                        arr_17 [i_1] [4ULL] [i_2] [9U] [i_2] = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (var_13) : (((/* implicit */unsigned long long int) var_2))))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_14 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_5] [0ULL] = ((/* implicit */signed char) arr_3 [i_6 + 1] [i_2]);
                            arr_22 [i_2] [10ULL] = 578647695263225470ULL;
                            var_23 -= ((/* implicit */unsigned long long int) arr_5 [i_3]);
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            arr_25 [7U] [i_2] [7U] [7U] [i_5] [7U] = ((/* implicit */signed char) (+(var_15)));
                            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(-8072251741897592204LL))))));
                            var_25 = ((((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [10ULL])) / (var_7));
                        }
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                        {
                            arr_30 [i_1] [i_1] [i_1] [i_3] [i_3] [i_1] [6ULL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
                            arr_31 [i_1] [i_2] [i_3] [i_5] [(signed char)1] = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 939524096U)) & (3421783715457990982ULL)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (arr_6 [i_1] [i_3] [i_8])))));
                        }
                    }
                    for (unsigned short i_9 = 3; i_9 < 20; i_9 += 4) 
                    {
                        var_26 *= ((/* implicit */unsigned int) min((((arr_7 [i_1] [i_9 - 1] [i_3] [(_Bool)1]) ? (arr_24 [i_2] [i_9 + 2] [i_3] [i_1] [i_2] [i_2] [i_9]) : (3421783715457990970ULL))), (max((arr_24 [i_1] [i_9 + 2] [i_1] [i_9 + 2] [i_9] [i_1] [19ULL]), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_9 - 1] [i_3] [i_9]))))));
                        var_27 = ((/* implicit */unsigned long long int) 8072251741897592178LL);
                        var_28 *= ((/* implicit */unsigned long long int) var_2);
                    }
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        arr_37 [i_1] [i_1] [i_1] [i_1] [13ULL] |= ((/* implicit */signed char) ((unsigned short) arr_36 [i_1] [i_2] [i_3] [i_10]));
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_41 [i_11] = ((/* implicit */_Bool) arr_26 [i_3] [12ULL] [i_10] [i_1] [i_3] [i_1] [i_1]);
                            var_29 = arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1];
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            arr_44 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (~(8072251741897592186LL)))), (min((((/* implicit */unsigned long long int) var_2)), (arr_18 [i_12] [(unsigned short)9] [i_3] [(unsigned short)3] [12ULL]))))), (((/* implicit */unsigned long long int) max((-1406384696880114297LL), (((/* implicit */long long int) 597775042U)))))));
                            var_30 ^= ((/* implicit */unsigned long long int) arr_43 [i_1] [i_1] [i_3] [i_1] [i_1] [i_12] [i_12]);
                            var_31 ^= var_7;
                        }
                        var_32 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((min((14558980224588129577ULL), (var_14))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [1ULL] [i_2] [1ULL]))))))))), ((-(12949772133168429252ULL)))));
                        arr_45 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(arr_40 [i_1] [20LL] [i_2] [i_3] [19U])))), (min((((/* implicit */unsigned long long int) (signed char)28)), (var_7)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_10] [i_3] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (((((/* implicit */_Bool) (unsigned short)5638)) ? (((/* implicit */unsigned long long int) var_2)) : (10926617384392903480ULL))))))));
                    }
                }
                var_33 *= ((/* implicit */signed char) ((var_10) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [0ULL] [0ULL] [i_2] [20ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (33521664U)))) ? (((17868096378446326142ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) 8080860980957007279LL)))) : (min((min((var_0), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_2] [i_2] [i_1] [i_1]))))));
            }
        } 
    } 
}
