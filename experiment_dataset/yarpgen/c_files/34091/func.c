/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34091
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
    var_15 = ((/* implicit */_Bool) (~((+(max((((/* implicit */unsigned long long int) (unsigned char)224)), (6216142714919155943ULL)))))));
    var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 4; i_4 < 7; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */short) var_12);
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_13)))) ? (((((/* implicit */_Bool) 8117024558732509890LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)29676)))) : (((/* implicit */int) arr_3 [i_0] [i_3]))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */long long int) var_9);
                            var_20 &= ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_2] [i_3] [i_5] [i_0]);
                            arr_19 [i_0] [i_1] [i_0] [i_1] [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
                        }
                        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3]))));
                        var_22 = ((/* implicit */_Bool) (-(arr_14 [i_0] [i_0] [i_3])));
                    }
                    for (short i_6 = 1; i_6 < 6; i_6 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 1; i_7 < 9; i_7 += 2) 
                        {
                            var_23 += (~(min((((/* implicit */unsigned long long int) var_0)), (((var_3) ? (4397912293376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))))))));
                            arr_24 [i_0] [i_6] [i_2] [i_2] [i_6] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */short) (unsigned char)124)), ((short)29656))))))) + (arr_22 [i_0] [i_6] [i_2] [i_6] [i_6] [i_2])));
                            arr_25 [i_0] [i_0] [i_0] [i_6] [i_0] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned char) var_2))))) ? (((((/* implicit */int) arr_23 [i_0] [i_7 - 1])) + (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2])))) : (((/* implicit */int) var_0)))) + (((/* implicit */int) ((unsigned char) arr_5 [i_6 + 4] [i_2] [i_1] [i_0])))));
                            var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_6 [i_1] [i_1] [i_7 - 1]), (((/* implicit */unsigned char) var_3)))))));
                            var_25 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) (short)-10147)) & (((/* implicit */int) (short)-29677))))) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_2]))))));
                        }
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_26 &= ((/* implicit */_Bool) arr_26 [i_6 + 3] [i_1] [i_2] [i_6] [i_2]);
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [i_6 + 2] [i_6 + 2])) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (short)10146)))))))));
                            var_28 *= ((/* implicit */unsigned char) max((max(((short)-2596), (((/* implicit */short) (_Bool)1)))), ((short)29328)));
                        }
                        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
                        {
                            arr_33 [i_6] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (arr_0 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (short)-22566)))))) ? (((unsigned long long int) var_1)) : ((+(4397912293354ULL)))))));
                            arr_34 [i_6] [i_1] [i_6] = ((/* implicit */long long int) (-((+(arr_13 [i_6 - 1] [i_1] [i_2] [i_2])))));
                        }
                        var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_15 [i_6 + 1] [i_6] [i_6] [i_6] [i_6])) + (2147483647))) >> (((arr_13 [i_0] [i_0] [i_6 + 4] [i_6 - 1]) - (13269003324027316053ULL)))))) ^ (arr_11 [i_6 + 2] [i_2] [i_1] [i_0])));
                        var_30 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_15 [i_6 - 1] [i_6 + 4] [i_6 - 1] [i_6 - 1] [i_6 + 4])))) ^ (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_11)))))));
                        arr_35 [i_0] [i_0] [i_1] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-5010534399862218368LL)));
                        var_31 -= ((/* implicit */short) max(((+(arr_27 [i_6 + 3] [i_6] [i_6 + 1] [i_6] [i_6 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_6 + 3] [i_6 + 3] [i_6 + 1] [i_6 + 3] [i_6 + 1])) ? (((/* implicit */int) arr_15 [i_6 + 3] [i_6] [i_6 + 1] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_15 [i_6 + 3] [i_6 - 1] [i_6 + 1] [i_6] [i_6 + 1])))))));
                    }
                    arr_36 [i_0] [i_2] &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_17 [i_2] [i_1] [i_2] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) min((7314263435464861346LL), (((/* implicit */long long int) var_14))))) : (min((((/* implicit */unsigned long long int) var_1)), (arr_13 [i_0] [i_1] [i_2] [i_0])))))));
                    arr_37 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-29677)) % (((/* implicit */int) (unsigned char)226))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) : (((((/* implicit */_Bool) ((unsigned char) 9338806037120293054ULL))) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) : (((/* implicit */int) max(((unsigned char)182), ((unsigned char)140))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            {
                                arr_42 [i_0] [i_0] [i_11] [i_0] [i_11] [i_1] &= ((/* implicit */short) arr_32 [i_0] [i_1] [i_0] [i_10] [i_11] [i_10] [i_0]);
                                var_32 -= ((/* implicit */short) arr_0 [i_0]);
                            }
                        } 
                    } 
                    arr_43 [i_0] [i_1] [i_1] = ((/* implicit */short) min((arr_13 [i_0] [i_0] [i_2] [i_0]), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_0]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
        {
            for (short i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    {
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_47 [i_0] [i_14] [i_0] [i_14]))))) >> (((((/* implicit */int) arr_16 [i_0] [i_12] [i_13] [i_13] [i_14])) + (14250)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)115)) ? (arr_18 [i_0] [i_12] [i_13] [i_12] [i_0]) : (((/* implicit */unsigned long long int) 7293180440999120859LL))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_7))))))));
                        var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                        arr_52 [i_14] [i_0] [i_13] [i_14] = ((/* implicit */short) -1LL);
                    }
                } 
            } 
        } 
    }
    var_35 *= ((/* implicit */unsigned long long int) ((long long int) var_3));
    var_36 = ((/* implicit */unsigned long long int) min(((unsigned char)124), ((unsigned char)128)));
}
