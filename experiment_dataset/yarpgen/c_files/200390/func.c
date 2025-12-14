/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200390
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)67)) ? (-1) : (((/* implicit */int) (unsigned char)67))))) ? (((long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))) : (arr_1 [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_12 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((max((arr_1 [i_2]), (((/* implicit */unsigned long long int) var_1)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                            arr_11 [i_0] [i_1] [i_1] [i_3] &= ((/* implicit */_Bool) var_6);
                            var_13 = ((long long int) min((((/* implicit */int) var_7)), ((~(((/* implicit */int) (signed char)55))))));
                            /* LoopSeq 3 */
                            for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */unsigned char) (short)3);
                                var_15 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]);
                                arr_15 [i_0] [i_0] [i_4] [i_4] [i_4] [i_1] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)0))));
                                arr_16 [i_0] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9680258599724385921ULL))));
                            }
                            for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                            {
                                arr_20 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((_Bool) (signed char)-62));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)65))))) : (arr_14 [i_1 + 2] [i_1] [i_1 - 2] [i_1] [i_1 - 2])))) ? ((-(((/* implicit */int) (unsigned char)61)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)188)) & (((/* implicit */int) (signed char)74))))) ? (((/* implicit */int) (unsigned char)57)) : ((+(((/* implicit */int) var_4))))))));
                                var_17 &= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_3 - 2] [i_2] [i_2 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */long long int) arr_10 [i_1 + 2] [i_1] [i_2 + 1])) : (var_5))));
                                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
                                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)28050))))))))));
                            }
                            for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                            {
                                var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) min((16777215U), (((/* implicit */unsigned int) arr_5 [i_1] [i_3] [i_1])))))), (min((((/* implicit */unsigned long long int) 1467667006)), (2270877644081608321ULL)))));
                                var_21 |= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))), (arr_0 [i_1 + 1] [i_3 - 1]))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8057))) : (6510222415827159091LL))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (unsigned char)60))));
                                var_23 += ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? ((((_Bool)1) ? (-7140757646815137094LL) : (((/* implicit */long long int) 1969096906U)))) : (min((((/* implicit */long long int) arr_8 [i_0] [i_2] [i_2] [i_6])), (arr_3 [i_0] [i_3] [i_6]))))) + (9223372036854775807LL))) << ((((!(((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 569532642U)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (signed char)-112))))))));
                                var_24 &= ((/* implicit */unsigned char) 16175866429627943295ULL);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) (unsigned char)100);
    var_26 = ((/* implicit */_Bool) var_4);
    var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)9)))))));
}
