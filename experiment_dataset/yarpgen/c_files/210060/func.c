/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210060
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_12 &= ((/* implicit */_Bool) ((unsigned char) arr_5 [i_0]));
                                var_13 ^= max((((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) arr_11 [i_0])) : (1019113944))), (((/* implicit */int) arr_11 [i_4])));
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_11))));
                                var_15 = arr_14 [8ULL] [(_Bool)1] [i_2] [i_3] [i_4];
                                var_16 ^= ((/* implicit */_Bool) arr_13 [(short)1] [i_1] [i_3 - 2] [i_3] [i_4 - 1] [(_Bool)1]);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_0 [i_1])), (max((max((arr_2 [(short)5]), (((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_1] [i_2])))), (((/* implicit */unsigned short) arr_11 [i_0])))))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_1])) - (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-31)))))))))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_6 [i_2] [8LL] [i_1] [11U])) : ((~((-(((/* implicit */int) (_Bool)1)))))))))));
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */long long int) max((max((var_3), (((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
}
