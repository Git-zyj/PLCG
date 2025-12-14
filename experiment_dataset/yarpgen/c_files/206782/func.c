/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206782
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
    var_15 = ((/* implicit */_Bool) ((var_9) & (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)))), (var_12)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) 3290372466U)) ? (((/* implicit */int) (unsigned short)9091)) : (((/* implicit */int) (unsigned char)21)))))));
                            var_17 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) arr_9 [i_1] [i_2] [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_2])) >> (((((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_2])) - (5601)))))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_2])))) : (((/* implicit */int) max((arr_3 [i_0] [i_1 - 1] [5U]), (arr_3 [i_0] [i_1 - 1] [i_2]))))));
                            arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) var_7);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned char i_5 = 3; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_1)), (arr_3 [i_0] [i_1 + 2] [i_4])))))))));
                                var_20 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (short)32763)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_7 = 1; i_7 < 17; i_7 += 2) 
                {
                    for (short i_8 = 4; i_8 < 18; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 19; i_9 += 1) 
                        {
                            {
                                var_21 = var_2;
                                var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_9 - 2] [i_9] [i_9] [(_Bool)1] [(_Bool)1])) ? (arr_8 [i_1] [i_9 - 2] [i_9] [(_Bool)1] [i_9 - 1] [i_9]) : (var_10))))));
                                var_23 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned long long int) arr_0 [i_9 - 1])) ^ (var_12))));
                                arr_25 [i_8] = ((/* implicit */signed char) var_12);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_10 = 3; i_10 < 19; i_10 += 1) 
                {
                    for (long long int i_11 = 1; i_11 < 18; i_11 += 4) 
                    {
                        {
                            arr_31 [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_10);
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))) < (((/* implicit */int) arr_24 [11ULL] [i_1 - 2] [i_1] [i_11 + 1])))) ? ((~(arr_12 [i_10] [i_1] [i_0]))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_9)))) ? (max((arr_8 [i_0] [i_0] [i_10] [i_11] [i_0] [i_0]), (((/* implicit */int) var_1)))) : (min((((/* implicit */int) arr_5 [i_11 + 2] [i_11 + 2] [(_Bool)1])), (arr_2 [i_0] [(unsigned char)15])))))));
                        }
                    } 
                } 
                arr_33 [i_1] [i_0] = ((((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (unsigned char)111)))) ? (((/* implicit */int) arr_24 [i_0] [i_1 - 4] [i_0] [i_1])) : ((-(var_10))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_12);
    var_25 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (var_0)))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_13))))), (var_12)));
    /* LoopNest 2 */
    for (unsigned char i_12 = 2; i_12 < 21; i_12 += 2) 
    {
        for (unsigned char i_13 = 3; i_13 < 21; i_13 += 1) 
        {
            {
                arr_40 [i_13] [i_13] = ((/* implicit */unsigned char) (~((((+(var_12))) | (((/* implicit */unsigned long long int) (~(var_10))))))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 3; i_14 < 20; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1685701229))));
                            var_27 = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) arr_34 [i_13 + 2])))))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) ((short) (!(var_7)))))));
                            var_28 = (!(((arr_43 [i_14 + 1] [i_13] [i_13 - 1] [i_13] [(unsigned char)11]) < (arr_43 [i_14 + 3] [i_13] [i_12] [i_13] [i_12]))));
                            var_29 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)56464)) >> (((((/* implicit */int) (unsigned char)111)) - (90))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
