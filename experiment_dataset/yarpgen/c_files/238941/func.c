/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238941
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_10)))))))));
                    var_13 = ((/* implicit */int) arr_1 [i_0] [i_2]);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned short) arr_2 [i_0] [i_1] [(_Bool)1]))), ((+(min((2059533351U), (((/* implicit */unsigned int) var_7))))))));
                        var_14 = ((/* implicit */long long int) var_11);
                        arr_11 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)1023);
                        var_15 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))) ^ (18446744073709551615ULL))));
                        var_16 = ((/* implicit */_Bool) ((signed char) ((arr_0 [i_1] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64497))))));
                    }
                }
                for (signed char i_4 = 1; i_4 < 22; i_4 += 1) /* same iter space */
                {
                    arr_16 [i_4] [i_1] [i_4 - 1] = ((/* implicit */int) var_11);
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        arr_19 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 72057594037927935ULL)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)9078), ((unsigned short)1023))))) : (((long long int) (unsigned short)65531))));
                        arr_20 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((+(arr_14 [i_0] [i_4]))))))));
                        var_17 = ((/* implicit */unsigned char) ((short) max((((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */unsigned long long int) -1LL)) : (arr_17 [i_0] [i_1] [i_4] [i_5 - 1]))), (var_9))));
                    }
                    for (short i_6 = 3; i_6 < 21; i_6 += 1) 
                    {
                        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((774400197086957709ULL) >> (((-1063699819395578932LL) + (1063699819395578963LL)))))) ? (min((((((/* implicit */int) (unsigned short)64480)) - (((/* implicit */int) (unsigned char)174)))), (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned char)33))));
                        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)(-32767 - 1))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_5)), (arr_2 [i_0] [i_0] [i_0]))))))))));
                        arr_23 [i_0] [i_0] [i_4] [(unsigned short)4] [i_0] = max((((/* implicit */unsigned long long int) max((arr_14 [i_4] [i_4]), (arr_14 [i_4] [i_4])))), (min((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) arr_13 [i_1])), (927744627501678105ULL))))));
                    }
                }
                for (signed char i_7 = 1; i_7 < 22; i_7 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */short) (unsigned short)58942);
                    var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) var_3))))), (arr_0 [i_1] [i_7])));
                }
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(max((3763991342U), (((/* implicit */unsigned int) var_6)))))))));
                arr_26 [i_0] = ((/* implicit */unsigned short) 5678868671348519359LL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        for (short i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7841882133432051056ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (17059118944436318223ULL))) : (max((18347400117479054553ULL), (((/* implicit */unsigned long long int) arr_7 [i_8]))))))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (_Bool)1)))))))));
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) (short)-27355))))))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        {
                            var_25 = ((((((/* implicit */_Bool) 1063699819395578931LL)) ? (5678868671348519373LL) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [8ULL] [i_9] [i_9] [i_9])) && (((/* implicit */_Bool) var_11))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_8] [0U])) && (((/* implicit */_Bool) (+(arr_35 [i_8] [i_9]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) var_3);
    var_28 = ((/* implicit */int) var_0);
}
