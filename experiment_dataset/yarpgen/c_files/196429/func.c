/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196429
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
    var_15 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((arr_1 [i_0 + 3] [i_1]) == (((/* implicit */int) arr_7 [i_2])))))))) - (7690746450276653965ULL)));
                    var_17 = ((/* implicit */int) var_3);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
                    {
                        arr_10 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29932))) : (var_7)))) && (((/* implicit */_Bool) min(((unsigned short)35596), (((/* implicit */unsigned short) var_2))))))), (arr_3 [i_1])));
                        arr_11 [i_0] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) arr_8 [i_3] [i_0] [i_0] [i_0]);
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), ((unsigned short)35598)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29945)))))) ? (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (_Bool)1)), (-2)))))) : (((arr_6 [i_0 + 1] [i_0 - 1] [i_2] [i_0 - 1]) & (arr_6 [i_0 + 1] [i_0 + 4] [i_1] [4])))));
                        arr_12 [i_0] [i_1] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)35595)))), (((((/* implicit */int) arr_2 [i_0 - 1])) >> (((/* implicit */int) var_3))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5 + 1] [i_1] [i_0] [i_0 + 4])) && (arr_14 [i_5 + 1] [i_1] [i_2] [i_0 + 4])));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) && ((_Bool)0)));
                        }
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (arr_15 [i_0] [i_0 + 3] [i_2]))));
                            var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_7 [i_0 + 1]), (arr_7 [i_0 + 1])))), (((var_2) ? (((/* implicit */int) arr_7 [i_0 + 2])) : (((/* implicit */int) arr_7 [i_0 + 4]))))));
                            arr_23 [i_0] [i_2] [i_2] [i_2] [10U] |= ((/* implicit */short) arr_19 [i_0 + 4] [i_0 + 4] [i_2] [i_2] [i_2] [12ULL] [i_2]);
                            var_22 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) 5230724783142303047ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11534))) : (var_13))))) <= (((/* implicit */unsigned long long int) ((((-7240575236626676517LL) + (9223372036854775807LL))) >> (((arr_4 [(unsigned short)13]) - (14023840143430175235ULL))))))));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
                        {
                            var_23 = (-((+(((/* implicit */int) var_8)))));
                            var_24 = ((/* implicit */unsigned short) arr_18 [i_0 + 4] [i_7 + 1] [i_7 + 1] [i_7]);
                            var_25 = ((/* implicit */unsigned int) ((var_0) >> (((arr_8 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]) + (546681297)))));
                        }
                        arr_27 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) var_2);
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 2; i_8 < 17; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((short) arr_25 [i_0 + 3] [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0])))));
                        var_27 = ((_Bool) ((_Bool) arr_18 [i_0] [i_1] [i_1] [i_8]));
                        var_28 -= ((/* implicit */unsigned short) arr_22 [i_0] [i_1] [i_1] [i_0] [i_0 + 1]);
                    }
                    var_29 = ((/* implicit */unsigned long long int) ((_Bool) 5230724783142303047ULL));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54672)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 13216019290567248562ULL)) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) max((var_5), (var_9))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) 5230724783142303056ULL)) || (var_2)))) & (((((/* implicit */int) (unsigned char)240)) * (((/* implicit */int) var_11)))))) : (1007092980)));
}
