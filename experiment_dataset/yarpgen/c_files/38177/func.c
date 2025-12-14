/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38177
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
    var_10 = ((/* implicit */short) (unsigned short)13);
    var_11 -= ((/* implicit */unsigned char) ((short) ((int) (!((_Bool)1)))));
    var_12 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_1)))) ? (max((var_9), (((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((((((/* implicit */int) var_1)) != (((/* implicit */int) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_9)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [14U])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1] [(signed char)6] [i_3])))), (((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (max((var_4), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_10 [i_0] [i_1] [i_2] [i_2])))))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1]))) >= ((-(((/* implicit */int) arr_0 [i_1]))))));
                            arr_12 [i_0] [i_1] [(unsigned short)12] [(unsigned char)8] [i_3] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) arr_5 [i_0] [i_0] [(_Bool)1] [i_3])))))) / (((/* implicit */int) arr_4 [i_0] [i_1] [(signed char)4]))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_14 += ((/* implicit */short) ((_Bool) ((arr_13 [i_0] [(unsigned char)6] [i_2] [16LL] [i_3] [i_4] [i_0]) ^ (((/* implicit */int) var_5)))));
                                var_15 = ((/* implicit */unsigned short) ((var_4) != (((((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])) & (((/* implicit */int) var_1))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((arr_3 [i_2] [i_2]) ^ (var_4)));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_16 = ((/* implicit */int) max((var_16), (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [(_Bool)1] [i_3] [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2])))), (((/* implicit */int) max(((_Bool)1), ((_Bool)0))))))));
                                var_17 ^= max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_3] [i_5])) ? (2147483647) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [(unsigned char)7]))))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_5])) < (((/* implicit */int) var_5)))))) : (((arr_7 [i_0] [i_2] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27437))) : (10U))))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */long long int) ((((_Bool) (short)25673)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 1279725454)) ? (((/* implicit */int) (unsigned short)51100)) : (var_3)))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_2] [i_2] [i_5]))) : (var_9))))))));
                                arr_19 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */int) var_6);
                                arr_20 [i_0] [i_0] [i_3] [i_2] [i_5] = ((/* implicit */int) 3768910551U);
                            }
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (-(((arr_7 [18] [i_1] [3]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12176))) : (var_9))))))));
                        }
                    } 
                } 
                arr_21 [13] [i_1] [i_0] = ((/* implicit */_Bool) var_8);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_23 [i_6 + 1])) - (26507))))) % (((((/* implicit */_Bool) arr_23 [i_6 + 1])) ? (((/* implicit */int) arr_10 [i_6 + 1] [8LL] [8LL] [i_7])) : (((/* implicit */int) arr_23 [i_6 + 1]))))));
                arr_30 [i_6] [i_6 + 1] [i_6] &= ((/* implicit */_Bool) max((arr_1 [i_6 + 1]), (min((arr_27 [i_6 + 1] [i_6 + 1]), (arr_1 [i_6 + 1])))));
            }
        } 
    } 
}
