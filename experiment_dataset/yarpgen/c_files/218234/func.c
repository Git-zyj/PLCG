/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218234
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
    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_8)) == (((((/* implicit */_Bool) var_4)) ? (var_5) : (var_5))))), ((_Bool)1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 1; i_4 < 24; i_4 += 2) /* same iter space */
                            {
                                var_18 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) / (((((unsigned long long int) var_13)) + (((/* implicit */unsigned long long int) (-(3910644495U)))))));
                                arr_10 [i_4 + 1] [i_3 + 2] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4414198269304770821ULL)) ? (6307793047017430635ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_6 [i_3 + 2] [i_3] [i_3] [i_0 - 1])))) : (min((((/* implicit */unsigned long long int) var_12)), (arr_5 [i_1] [i_1] [i_0]))))))));
                            }
                            for (unsigned short i_5 = 1; i_5 < 24; i_5 += 2) /* same iter space */
                            {
                                var_19 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5 + 1] [i_3] [(unsigned short)2] [i_3] [i_0 - 1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (max((((/* implicit */long long int) 3910644495U)), (-8470053562656745656LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) <= (max((min((((/* implicit */unsigned long long int) var_15)), (2098662821535470644ULL))), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_3 - 2] [i_2] [i_1] [i_1])))))))));
                                var_21 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_4 [(signed char)7]))), (((/* implicit */long long int) (_Bool)1))))) ? (max((((unsigned long long int) 384322800U)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 3] [i_1] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)35284))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_3 - 3] [i_2] [i_1] [12ULL])) ? ((+(arr_0 [i_5 + 1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (_Bool)1))))))))));
                            }
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 641888821U)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (6329421776317296800ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233)))));
                        }
                    } 
                } 
                var_23 += ((/* implicit */unsigned char) var_3);
                arr_13 [i_1] [i_0 - 1] [i_0] |= max((((/* implicit */unsigned short) ((_Bool) arr_12 [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1]))), (var_12));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    for (unsigned short i_7 = 2; i_7 < 23; i_7 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                            var_25 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
                            var_26 = ((/* implicit */unsigned short) var_2);
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) max((((/* implicit */int) var_8)), ((+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_11 [i_7 - 1] [i_7] [i_1] [i_7] [i_0 + 1])))))))))));
                            arr_21 [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30251)) ? (((/* implicit */unsigned long long int) 9223372036854775796LL)) : (0ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
