/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5325
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)10)) < (((/* implicit */int) (unsigned char)2))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                arr_7 [i_0] [6] = ((/* implicit */signed char) var_11);
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) & (((((/* implicit */long long int) ((/* implicit */int) var_7))) & (arr_2 [i_0]))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_13 [i_2] [i_2] [(unsigned short)6] = ((/* implicit */_Bool) (~((((~(var_15))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))))))))));
                            var_18 = ((/* implicit */unsigned long long int) 5762071705013941973LL);
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(4294967295U)))), (var_10)))))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (signed char i_4 = 2; i_4 < 17; i_4 += 3) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-32752))) ^ (-5762071705013941973LL))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-32752))))) ? ((~(var_11))) : (((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])))))))))));
                            }
                            for (signed char i_5 = 2; i_5 < 17; i_5 += 3) /* same iter space */
                            {
                                arr_20 [i_0] [i_1] [i_2 + 1] [i_3] [i_2] = ((/* implicit */unsigned char) -5762071705013941973LL);
                                var_22 = ((/* implicit */short) (-(arr_12 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3])));
                            }
                            /* vectorizable */
                            for (signed char i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
                            {
                                var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 1750856185)) : (-5762071705013941971LL)))));
                                var_24 &= 2214183218346429583ULL;
                            }
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_13))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        for (unsigned int i_8 = 2; i_8 < 8; i_8 += 3) 
        {
            for (signed char i_9 = 3; i_9 < 8; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 2; i_10 < 10; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            {
                                var_26 = ((((((((/* implicit */int) arr_33 [i_7] [i_8] [i_9 - 1])) - (((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) | (var_1))) | (((/* implicit */int) (unsigned char)18)));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)33305)) > (((/* implicit */int) ((arr_21 [i_7] [i_8 + 2] [i_9 + 2] [(signed char)11] [i_11]) != (((((/* implicit */_Bool) var_5)) ? (5762071705013941984LL) : (arr_21 [i_7] [i_8] [i_9] [i_10 - 2] [i_11]))))))));
                                var_28 = ((/* implicit */signed char) (((-((+(var_6))))) - (((((/* implicit */_Bool) min((var_0), (((/* implicit */short) (signed char)-115))))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)255)))))))));
                            }
                        } 
                    } 
                    var_29 &= ((/* implicit */signed char) (_Bool)1);
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_9 [i_7] [6ULL])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */_Bool) arr_35 [i_7] [i_8])) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) var_0)))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13147)) ? (((/* implicit */int) (unsigned short)8316)) : (((/* implicit */int) arr_5 [i_7] [i_8] [i_7]))))))))))));
                    arr_36 [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) (short)-32757);
                }
            } 
        } 
    } 
}
