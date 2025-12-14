/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246358
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 2477765406363456876ULL)))))));
    var_13 -= ((/* implicit */_Bool) (+((+(min((var_5), (((/* implicit */unsigned int) var_4))))))));
    var_14 = ((/* implicit */unsigned int) max((var_14), ((+(var_5)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)68)))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58288))) ^ (1661628865U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0 + 1])) % (((/* implicit */int) var_8)))) + (((/* implicit */int) arr_1 [i_0 + 1]))));
                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned short)58288)) : (((/* implicit */int) (unsigned short)58288)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2])))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)23056)) : (((/* implicit */int) arr_15 [i_4] [i_4] [i_3] [i_4] [i_5])))))), (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */int) arr_10 [i_5 + 1] [i_5] [i_4] [i_5 - 1] [i_5 - 1] [i_4]))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((max((((((/* implicit */int) arr_13 [i_1] [i_1])) / (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)17)) || (((/* implicit */_Bool) (unsigned char)17))))))) ^ ((~(((/* implicit */int) arr_5 [i_5 - 2] [i_3] [1ULL])))))))));
                            var_21 = ((/* implicit */unsigned char) (-(min((var_11), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_8)))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)7248)))))));
                var_23 = ((/* implicit */signed char) ((unsigned short) ((unsigned short) 1661628877U)));
                var_24 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_3] [i_0] [i_0 + 1])))))));
            }
            var_25 = ((/* implicit */unsigned short) var_11);
        }
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) ((arr_14 [i_0] [i_0] [i_0]) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((arr_20 [i_0 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))) : (((unsigned int) (_Bool)0)))))));
            /* LoopSeq 4 */
            for (unsigned int i_7 = 1; i_7 < 13; i_7 += 2) 
            {
                arr_24 [i_0] [i_6] [i_6] [i_7 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_7] [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7])) ? (((((/* implicit */_Bool) arr_5 [(unsigned short)13] [i_0] [i_7 + 1])) ? (((/* implicit */unsigned long long int) var_5)) : (1082331758592ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-21))))))))));
                var_27 = ((((/* implicit */_Bool) ((unsigned short) arr_15 [12U] [i_0 + 1] [i_7 + 1] [i_7] [i_7]))) ? (max((((arr_3 [i_7 - 1] [i_6] [(unsigned char)4]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) arr_1 [i_0 + 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2960917638U)))))) == (3873780040U))))));
                var_28 = ((/* implicit */unsigned int) var_8);
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_29 += ((/* implicit */unsigned long long int) (~(max((var_3), (((/* implicit */unsigned int) var_10))))));
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)191)) >> (((/* implicit */int) arr_19 [i_0] [i_6] [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), ((unsigned char)7))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9)))))) ? (((/* implicit */unsigned long long int) arr_3 [(unsigned short)10] [i_6] [i_8])) : (min((((/* implicit */unsigned long long int) (unsigned char)7)), (10039893238546631316ULL))))))));
                var_31 *= ((/* implicit */unsigned char) arr_23 [i_0] [i_6] [i_6]);
                var_32 = ((((/* implicit */_Bool) min((arr_22 [i_0 + 1] [i_6]), (((/* implicit */unsigned int) arr_13 [(_Bool)1] [i_6]))))) ? (arr_22 [i_0 + 1] [i_6]) : (((((/* implicit */_Bool) arr_13 [10ULL] [i_6])) ? (arr_22 [i_0 + 1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [0U] [0U]))))));
                arr_28 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (3055449688U)));
            }
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                var_33 = ((/* implicit */signed char) min((2363869002U), (((/* implicit */unsigned int) (unsigned short)58288))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    arr_33 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (~((-(1082331758592ULL)))));
                    var_34 = ((/* implicit */_Bool) arr_32 [i_0] [(unsigned char)2] [(unsigned char)1] [i_0 + 1]);
                }
                var_35 ^= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) : (((var_9) ^ (arr_21 [i_0] [i_0])))))), (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)255))))));
                var_36 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [4U] [i_9])))))));
            }
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                arr_36 [i_0] [i_6] [i_11] = ((/* implicit */signed char) arr_5 [i_0] [i_6] [(_Bool)1]);
                var_37 = arr_35 [i_0 + 1] [i_6] [i_0 + 1];
                var_38 = max((((/* implicit */unsigned long long int) arr_17 [i_0] [i_0 + 1])), (((unsigned long long int) var_6)));
            }
            var_39 = ((/* implicit */_Bool) ((unsigned short) ((unsigned int) min(((unsigned short)13728), (((/* implicit */unsigned short) (unsigned char)63))))));
        }
        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            var_40 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_8)) ? (arr_11 [(_Bool)0] [i_0] [(_Bool)0] [(_Bool)0]) : (arr_11 [(unsigned short)10] [i_0] [i_0] [(unsigned short)10]))), (((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))) >= (479646331451592034ULL))))))));
            var_41 = ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned char)34)) >> (((((/* implicit */int) (unsigned short)1027)) - (997))))), (((/* implicit */int) arr_14 [i_0 + 1] [i_12] [i_12]))));
            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_0 + 1] [i_0])) || (((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_23 [i_12] [i_12] [i_12])), (var_1))))))));
            var_43 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_15 [(unsigned char)0] [i_0] [8ULL] [i_0] [8ULL]), (arr_17 [i_0 + 1] [(unsigned char)10]))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_13 = 1; i_13 < 10; i_13 += 1) 
        {
            for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                {
                    var_44 = ((/* implicit */unsigned long long int) (((((~(1248300941U))) & (min((var_11), (((/* implicit */unsigned int) var_10)))))) == (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))) + (var_11)))));
                    /* LoopNest 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 1; i_16 < 12; i_16 += 2) 
                        {
                            {
                                arr_47 [i_0] [i_13 + 3] [i_14] [i_15 - 1] [i_16] [i_14] [i_13 + 3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((max((((/* implicit */unsigned int) var_6)), (var_9))) - (1064930505U))))))));
                                var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_21 [i_14] [i_15]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)179))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) (unsigned short)58288)) ^ (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(unsigned short)4] [i_16])))))) : (336415448U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
