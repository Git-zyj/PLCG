/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200730
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) var_3))))))));
    var_11 = ((/* implicit */short) var_4);
    var_12 = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19256))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) || (((/* implicit */_Bool) var_1))))) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))))) << (((/* implicit */int) ((unsigned char) max((arr_3 [i_0] [i_0] [i_2]), ((_Bool)0))))));
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2]))));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_4 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_0] [i_2])))) : (arr_4 [i_0] [i_0])));
                    var_13 += ((/* implicit */signed char) ((((/* implicit */int) (short)4796)) * (((/* implicit */int) (unsigned char)162))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 += ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) arr_2 [i_0])))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == zero) ? (((0ULL) >> (((arr_5 [i_0] [i_2]) - (7583359026477698365ULL))))) : (((0ULL) >> (((((arr_5 [i_0] [i_2]) - (7583359026477698365ULL))) - (7511576301187708578ULL)))));
                        var_15 &= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (arr_10 [i_0] [i_1] [i_1] [i_3]))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0])))))));
                            arr_16 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) arr_6 [i_3] [i_3] [i_3] [i_3]));
                            arr_17 [i_0] [i_2] = ((/* implicit */signed char) arr_10 [i_0] [i_2] [i_2] [i_3]);
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 1) 
                        {
                            arr_22 [i_2] = ((/* implicit */signed char) arr_10 [i_0] [i_2] [i_0] [i_0]);
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_5 + 3] [i_5]))));
                        }
                        for (unsigned short i_6 = 3; i_6 < 21; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 65535U))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7)))) : (((arr_21 [i_2] [i_1] [i_2] [i_3] [i_3] [i_6]) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_3] [i_6])) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2] [i_6 - 1]))))));
                            arr_26 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_6 + 2] [i_3] [i_6])) ? (((/* implicit */int) arr_11 [i_6] [i_6 + 2] [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_6])) : (arr_15 [i_0] [i_1] [i_6 - 1] [i_3] [i_6])));
                            var_19 -= ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_2] [i_3]);
                        }
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) arr_21 [i_2] [i_1] [i_1] [i_1] [i_2] [i_1]);
                        arr_30 [i_2] = ((/* implicit */_Bool) (((-(var_0))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        arr_31 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                }
            } 
        } 
    } 
}
