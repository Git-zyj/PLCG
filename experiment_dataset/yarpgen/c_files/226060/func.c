/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226060
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2181431069507584LL)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (short)14937))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_19 = ((((/* implicit */_Bool) ((((long long int) var_10)) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))) ? (((((/* implicit */int) arr_1 [10U])) * (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) max((arr_11 [(unsigned short)6] [i_1] [12ULL] [i_1] [i_1] [i_1]), (arr_11 [(short)10] [i_3] [i_3] [18U] [i_1] [(short)10])))));
                                var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (arr_3 [0LL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))))))) : (((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_15)))))));
                                var_21 = ((/* implicit */long long int) min((((((/* implicit */int) arr_2 [i_3])) >> (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0] [i_2])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0] [i_4]))))));
                                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_4] [(_Bool)1] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0])))) & (((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0] [17] [i_0])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_2 [i_0]))))))));
                    var_24 = var_18;
                    var_25 = (~((((_Bool)1) ? (((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */long long int) 1811101983U)) : (-505292240077999176LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-26355))))));
                }
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    arr_14 [(signed char)14] [(signed char)14] [i_5] |= ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_3 [i_5]))) | ((-(((/* implicit */int) ((unsigned char) arr_11 [i_5] [i_5] [i_1] [i_0] [i_0] [i_5])))))));
                    var_26 += ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)26924)))), (((/* implicit */int) (!(((/* implicit */_Bool) 3570837821U)))))));
                }
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_27 -= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) var_7))))))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-(var_14))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((unsigned int) var_6)))))));
    var_30 *= ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */signed char) ((((((/* implicit */_Bool) 1422140719616582471ULL)) ? (2483865316U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
}
