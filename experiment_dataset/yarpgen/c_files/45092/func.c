/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45092
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
    var_11 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_7))));
                var_13 = arr_5 [i_0] [i_1] [i_2];
                var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) var_1)) >= (var_4))))));
                var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)9))));
            }
            var_16 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
            var_17 = (~(((unsigned int) arr_4 [i_0] [i_1])));
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))) : (((/* implicit */int) ((unsigned short) var_6)))));
                        var_19 = var_3;
                        var_20 = ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (70368744177663LL) : (var_4));
                        var_21 = (~(((1248861743U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_10 [i_1] [i_1])))) ? (arr_8 [1U] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (unsigned int i_5 = 4; i_5 < 12; i_5 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) ((((/* implicit */long long int) 3934928174U)) < (arr_12 [i_0] [i_0] [i_0] [i_0]))))))));
            var_24 = ((/* implicit */unsigned short) ((unsigned int) max((var_4), (((((/* implicit */_Bool) arr_10 [i_0] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_12 [4LL] [i_5 + 1] [4LL] [4LL]))))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 1; i_6 < 13; i_6 += 2) 
            {
                for (unsigned int i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_0)), ((-(max((((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0 - 1])), (var_5)))))));
                            var_26 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_5])) || (((/* implicit */_Bool) 2201149470U))))), ((-(var_4))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (2093817826U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) arr_13 [i_5] [i_5] [i_6 + 1] [i_5] [i_8])))))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            var_27 = ((/* implicit */unsigned short) min((var_6), (max((arr_7 [i_0] [i_0 + 3] [i_0 + 2] [i_0]), (((/* implicit */unsigned int) var_9))))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_9])) ? (((/* implicit */int) (unsigned short)53340)) : (((/* implicit */int) var_3)))))))) < (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)27)), (arr_13 [i_0 + 2] [i_0] [(unsigned short)12] [i_0 + 3] [i_0 + 2]))))));
            var_29 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)124)), (var_8)))), ((+(((/* implicit */int) var_9))))))), (max((((/* implicit */long long int) ((unsigned int) var_3))), (max((arr_6 [i_0 + 3] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_20 [i_9] [i_9] [i_9]))))))));
            var_30 = (+(1213414601U));
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            var_31 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 + 3])) < (((/* implicit */int) var_3))));
            var_32 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) -5814947580772017626LL)))))));
        }
        var_33 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (min((var_2), (15U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (arr_16 [i_0])))) ? (((/* implicit */int) min((arr_13 [i_0 - 1] [(unsigned char)2] [i_0 + 1] [i_0] [i_0]), ((unsigned short)1)))) : (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))));
        var_34 = (-(min((((/* implicit */long long int) ((unsigned int) var_8))), (min((((/* implicit */long long int) var_10)), (var_4))))));
        var_35 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 5814947580772017626LL)) ? (-3603142332589076979LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 - 2] [i_0 + 2] [i_0 - 2]))))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 1; i_11 < 23; i_11 += 4) 
    {
        var_36 |= ((/* implicit */unsigned short) (-(var_6)));
        var_37 = ((/* implicit */long long int) (+(((/* implicit */int) ((-2847393779708444071LL) != (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    }
    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) 
    {
        var_38 = ((/* implicit */unsigned short) ((((arr_36 [i_12]) - (arr_36 [i_12]))) / (arr_5 [i_12] [i_12] [(unsigned short)8])));
        /* LoopNest 3 */
        for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            for (unsigned short i_14 = 1; i_14 < 12; i_14 += 3) 
            {
                for (unsigned int i_15 = 3; i_15 < 12; i_15 += 1) 
                {
                    {
                        var_39 = (+(var_2));
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 2201149489U)))) ? (-1130776181748447479LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1))))))) && (((((/* implicit */_Bool) (unsigned char)135)) || (((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_39 [i_12] [i_12] [i_12])))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_16 = 3; i_16 < 16; i_16 += 2) 
    {
        var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39098))) : (-2847393779708444072LL))) <= (((/* implicit */long long int) var_1)))))));
        var_42 = min((arr_32 [i_16] [i_16]), ((unsigned char)150));
        var_43 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44712)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) : (3655220446643357392LL)))) ? (min((var_6), (((/* implicit */unsigned int) var_8)))) : (1718585255U))) * (((((/* implicit */_Bool) 2093817807U)) ? (((((/* implicit */_Bool) var_4)) ? (53729624U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)1499), (arr_48 [i_16]))))))));
    }
    var_44 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((unsigned char) (unsigned char)254))))));
    var_45 = ((/* implicit */long long int) var_8);
}
