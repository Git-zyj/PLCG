/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50765
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
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_13 = ((/* implicit */_Bool) (-(max((-8528264347016920471LL), (((/* implicit */long long int) arr_5 [i_0 - 2] [i_1]))))));
                    var_14 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_0)), ((~(-1879978889019926876LL)))));
                }
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    var_15 |= ((/* implicit */signed char) var_10);
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) max(((~(-537747329769415576LL))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)239)), (arr_15 [i_0 + 1] [i_1 + 1] [i_4 + 1] [i_4] [i_5]))))));
                                var_17 |= ((((/* implicit */_Bool) arr_11 [i_1 + 3] [i_1 - 1] [i_3] [i_4 + 2] [i_5])) ? (((arr_11 [i_1 + 3] [i_1 - 1] [i_3] [i_4 + 2] [i_5]) + (arr_11 [i_1 - 1] [i_1] [i_1] [i_4 - 1] [i_5]))) : (((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1] [(unsigned short)16] [i_4 - 1] [i_5])) ? (arr_11 [i_1 + 2] [i_1 + 2] [i_3] [i_4 + 2] [i_5]) : (arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_4 - 1] [i_5]))));
                                var_18 = ((/* implicit */signed char) ((arr_1 [i_5]) ? (((unsigned int) (~(((/* implicit */int) (signed char)-70))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (signed char)100)))))))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */long long int) (+(((int) ((((/* implicit */_Bool) 9292165292512242599ULL)) ? (2373854867U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [3U] [i_1 + 4]))))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 16; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        {
                            arr_21 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_7] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) + (max((6708453543031287045ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0 + 2] [i_0]))))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                            {
                                arr_25 [i_8] [i_1] [i_8] [i_8] [16LL] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_2)))));
                                arr_26 [i_0] [i_1] [i_6 - 1] [i_7] [8U] &= ((/* implicit */signed char) (+((+(((/* implicit */int) max(((unsigned short)15699), (((/* implicit */unsigned short) var_3)))))))));
                            }
                            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
                            {
                                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((1921112432U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15699))))))));
                                var_21 -= ((/* implicit */unsigned char) 315123039U);
                            }
                            /* LoopSeq 3 */
                            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_7] [i_10])) ? (var_8) : (arr_29 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_10])))))))) ? (((/* implicit */unsigned long long int) ((arr_23 [(unsigned char)12] [(unsigned short)10] [i_7]) & (((/* implicit */int) arr_4 [i_1] [i_10]))))) : (min((((unsigned long long int) 3979844256U)), (((/* implicit */unsigned long long int) ((unsigned short) var_11))))))))));
                                var_23 = ((/* implicit */_Bool) min(((unsigned short)25602), ((unsigned short)39933)));
                            }
                            for (short i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                            {
                                var_24 += arr_16 [i_1] [i_6] [i_6];
                                arr_34 [i_1] [i_1 + 4] [i_6] [i_7] [i_1] = ((/* implicit */_Bool) ((signed char) ((1626255432752511618ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52))))));
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_5))));
                                var_26 *= ((/* implicit */_Bool) (unsigned short)15699);
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1])) ? ((-(((/* implicit */int) ((unsigned short) arr_13 [i_1 + 1] [i_7] [i_1 + 1] [i_0 - 2]))))) : (((/* implicit */int) (signed char)0))));
                            }
                            for (short i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
                            {
                                arr_37 [i_0] [i_1] [i_12] = ((/* implicit */unsigned int) max((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) max((1586210752U), (4213458894U))))));
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3525888773U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_1 [i_7])))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)46))) >= (var_9))))))) ? (((/* implicit */unsigned int) (~(((arr_5 [i_1] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) arr_16 [i_0 + 2] [i_0 + 2] [i_0])) ? (arr_16 [i_0 - 2] [i_0 - 2] [13]) : (arr_16 [i_0 - 2] [i_0] [9ULL])))));
                                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) + (315123039U)))))) ? (((/* implicit */unsigned long long int) max((553259326U), ((-(arr_11 [i_0] [i_1 + 4] [i_6 + 1] [i_7] [i_12])))))) : (min((((/* implicit */unsigned long long int) min((1720702194), (((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_12] [(unsigned short)8]))))), (((arr_6 [i_0 - 3] [i_0] [i_0] [i_0 + 1]) % (((/* implicit */unsigned long long int) var_8)))))))))));
                            }
                        }
                    } 
                } 
                var_30 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [10LL] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 4] [i_1] [i_1 - 1])))))) | (arr_36 [i_1 + 4]));
                arr_38 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_0 - 1]);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) min((var_31), ((~(max((min((((/* implicit */unsigned int) (_Bool)1)), (315123040U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)12)))))))))));
}
