/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199255
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
    var_11 -= ((/* implicit */_Bool) min((var_1), ((-(((/* implicit */int) (unsigned short)32352))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                    {
                        var_12 = ((/* implicit */short) (unsigned short)19507);
                        arr_11 [i_0] [(signed char)0] [i_1 - 3] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (-(var_1)));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned char) ((short) max(((+(18446744073709551615ULL))), (((((/* implicit */_Bool) var_10)) ? (arr_10 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))));
                            var_14 = ((/* implicit */unsigned char) arr_12 [(signed char)8] [(_Bool)1] [(_Bool)1] [i_4] [2LL]);
                        }
                        var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (var_7)))) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (unsigned short)13188))))));
                    }
                    arr_16 [i_2 + 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32112)) & (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)4095))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -1)) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_10)) : (min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_6 = 4; i_6 < 15; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 1; i_7 < 18; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(min((((/* implicit */int) (unsigned char)56)), (var_5))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 3; i_10 < 17; i_10 += 3) 
                        {
                            var_17 = ((/* implicit */int) (((_Bool)1) ? (min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) var_7)) : (1ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)4036)) + (((/* implicit */int) (unsigned short)0))))) : (((1177768506U) + (var_6))))))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) 165875235121167526LL))))), (((arr_19 [i_8] [i_10 - 2]) ^ (((/* implicit */long long int) var_5)))))) | (((/* implicit */long long int) (-(var_9)))))))));
                            arr_28 [i_6] [i_9] [i_8] [i_8] [i_10] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) arr_22 [10LL] [i_7] [i_7]))))) ? ((+(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [(unsigned short)16] [15])) && (((/* implicit */_Bool) arr_21 [i_6] [i_6] [i_8] [(_Bool)1]))))))))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_5)) ? (0) : (((/* implicit */int) arr_25 [i_6] [i_6])))), (((/* implicit */int) (signed char)-126))))), (((((/* implicit */unsigned long long int) max((arr_26 [i_6] [i_8] [i_8] [0ULL] [i_8]), (-902389705)))) ^ (18446744073709551592ULL))))))));
                        }
                    }
                } 
            } 
        } 
        arr_29 [i_6] &= ((/* implicit */unsigned short) var_3);
    }
}
