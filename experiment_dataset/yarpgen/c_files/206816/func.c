/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206816
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0]))))), (((min((arr_6 [i_0]), (((/* implicit */long long int) (_Bool)1)))) << (((((((/* implicit */_Bool) arr_1 [(short)5] [(short)5])) ? (var_0) : (arr_1 [i_0] [i_1]))) + (7509149719598758652LL)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_8 [(signed char)3] [i_3 - 1] [i_3 - 1])))) && (((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [i_0] [i_3]))))))));
                            var_12 = arr_0 [(unsigned short)5] [i_3];
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */unsigned short) arr_7 [i_0] [i_1]);
            }
        } 
    } 
    var_13 &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned char) (_Bool)1)), (var_5))))), (min((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned short) var_7))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (19ULL)))))));
    /* LoopSeq 3 */
    for (short i_4 = 2; i_4 < 20; i_4 += 3) 
    {
        var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)(-127 - 1))), (arr_14 [i_4 + 1] [i_4 - 2])))), (((unsigned long long int) arr_13 [i_4]))));
        var_15 = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 - 1] [17ULL]))) : (var_6))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))))))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    {
                        var_16 = min((((/* implicit */unsigned int) (((-(((/* implicit */int) var_4)))) != (((((/* implicit */int) var_5)) - (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)43238)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) (_Bool)1))))) : (2010763030U))));
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) var_6);
                            var_18 |= ((/* implicit */unsigned short) var_2);
                            var_19 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) ((unsigned short) arr_17 [i_5] [i_5]))) * (((/* implicit */int) arr_21 [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4 - 2])))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_25 [i_4] [i_5] [i_6] [i_7] [i_9])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)29825))))) : (((((/* implicit */_Bool) arr_18 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1])) ? (arr_15 [i_6] [(unsigned char)16] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))))) & (min((min((arr_23 [i_4] [i_5] [i_4] [i_7] [i_9]), (((/* implicit */unsigned long long int) (unsigned short)13714)))), (((/* implicit */unsigned long long int) min((4671320121587239571LL), (((/* implicit */long long int) (_Bool)1)))))))));
                        }
                        arr_26 [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */short) (-(min((min((arr_23 [i_7] [i_7] [14U] [i_7] [i_7]), (((/* implicit */unsigned long long int) var_4)))), (857152085038393146ULL)))));
                        arr_27 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) var_1);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) min((((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (unsigned char)184))))) ^ (((/* implicit */int) var_8)))), ((-(((/* implicit */int) (signed char)(-127 - 1)))))));
    }
    for (int i_10 = 0; i_10 < 25; i_10 += 1) 
    {
        var_23 = ((/* implicit */long long int) arr_31 [i_10] [i_10]);
        var_24 = ((/* implicit */unsigned short) var_2);
        var_25 *= ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [(_Bool)1])))))))));
    }
    for (short i_11 = 2; i_11 < 14; i_11 += 3) 
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((arr_24 [i_11] [(unsigned char)6] [i_11] [(unsigned char)6] [i_11]) & (((/* implicit */int) var_5))))))) && (((/* implicit */_Bool) ((unsigned long long int) ((long long int) 6481680723345153741ULL)))))))));
        arr_34 [i_11] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)53047)))) & (arr_20 [i_11 + 1] [i_11 - 2] [i_11 + 1] [16])));
        var_27 |= ((/* implicit */signed char) (short)14466);
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            for (signed char i_13 = 2; i_13 < 16; i_13 += 3) 
            {
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    {
                        arr_42 [i_14] [i_14] = ((/* implicit */short) ((var_6) / ((+(((((/* implicit */_Bool) var_1)) ? (arr_18 [i_11] [i_12] [i_13] [i_11]) : (((/* implicit */long long int) 2010763030U))))))));
                        /* LoopSeq 1 */
                        for (int i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned long long int) min((var_7), (var_7)))), (8137030552510613568ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3))))));
                            arr_46 [i_11] [i_14] [(unsigned char)11] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)42516)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-14463)) || (((/* implicit */_Bool) (unsigned char)223)))))))) : (min((((/* implicit */unsigned long long int) ((7404381722022076773LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))), (min((((/* implicit */unsigned long long int) arr_24 [i_11] [i_12] [16LL] [i_14] [17])), (arr_23 [16] [16] [i_13 + 1] [i_14] [i_15])))))));
                        }
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)25718)) : (((/* implicit */int) var_7)))) * (((/* implicit */int) min((((/* implicit */short) (signed char)22)), ((short)-14467))))))) - (min((((/* implicit */long long int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (signed char)-73)) ? (arr_17 [i_11 - 2] [12LL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))))))));
                    }
                } 
            } 
        } 
        arr_47 [i_11 - 1] [i_11 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) 1460674624)) ? (-7155784091958142814LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-121)))));
    }
}
