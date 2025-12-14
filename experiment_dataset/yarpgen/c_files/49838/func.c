/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49838
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
    var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (var_8)))) ? (max((var_13), (((/* implicit */long long int) var_8)))) : (max((((/* implicit */long long int) var_12)), (var_2))))), (min((min((var_4), (var_13))), (((/* implicit */long long int) ((var_14) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)112)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8388592U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)5346))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_13 [i_0 - 4] [i_1] [i_2] [i_0 - 4] [i_4])))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_2] [0LL])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [(signed char)3] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) -1838246890818520221LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))));
                            arr_16 [i_4] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-17389)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (short)5346)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0])) : (((/* implicit */int) var_5)))) : ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0 - 2] [(short)7])) : (((/* implicit */int) (signed char)-34))))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 14; i_5 += 3) 
                        {
                            var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27732))) : (647551774U)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3]))) : (arr_1 [i_0] [i_0])))));
                            arr_20 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) arr_2 [i_2]))))) ? (((((/* implicit */_Bool) arr_13 [(signed char)11] [i_1] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_0])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)10942)) : (((/* implicit */int) (signed char)-57))))));
                        }
                        arr_21 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)33))) : (6910209486622472210LL)));
                    }
                    var_21 = ((/* implicit */signed char) min((max((((arr_6 [i_1] [i_1] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_2))), (((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), (arr_4 [i_0] [i_2])))))), (((((/* implicit */_Bool) min((((/* implicit */short) arr_6 [i_1] [i_1] [i_2])), (arr_12 [i_2])))) ? (min((((/* implicit */long long int) (_Bool)1)), (3247680296559033297LL))) : (max((var_4), (((/* implicit */long long int) var_3))))))));
                }
            } 
        } 
    } 
}
