/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196674
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (+(max(((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18184905748198623348ULL)) ? (var_8) : (var_8)))), ((-(arr_10 [(short)8] [(short)8] [i_2] [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((max(((unsigned short)34739), (((/* implicit */unsigned short) var_3)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)9610))))))))) : (min(((-(14172385928081101596ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_14)), (var_0))))))));
                                arr_14 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1))))));
                }
            } 
        } 
        arr_16 [i_0] = max((250439109549327680ULL), (10436621195838755367ULL));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                for (unsigned int i_7 = 3; i_7 < 21; i_7 += 1) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 2017612633061982208ULL))))), (max((var_1), (((/* implicit */int) (_Bool)0))))))) ? (min((((((/* implicit */_Bool) 3417037576U)) ? (13056390912698169068ULL) : (250439109549327680ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_5] [i_6])) ? (5028077558082967062LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_5] [i_6])))))))) : (((/* implicit */unsigned long long int) (-((~(0LL))))))));
                        arr_25 [i_7] [i_6] [i_5] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((max((((/* implicit */int) var_0)), (1925722220))), ((~(((/* implicit */int) (unsigned char)26)))))))));
                        arr_26 [i_6] [i_7] = ((/* implicit */_Bool) (-(max((32736U), (((/* implicit */unsigned int) (unsigned char)57))))));
                        arr_27 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [(_Bool)1] [i_0] [i_6] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6] [i_6]))) : (arr_9 [i_6] [i_6] [i_0] [i_6])))) : (min((((/* implicit */long long int) var_5)), (var_7)))))) ? (((((/* implicit */_Bool) max((arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (((/* implicit */int) var_9))))) ? (min((((/* implicit */int) var_6)), (var_1))) : ((-(arr_6 [i_7]))))) : ((+(((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_6] [i_6])), (var_11))))))));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (unsigned short)49717)), (var_12)))))) ? ((~(((/* implicit */int) min(((unsigned short)45265), (((/* implicit */unsigned short) (_Bool)1))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_21 [3])))))))));
                    }
                } 
            } 
        } 
        arr_28 [i_0] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_19 [i_0] [10] [i_0] [i_0])))), (((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (signed char)-31)))))))), ((+(max((4294934568U), (((/* implicit */unsigned int) (_Bool)0))))))));
    }
    for (int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
    {
        arr_31 [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((arr_22 [i_8] [i_8] [i_8]) ? (518497348) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_23 [i_8] [i_8])), (5390353161011382548ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (arr_21 [i_8]))))) : (((var_10) ? (arr_12 [i_8] [17U]) : (((/* implicit */unsigned long long int) 67108864))))))));
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_8] [i_8])) ? (arr_29 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))))))));
    }
    for (int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_9] [i_9])) : (((/* implicit */int) arr_5 [i_9] [i_9] [i_9])))))))));
        arr_35 [i_9] [i_9] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) var_13)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (32728U) : (((/* implicit */unsigned int) 2089563474))))) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_14))))) : (((((/* implicit */_Bool) arr_19 [i_9] [i_9] [12ULL] [i_9])) ? (((/* implicit */int) arr_34 [i_9] [(unsigned short)7])) : (((/* implicit */int) var_0))))))));
        var_20 = ((/* implicit */long long int) (-(1918116987782597700ULL)));
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (var_3)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_9] [i_9] [7ULL]))))) : (((((/* implicit */_Bool) 690667313245090373LL)) ? (1253531548238758736LL) : (((/* implicit */long long int) 4294934579U)))))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
    {
        arr_38 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)26))))) ? ((-(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) (signed char)-84))))));
        var_22 += ((((/* implicit */_Bool) ((arr_17 [i_10] [i_10] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (13056390912698169068ULL)))) ? ((~(18196304964160223919ULL))) : (((/* implicit */unsigned long long int) ((arr_34 [i_10] [i_10]) ? (4294934562U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10] [i_10] [i_10] [i_10])))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_10) ? (arr_37 [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10] [(unsigned char)15])))))) ? (((/* implicit */int) (!(arr_22 [i_10] [i_10] [i_10])))) : (((((/* implicit */_Bool) 15873067261953578357ULL)) ? (var_8) : (((/* implicit */int) var_3)))))))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned int i_12 = 1; i_12 < 14; i_12 += 4) 
            {
                {
                    arr_44 [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_10] [i_11] [i_12])))))));
                    var_24 ^= ((((/* implicit */_Bool) (-(250439109549327668ULL)))) ? (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(signed char)21] [i_11] [i_12]))) : (arr_10 [(unsigned char)20] [(unsigned char)20] [i_11] [i_12 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1478556652)) ? (((/* implicit */int) arr_41 [i_10] [i_11] [2ULL] [i_10])) : (1645631549)))));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 13095938740901959303ULL)) ? (3345660702U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51))))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (_Bool)1))))), ((-(((/* implicit */int) var_11))))))), (max((((((/* implicit */_Bool) -1881639515)) ? (18196304964160223924ULL) : (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) (-(var_7)))))))))));
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31866)) ? (var_12) : (var_12)))) ? (((((/* implicit */_Bool) 32727U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)31866))))))) ? ((-(((((/* implicit */_Bool) var_3)) ? (955579646U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned short)39989)))))))));
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_7)) : (18156141989463346978ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9510420098611153868ULL)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned short)64967))))))))) : (max((((((/* implicit */_Bool) var_2)) ? (996730833008019989ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-57))))))));
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((17450013240701531634ULL), (((/* implicit */unsigned long long int) var_8))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) ? (max((((/* implicit */unsigned int) var_11)), (3756446468U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (1645631549) : (var_8)))))) : (((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)620)))), (max((var_5), (((/* implicit */int) var_9)))))))));
}
