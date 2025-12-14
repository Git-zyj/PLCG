/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235800
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) arr_10 [(unsigned char)6] [i_1] [i_0] [i_2])))), (((((/* implicit */int) (unsigned char)172)) >> (((((/* implicit */int) var_11)) + (88))))))))))) : (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) arr_10 [(unsigned char)6] [i_1] [i_0] [i_2])))), (((((/* implicit */int) (unsigned char)172)) >> (((((/* implicit */int) var_11)) + (88)))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)36)), (arr_16 [i_0] [i_3])))) ? (max((min((((/* implicit */long long int) arr_5 [i_0] [i_1] [(unsigned short)4])), (3547138132797763458LL))), (((/* implicit */long long int) arr_11 [i_4] [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4] [0U] [i_2] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_1)))))));
                                var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) ((long long int) (unsigned short)27668))))));
                                var_20 = ((/* implicit */long long int) max((((/* implicit */int) var_6)), (max(((-(((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_0])))), (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11))))))));
                                arr_18 [i_0] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])) ? (min((((262016U) >> (((var_9) - (18129869984187735993ULL))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) min((var_2), (((/* implicit */signed char) arr_11 [i_0] [i_0] [i_3] [i_4]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 6; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                arr_23 [(unsigned short)4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)65534)), (262008U)));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned short)21654)) : (((/* implicit */int) (unsigned short)65535)))) / (((((/* implicit */int) arr_17 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4])) - (-831967756))))) + (min((arr_2 [(unsigned char)8]), (((/* implicit */int) var_16)))))))));
                                var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)43881)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) ((short) var_10));
                }
            } 
        } 
    } 
    var_25 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((var_1), (((/* implicit */short) max((var_15), (var_15))))))) : ((-(((/* implicit */int) var_12)))));
}
