/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194421
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((int) var_11)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [(short)4] [(short)4] [i_2])) : (((/* implicit */int) var_7))))))) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) ((_Bool) arr_1 [i_2] [(unsigned char)16])))))) : (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)134), (((/* implicit */unsigned char) (_Bool)1))))) && (((/* implicit */_Bool) (signed char)-28)))))));
                    var_14 = ((((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)3)))), ((+(((/* implicit */int) var_0))))))) || (((/* implicit */_Bool) var_7)));
                    arr_8 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) var_8)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned short) arr_10 [17] [17] [17] [i_4] [i_4]);
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_12 [i_0] [(unsigned short)17] [i_2] [(_Bool)1] [(_Bool)1])))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 15; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        {
                            arr_25 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_18 [i_5 + 3] [i_8]))) ? ((+(((var_0) ? (((/* implicit */long long int) arr_17 [i_8])) : (var_13))))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [(_Bool)1] [i_7] [(signed char)5])))));
                            var_18 = ((/* implicit */signed char) (+((+(((/* implicit */int) ((((/* implicit */int) arr_24 [i_5] [(signed char)15] [(signed char)15] [i_5])) >= (((/* implicit */int) var_6)))))))));
                            arr_26 [i_6] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (_Bool)1))))), ((+(max((((/* implicit */unsigned long long int) (_Bool)1)), (11814734447310477282ULL)))))));
                            var_19 = ((/* implicit */unsigned short) var_12);
                            var_20 = ((/* implicit */unsigned char) var_10);
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_22 [i_6] [i_6] [i_6] [(unsigned char)11])) : (((/* implicit */int) arr_16 [i_6]))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) ((var_9) || (var_10))))));
                arr_27 [i_5] = ((/* implicit */unsigned long long int) arr_17 [i_6]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_11 = 1; i_11 < 13; i_11 += 2) 
                {
                    for (unsigned short i_12 = 1; i_12 < 13; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_22 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(arr_18 [i_10] [i_10])))) ? (((/* implicit */int) max((arr_23 [i_9] [(signed char)4] [i_10] [i_11] [(short)10] [(unsigned short)0]), (((/* implicit */unsigned char) arr_36 [i_9]))))) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)-28))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (arr_14 [(unsigned short)6] [i_13] [i_9] [9LL] [i_9] [9LL] [i_9])))) : (13845335081199597786ULL)));
                                arr_43 [i_12] [i_9] [i_10] = ((1418842379820418666ULL) < (((/* implicit */unsigned long long int) 719541577)));
                                var_24 = var_9;
                                var_25 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_38 [15LL] [i_12 + 1] [i_11] [i_10])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */signed char) max(((((+(((/* implicit */int) var_12)))) >> (((9223372036854775807LL) - (9223372036854775791LL))))), (((/* implicit */int) (unsigned char)125))));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34))) : (7810860660928762519ULL)))))) ? (((/* implicit */int) max((arr_23 [i_10] [i_10] [i_9] [i_10] [i_10] [i_10]), (arr_23 [i_10] [i_10] [i_9] [i_9] [i_9] [i_9])))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_33 [i_9] [i_9])) : (max((arr_14 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), (((/* implicit */int) var_6))))))));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((signed char) var_13)))));
                arr_44 [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_30 [i_9])), (max((var_11), (((/* implicit */unsigned short) var_9)))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (unsigned char)166))) == (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) ^ (((((/* implicit */int) var_10)) - (((/* implicit */int) var_6))))))));
}
