/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39281
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
    var_12 &= ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_4 [i_0]), (arr_4 [i_1])))) <= (((/* implicit */int) max((min((var_3), (var_3))), (((/* implicit */signed char) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_0 [i_0]))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned int i_4 = 1; i_4 < 16; i_4 += 2) /* same iter space */
                            {
                                arr_16 [(signed char)10] [i_0] [i_3] [i_3] [i_1] [i_3] = ((/* implicit */_Bool) ((var_11) >> (((max((((/* implicit */int) ((_Bool) arr_3 [7] [1U] [i_4]))), ((-(-935898750))))) - (935898744)))));
                                var_14 = ((/* implicit */unsigned int) ((min((min((var_9), (((/* implicit */int) arr_10 [i_1] [i_2 - 2])))), (((((/* implicit */int) arr_5 [i_2] [i_3] [i_4])) / (arr_2 [i_3]))))) <= (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_0] [(_Bool)1]))))))));
                            }
                            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) /* same iter space */
                            {
                                arr_21 [i_0] [i_0] [i_1] [i_1] [i_3] [i_5] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((1719529584U) % (((/* implicit */unsigned int) -1170558462))))) || (((/* implicit */_Bool) (-(var_6))))));
                                var_15 *= (!((!(((/* implicit */_Bool) var_5)))));
                                var_16 = ((/* implicit */long long int) max((var_16), ((+(min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2))), (((/* implicit */long long int) arr_15 [i_5] [i_3] [i_3] [i_2 + 3] [i_1] [i_1] [i_0]))))))));
                                arr_22 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) ((arr_14 [i_0] [i_1] [i_2 + 2] [i_2] [i_5] [i_0]) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))))) : (((/* implicit */int) ((((((/* implicit */int) arr_5 [i_0] [7U] [i_0])) >> (((/* implicit */int) arr_5 [i_1] [i_2] [i_2])))) < (((/* implicit */int) (!(arr_3 [i_2] [i_2] [i_2])))))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2575437737U)) ? (1719529584U) : (2575437712U)));
                            }
                            for (unsigned int i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
                            {
                                arr_26 [i_1] [i_1] [i_2] [(_Bool)1] [i_6] [i_1] [i_6] = max(((!(((/* implicit */_Bool) (unsigned char)18)))), ((!(((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6 - 1] [i_6 + 1])))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [(signed char)16] [i_0])), (var_7)))) : (((/* implicit */int) arr_17 [i_6] [i_6 + 2] [i_0] [i_6 + 2] [i_6 + 1]))))) ? (min(((+(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) 1719529558U)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned char)56)))))) : (((/* implicit */int) var_1))));
                            }
                            for (unsigned int i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
                            {
                                arr_29 [i_7] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((min((((unsigned int) var_9)), (((((/* implicit */_Bool) var_2)) ? (arr_13 [i_2 + 3] [i_2 + 3] [1ULL] [i_3] [i_7] [i_2 + 3] [(_Bool)1]) : (((/* implicit */unsigned int) var_9)))))) - (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_24 [(signed char)17])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))));
                                arr_30 [i_1] [i_2] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) arr_9 [i_2 + 2] [i_1] [i_7 + 2])) : (((long long int) arr_14 [3U] [i_1] [i_2] [i_1] [i_3] [i_7 + 2]))))));
                            }
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((arr_19 [i_2 + 3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] [i_0])) && (((/* implicit */_Bool) var_2)))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_3])) && (((/* implicit */_Bool) var_2))))), (var_10))) : (max((((/* implicit */unsigned int) arr_3 [i_2 + 3] [i_2] [i_2 + 3])), (((arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_2 + 2] [i_3]) / (((/* implicit */unsigned int) arr_2 [i_1])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
