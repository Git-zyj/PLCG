/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54920
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_14 = arr_2 [i_0];
                            var_15 += ((/* implicit */unsigned int) ((unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_1] [i_1] [(_Bool)1])) : (((/* implicit */int) var_12)))))));
                            var_16 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) var_11)) : (var_2)))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_9)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (~(arr_1 [i_2])))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) arr_4 [i_3] [(unsigned short)5] [(unsigned short)5]))))))));
                            arr_8 [i_0] [15U] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [9ULL] [i_1])) ? (var_11) : (((/* implicit */int) arr_5 [i_0] [i_2])))) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_18 = (~((~(var_11))));
                            arr_14 [14U] [i_1 - 1] [14U] [14ULL] = arr_2 [i_4];
                            var_19 += ((/* implicit */int) var_13);
                            var_20 += ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) % (((/* implicit */int) ((_Bool) var_1)))));
                            arr_15 [12] [12] [(unsigned short)5] [12] = (!(((/* implicit */_Bool) (+(((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9)))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] [(unsigned short)14] = ((/* implicit */int) var_13);
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 17; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (max(((((!(((/* implicit */_Bool) var_10)))) ? (var_10) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) max((((int) var_7)), (((/* implicit */int) min((var_5), (var_4)))))))))));
                            arr_22 [i_0] [i_0] [i_6] [(unsigned short)11] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_0))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 19; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        {
                            var_23 -= ((/* implicit */unsigned short) (((~(((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_32 [i_8] [(unsigned char)1] [12ULL] [i_10] [(unsigned char)1]))))) >> (((var_2) - (1582158468U)))));
                            var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_0)))))), ((+(((/* implicit */int) ((short) var_1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) var_2);
                            arr_39 [i_8] [i_8] [i_8] [(_Bool)1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_7)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_9] [i_9] [5U] [(_Bool)1] [i_9])))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_2))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (short i_14 = 0; i_14 < 18; i_14 += 1) 
    {
        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
        {
            {
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))))));
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    for (unsigned int i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        {
                            var_29 -= ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_17] [i_15] [i_15] [i_14]))))), (((1061665376) / (419158155)))));
                            var_30 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2857976594U)) ? (((/* implicit */int) (unsigned short)62809)) : (419158155)))) ? (((/* implicit */int) max((arr_37 [i_15] [i_15]), (((/* implicit */unsigned short) var_1))))) : (((/* implicit */int) max((var_3), (((/* implicit */short) arr_38 [i_14] [i_15] [i_14] [i_16] [i_16] [i_17])))))));
                            var_31 = ((/* implicit */short) var_12);
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((arr_33 [i_14] [i_14] [i_14] [i_16] [(_Bool)1] [i_14]) ? (((/* implicit */int) arr_33 [(short)19] [i_15] [i_14] [i_14] [i_14] [i_15])) : (((/* implicit */int) var_4))))) & (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))), (max((((/* implicit */unsigned int) (unsigned short)510)), (2504951163U)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 18; i_18 += 3) 
                {
                    for (unsigned short i_19 = 1; i_19 < 16; i_19 += 2) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 18; i_20 += 4) 
                        {
                            {
                                arr_60 [i_14] [12U] [i_14] = ((/* implicit */int) ((((_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_19 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_0))))) : (max((2050526695529473016ULL), (475590666004411817ULL)))))));
                                var_33 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((arr_47 [(unsigned short)9] [i_19] [(unsigned short)13]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_15] [i_15] [i_15]))))) : (((/* implicit */unsigned long long int) arr_23 [i_19 + 2])))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_11)) <= (var_9)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))))))));
                            }
                        } 
                    } 
                } 
                var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_33 [i_14] [i_14] [i_14] [i_15] [i_15] [20]))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2))))));
            }
        } 
    } 
}
