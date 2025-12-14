/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221566
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [16LL] [i_2] [i_3] [i_0] [(unsigned char)0]))))))));
                                arr_14 [i_3] [i_0] [(unsigned short)8] [i_3] [(unsigned char)11] [(signed char)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((short)-3224), (((/* implicit */short) arr_6 [i_1 - 1] [i_1 - 1] [i_0] [i_1 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 2] [i_0] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 1] [i_0] [i_1 - 1])))))));
                            }
                            for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                            {
                                var_21 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_0] [i_3] [i_5] [i_2])) ? (372255653U) : (((/* implicit */unsigned int) 966871382))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_1] [10]))) : (var_15))), (((/* implicit */long long int) ((372255653U) << (((/* implicit */int) (signed char)0))))));
                                var_22 = ((/* implicit */long long int) arr_1 [4] [4LL]);
                            }
                            var_23 = ((/* implicit */unsigned int) min((min((arr_3 [i_0] [i_1 - 1]), (arr_3 [i_0] [i_1 - 1]))), (((/* implicit */unsigned long long int) arr_0 [i_3]))));
                            arr_17 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (~(3922711650U)));
                            var_24 = ((/* implicit */signed char) min((arr_6 [i_3] [i_1 + 3] [i_0] [i_2]), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (signed char)-5)))))))));
                        }
                    } 
                } 
                arr_18 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_13 [i_0] [i_0] [(unsigned char)1])))) ? ((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))) : ((~(((/* implicit */int) var_7)))))))));
                var_25 = ((/* implicit */long long int) arr_15 [i_1 + 3] [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 2]);
            }
        } 
    } 
    var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48757)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (unsigned char)213)))))));
    var_27 = ((/* implicit */_Bool) var_7);
    var_28 = ((/* implicit */short) var_0);
    var_29 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned long long int) var_5))))))) || (((/* implicit */_Bool) min((696386960), (((/* implicit */int) (signed char)-11)))))));
}
