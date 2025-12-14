/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225004
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 4; i_2 < 19; i_2 += 3) 
                {
                    var_18 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1]))) < (((unsigned int) arr_5 [i_0 + 1] [i_0 - 1]))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_2])))));
                }
                for (long long int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                    var_20 = ((/* implicit */unsigned short) 1006382117);
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10642))) < (var_16)));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) % (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54865))) : (arr_2 [i_0] [i_1]))))))));
                }
                arr_16 [7LL] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)54882)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_7))))) <= (arr_1 [i_0] [i_1])));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (var_17)));
                    var_24 = ((((/* implicit */int) arr_6 [(_Bool)1] [i_0 - 1] [i_5] [i_0])) > (((/* implicit */int) var_17)));
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_5] = ((/* implicit */long long int) var_1);
                        var_25 = ((/* implicit */unsigned long long int) var_8);
                    }
                    for (unsigned char i_7 = 4; i_7 < 20; i_7 += 1) 
                    {
                        arr_26 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_21 [i_0])));
                        arr_27 [i_0] [10LL] [10LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6)));
                        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_5] [i_5] [11] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_5] [i_7 - 1]))));
                        arr_28 [i_0] = ((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0]);
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((unsigned short) var_3)))));
                    }
                    for (int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        var_28 &= ((/* implicit */int) var_16);
                        var_29 = ((short) var_7);
                        var_30 &= ((/* implicit */long long int) ((_Bool) 4294967295U));
                        arr_31 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (-1006382117)));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        for (long long int i_10 = 1; i_10 < 19; i_10 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_33 [i_0] [i_5])) >= (((/* implicit */int) var_7)))) ? (arr_14 [i_10] [i_0]) : (((/* implicit */int) (unsigned short)59169))));
                                var_32 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_10 [i_0] [i_0] [(short)16] [i_0])))))) * ((+(var_10)))));
                                arr_37 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_17 [16] [(_Bool)1] [i_0]);
                            }
                        } 
                    } 
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_41 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_35 [i_11] [i_11] [i_0 - 1] [(_Bool)1])) * (((/* implicit */int) arr_35 [i_0] [i_0 - 1] [i_0 - 1] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned short) ((((/* implicit */_Bool) 20U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2678))) : (7379192498751938030ULL)));
                        var_33 = ((/* implicit */_Bool) var_12);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                        {
                            var_34 ^= ((/* implicit */unsigned char) ((((arr_15 [i_1] [i_1] [i_13]) || (((/* implicit */_Bool) (unsigned short)2678)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (var_10)))) : (((/* implicit */int) ((_Bool) (unsigned short)2044)))));
                            var_35 = ((/* implicit */long long int) ((((((/* implicit */int) var_15)) <= (1006382103))) ? (((/* implicit */int) ((arr_42 [5] [5] [i_11] [i_12]) <= (((/* implicit */unsigned int) 1006382103))))) : (((/* implicit */int) ((_Bool) -8896477619413305731LL)))));
                        }
                        var_36 = ((/* implicit */unsigned short) var_8);
                        var_37 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_15)), (1006382117)))) || (((/* implicit */_Bool) (-(1006382103))))));
                    }
                    var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((1006382116) - (((/* implicit */int) (unsigned short)54907)))))));
                }
                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (((-(((((/* implicit */int) var_8)) / (((/* implicit */int) arr_24 [i_0] [i_1] [i_1] [i_1])))))) << (((arr_25 [i_0] [i_0] [i_0] [i_1]) - (536039711))))))));
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned short) var_10);
}
