/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209504
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)119)) + (((/* implicit */int) (unsigned char)115))))) && (((((/* implicit */int) (unsigned char)140)) > (((/* implicit */int) (short)-18883)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_4)));
                var_15 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 3120423588U)) ? (-12) : (((/* implicit */int) (unsigned char)137)))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_16 = max((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-26203))))) ? (((/* implicit */long long int) (-(arr_4 [i_0])))) : (max((5297872204602681626LL), (((/* implicit */long long int) -1022829941)))))), (((/* implicit */long long int) ((int) arr_5 [i_0]))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) ((unsigned int) 1022829944))) ? (1152921470247108608LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (2271855854174356677LL)));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_4)) ? (arr_6 [i_0] [i_0] [i_0]) : (var_9)))))), (max((arr_3 [i_0] [i_0]), (((/* implicit */long long int) (-(((/* implicit */int) (short)-26197)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)4830))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_1)) : (-6615370928551915750LL)))))) ? (((((/* implicit */int) var_7)) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (var_4)))))) : (((/* implicit */int) min(((short)4331), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) && (((/* implicit */_Bool) var_10))))))))));
                                arr_15 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (3970442580U)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19061)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) var_8)))) : (((((/* implicit */int) arr_5 [i_0])) + (((/* implicit */int) (unsigned char)0))))))));
                                var_18 = ((((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)7582)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_12)))) : (max((((/* implicit */long long int) var_8)), (7354287456184135368LL))))) & (((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */long long int) arr_4 [i_0])), (-4461523900581024924LL)))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_0]), (arr_13 [i_0] [i_2])))) ? (((((/* implicit */int) arr_1 [i_0] [i_1])) / ((~(((/* implicit */int) (_Bool)0)))))) : (var_1)));
                }
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */long long int) (+(((((((((/* implicit */_Bool) (short)-26226)) ? (((/* implicit */int) (short)-20426)) : (((/* implicit */int) (unsigned char)255)))) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-26203)))) - (1)))))));
                                var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)28816), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((long long int) ((short) arr_5 [i_0])))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_11)) ? (var_6) : (var_9)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_9 [i_0] [i_0]) : (((/* implicit */unsigned long long int) max((var_4), (arr_10 [i_0] [i_1] [i_1] [i_6] [i_7])))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 ^= ((/* implicit */long long int) var_2);
}
