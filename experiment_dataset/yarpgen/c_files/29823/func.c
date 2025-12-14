/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29823
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
    var_17 = ((/* implicit */long long int) ((((unsigned int) (+(var_10)))) >> (((((((/* implicit */_Bool) 1960518878U)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))))) - (2344273873U)))));
    var_18 = min((((/* implicit */unsigned char) ((var_3) > (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) : (2092313802652110430LL)))))), (var_15));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_2 [(unsigned char)0] |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((arr_1 [i_0 - 2]) != (arr_1 [i_0 - 3])))), (max((((/* implicit */long long int) arr_1 [i_0 + 1])), (arr_0 [i_0] [i_0 - 3])))));
        var_19 |= ((((/* implicit */_Bool) ((arr_0 [i_0 + 1] [i_0]) & (arr_0 [i_0 - 1] [i_0 - 3])))) ? ((+(arr_0 [i_0 - 2] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)31)) + (((/* implicit */int) (unsigned char)201))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_7 [i_1] &= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned int) var_0))), (var_2)));
        arr_8 [i_1] = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) << (((var_3) + (3268259049198728435LL)))))), (max((((/* implicit */long long int) arr_5 [i_1] [i_1])), (-360679427957161202LL)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned char)41)))), (((/* implicit */int) (unsigned char)252))));
        arr_14 [i_2] = ((/* implicit */unsigned int) var_1);
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (((-(arr_17 [i_3] [i_3]))) < ((+(var_0)))))) - (((/* implicit */int) ((((/* implicit */long long int) (+(var_6)))) == (max((var_3), (((/* implicit */long long int) var_8)))))))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 2; i_4 < 19; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_5 = 2; i_5 < 19; i_5 += 2) 
                {
                    arr_26 [i_3] [11U] [i_3] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)224));
                    arr_27 [i_3] = ((/* implicit */unsigned int) var_11);
                }
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    arr_30 [16LL] [16LL] [16LL] |= ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) 18U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))) : (2092313802652110428LL)))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))) & (((long long int) 895993688U)))))))));
                    arr_31 [i_3] [11LL] [i_3] [11LL] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_1))) % (((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_3] [i_4 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_23 [i_4] [i_4] [9U] [i_4 + 2]))))));
                    arr_32 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_6 [i_2] [i_2]) >= (14U)))) & (((/* implicit */int) (unsigned char)17))));
                }
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-((-(max((arr_25 [i_2] [10U] [10U] [i_4]), (arr_25 [i_3] [4U] [4U] [i_3]))))))))));
            }
            for (unsigned char i_7 = 2; i_7 < 18; i_7 += 2) 
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_11 [i_3] [i_7]))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) == (max((((/* implicit */unsigned int) (unsigned char)128)), (1367434149U)))))) + (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_9] [i_9] [i_7 + 1] [3U])))))) != (var_3))))));
                            arr_41 [i_3] [i_3] [i_7] [i_8] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) (+(((/* implicit */int) var_5))))), (max((((/* implicit */long long int) (unsigned char)236)), (arr_35 [i_3] [9U] [i_2])))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_10 = 1; i_10 < 19; i_10 += 3) 
                {
                    var_24 *= ((/* implicit */unsigned int) 2092313802652110434LL);
                    arr_44 [i_2] [i_2] [i_3] [i_7] [i_10] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) arr_37 [i_7] [i_2] [i_2])), (max((arr_29 [i_10 + 1]), (((/* implicit */long long int) (unsigned char)33)))))), (max(((-(arr_25 [i_7] [i_3] [i_7 + 3] [i_7]))), (2092313802652110441LL)))));
                    var_25 = ((/* implicit */long long int) max((var_25), (0LL)));
                    var_26 = ((/* implicit */long long int) (+(((/* implicit */int) ((((2950856466034465250LL) | (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2] [17U]))))) == (((/* implicit */long long int) var_6)))))));
                }
                for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    arr_47 [i_3] [i_2] [i_3] [i_7] [i_7] [i_11] = ((/* implicit */long long int) ((unsigned char) max((var_10), (max((var_9), (8088449612933320636LL))))));
                    var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7 + 1])) ? (var_14) : (arr_35 [i_7] [i_3] [i_3]))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_16) : (arr_25 [i_2] [i_11] [i_2] [i_2])))) ? (((/* implicit */int) max((arr_22 [i_2] [i_3] [i_7] [i_11]), ((unsigned char)6)))) : (((/* implicit */int) ((((/* implicit */_Bool) -2950856466034465261LL)) || (((/* implicit */_Bool) (unsigned char)24)))))))));
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        arr_50 [i_12] [i_3] [i_7] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_3] [i_7 + 2] [i_3])) ? (((/* implicit */int) arr_46 [i_7] [i_3] [i_3] [i_7])) : (((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))) : (max((((var_9) / (((/* implicit */long long int) arr_20 [i_3] [i_3] [i_3])))), (max((5738930816828009423LL), (var_3)))))));
                        arr_51 [i_2] [i_3] [i_3] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) >> (((((((/* implicit */_Bool) var_4)) ? (3541895974U) : (arr_20 [i_7 + 3] [i_7 - 1] [i_7 - 1]))) - (3541895949U)))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned char)112)) - (111)))));
                        arr_52 [(unsigned char)21] [i_3] [i_2] [(unsigned char)16] [i_3] [4LL] = ((/* implicit */unsigned int) (unsigned char)207);
                    }
                }
            }
        }
        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            arr_56 [i_2] [i_13] = (unsigned char)13;
            arr_57 [17LL] [i_13] [i_2] |= ((/* implicit */unsigned char) max((arr_20 [(unsigned char)8] [i_2] [i_2]), (((/* implicit */unsigned int) (-(((/* implicit */int) max(((unsigned char)128), ((unsigned char)17)))))))));
            arr_58 [i_2] [i_2] [(unsigned char)1] = ((unsigned char) max((arr_20 [(unsigned char)2] [i_2] [i_13]), (((/* implicit */unsigned int) max(((unsigned char)0), ((unsigned char)7))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            arr_61 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2271793300U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [i_2] [i_14] [i_2]))) : (var_6)));
            var_29 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -2092313802652110429LL))));
            var_30 = ((/* implicit */long long int) arr_9 [i_2]);
            arr_62 [i_2] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [(unsigned char)6] [i_2])) ? (((/* implicit */int) arr_59 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_59 [i_14] [i_2] [i_2]))));
        }
    }
    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned int) max((var_31), (min((((/* implicit */unsigned int) ((2092313802652110426LL) < (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_15] [8U] [i_15] [i_15] [i_15] [(unsigned char)20])))))), (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))) : (arr_6 [i_15] [19U]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)30)) && (((/* implicit */_Bool) arr_64 [20LL])))))))))));
        arr_65 [i_15] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((-6910775805667481747LL) != (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_15] [i_15] [i_15] [i_15]))))))));
    }
}
