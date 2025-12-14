/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54666
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) arr_11 [i_4 + 1] [i_3 - 1] [i_3] [i_3] [i_1] [i_0]);
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4 + 3] [i_3] [i_3 + 1] [i_2] [i_1] [i_3] [i_0])) ^ (((((/* implicit */int) arr_14 [i_0] [i_0] [i_3] [i_0] [i_0])) | (((/* implicit */int) arr_4 [i_4 - 4]))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_3 - 1] [i_4 + 3])) : (((/* implicit */int) arr_6 [i_1] [i_0]))))) | (min((((/* implicit */unsigned int) arr_4 [i_1])), (var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                                arr_16 [i_0] [i_3] [i_3 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)50085)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_3 - 1]))))))) ? (arr_8 [i_0] [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) var_11)) | (((((/* implicit */int) (unsigned char)255)) + (var_7))))))));
                                var_19 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50061)))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned short)15457)) : (((/* implicit */int) ((unsigned short) (short)10651))))) | (((/* implicit */int) ((((_Bool) var_0)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (2874603300U)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)48))))) | (((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_14))))))), (min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))), (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_6))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            {
                var_21 |= ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_18 [i_5]), (((/* implicit */short) (!(((/* implicit */_Bool) var_7))))))))));
                var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_9))))))) ? (((/* implicit */int) max((arr_18 [i_6]), (arr_18 [i_5])))) : ((-(((/* implicit */int) arr_20 [i_5] [i_6]))))));
            }
        } 
    } 
}
