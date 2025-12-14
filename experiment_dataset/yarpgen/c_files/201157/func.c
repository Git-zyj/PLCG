/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201157
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_11))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [(unsigned char)2] [i_2] = ((/* implicit */unsigned int) var_5);
                    var_16 = ((/* implicit */long long int) var_14);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 6173464890550050010LL))) ? ((-(arr_10 [i_3] [i_1] [7U] [i_2] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4 - 1])))));
                            arr_17 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (((~(((/* implicit */int) var_2)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 1098645754))))))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 2; i_5 < 11; i_5 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) arr_1 [i_2]);
                            var_19 = ((/* implicit */unsigned short) (+(var_12)));
                            var_20 ^= ((/* implicit */unsigned char) ((int) arr_11 [i_5] [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1]));
                            var_21 = (~(((((/* implicit */int) (unsigned short)38951)) ^ (((/* implicit */int) var_4)))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) var_6);
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((arr_6 [i_6] [i_2]) - (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))))));
                            var_24 -= ((/* implicit */unsigned int) (-((+(arr_7 [i_0] [i_1] [i_0])))));
                        }
                        for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((int) ((unsigned int) (short)-16775))))));
                            arr_27 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) var_0);
                            arr_28 [i_2] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (short)-16751)) ? (((/* implicit */int) (unsigned short)38957)) : (((/* implicit */int) (unsigned short)63989)))));
                            var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_2] [3]))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            arr_31 [i_1] [i_2] [(_Bool)1] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3]))) : (arr_7 [i_0] [i_2] [i_2]))) >> (((7175295362814549928LL) - (7175295362814549866LL)))));
                            arr_32 [i_8] [i_3] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) var_12));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_1))) ? ((-(var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_3] [i_2] [i_2])))));
                        }
                        arr_33 [i_0] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_10)) + (41)))))));
                    }
                    var_28 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_13 [i_2] [i_1] [i_2] [i_0] [i_1] [i_2] [i_0])), (max((-1773274105), (((/* implicit */int) (unsigned short)26598))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned int) max((var_3), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */long long int) var_8))))) && (((/* implicit */_Bool) (signed char)-16)))))));
}
