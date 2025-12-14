/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28402
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (~(var_8))))));
        var_12 += ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)16869)) : (((/* implicit */int) (unsigned char)124)));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_13 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_5)) == (((unsigned long long int) (unsigned short)16900))));
        var_14 = ((/* implicit */int) var_0);
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (short i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) (unsigned short)48623)));
                            var_16 += ((/* implicit */unsigned long long int) ((long long int) (unsigned short)16900));
                            arr_18 [(unsigned short)1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_17 [9ULL] [i_6] [i_3 - 1] [i_3 + 2]))));
                        }
                        for (unsigned short i_7 = 3; i_7 < 18; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)48667)) ? (((/* implicit */unsigned long long int) max((-1), (((/* implicit */int) (unsigned short)63))))) : (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) 9223372036854775796LL)))))))))));
                            arr_22 [i_2] [15ULL] [15ULL] [i_7] = ((/* implicit */_Bool) ((int) max((var_5), (((/* implicit */unsigned int) arr_19 [i_3] [i_7 - 3] [i_3 - 1])))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned char) min((arr_9 [i_7] [i_7 + 1] [i_4] [i_3 + 2]), (((/* implicit */int) var_6))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            arr_26 [i_5] [i_5] [i_5] [(_Bool)1] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16869))) : (var_5)));
                            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)48667)) : (((/* implicit */int) arr_19 [i_5] [i_3] [i_2]))))) ? ((+(var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            arr_27 [i_3] [i_8] [(_Bool)1] [i_3 - 1] [i_5] = ((/* implicit */_Bool) (~(1232969800503217522ULL)));
                        }
                        arr_28 [i_2] [i_2] [i_4] [i_4] [i_5] = ((/* implicit */long long int) var_1);
                    }
                } 
            } 
        } 
        arr_29 [i_2] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14165)))) > (arr_10 [i_2] [i_2] [(signed char)6] [i_2]))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) var_0)), ((unsigned short)65480))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)48667))))) ? (((((/* implicit */_Bool) (unsigned short)48635)) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [(unsigned char)18])) : (((/* implicit */int) arr_19 [i_2] [(unsigned char)4] [i_2])))) : (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_6)))))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_24 [(unsigned short)0] [i_2]), (((/* implicit */unsigned short) var_0))))) & (min((((/* implicit */int) (unsigned short)48655)), (358717712)))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((signed char) (-(var_2))))), ((unsigned short)48666))))));
    }
    var_22 = ((unsigned int) max((min((var_2), (var_2))), (((/* implicit */unsigned int) max(((signed char)22), (((/* implicit */signed char) var_10)))))));
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) var_3)))))));
    var_24 = ((/* implicit */int) (signed char)-58);
}
