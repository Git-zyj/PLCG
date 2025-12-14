/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189962
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
    var_12 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3])) ? (9151314442816847872LL) : (9151314442816847872LL)));
                            var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-89))));
                        }
                        var_14 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)6744)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)43548)))), (((/* implicit */int) ((signed char) arr_1 [i_0]))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_15 = ((((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) var_1)))) ? (((arr_0 [i_0]) & (((/* implicit */int) (unsigned short)36536)))) : (max((((/* implicit */int) arr_4 [i_3])), (arr_0 [i_5]))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(3403683669954697410LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (short)-32762))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (1489937803) : (((/* implicit */int) arr_11 [i_5] [i_3] [(short)1] [i_0] [i_0]))))))))) : (min((((/* implicit */long long int) (short)32759)), (-9151314442816847872LL)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-8334)) ? (((/* implicit */long long int) 67076096)) : (-9151314442816847877LL)));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_3] [i_6])) + (124))))))));
                        }
                    }
                    arr_22 [i_2] [9] [i_0] [i_0] = ((/* implicit */short) (+(max((arr_9 [i_0] [i_1] [i_2] [i_0]), (arr_9 [i_0] [i_0] [i_0] [i_0])))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_19 = ((/* implicit */signed char) arr_20 [i_0] [i_0] [i_1] [i_1] [(unsigned char)7] [i_7] [(unsigned char)7]);
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                arr_31 [i_0] [i_1] [i_1] [i_8] [i_9] &= max((((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_1] [i_7] [i_8] [i_0]))), (((((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (unsigned short)10215))))) | (((/* implicit */int) ((((/* implicit */int) var_1)) < (-147016992)))))));
                                var_20 = ((/* implicit */unsigned short) max((((-7939634351892926400LL) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57403))) : (-9151314442816847872LL))))), (((/* implicit */long long int) (+(3133250087U))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)201)) ? (((((/* implicit */int) arr_16 [i_1] [i_7] [i_8] [i_9])) << (((((/* implicit */int) arr_16 [i_0] [i_1] [i_7] [i_9])) - (8452))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (arr_20 [i_0] [i_0] [i_7] [i_8] [i_9] [i_0] [i_0]))) : (((/* implicit */int) (_Bool)1))))));
                                var_22 = ((/* implicit */_Bool) 4197118602U);
                            }
                        } 
                    } 
                }
                arr_32 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2928921683U)) ? (1542642397U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)101)))))))) <= (max((arr_12 [i_0] [i_1] [i_0]), (((/* implicit */long long int) ((arr_0 [(signed char)12]) & (((/* implicit */int) var_11)))))))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)1356)), (222332687U)))) ? ((((_Bool)0) ? (((/* implicit */int) arr_23 [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) arr_25 [i_0]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)250))))) : (min((((/* implicit */unsigned long long int) arr_30 [i_1])), (15943346785787249077ULL)))));
            }
        } 
    } 
}
