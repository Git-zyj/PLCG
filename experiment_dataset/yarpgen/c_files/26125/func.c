/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26125
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
    var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22206)) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) var_18)) * (((/* implicit */int) (short)22205))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22213))) : (((((((/* implicit */_Bool) 704378949U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22214))) : (var_1))) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 &= ((/* implicit */short) (~((-(((/* implicit */int) ((_Bool) 9140023601973764502LL)))))));
                            arr_9 [i_0 - 3] [i_1] [i_0] [i_3] = ((/* implicit */long long int) (signed char)-49);
                            var_22 = ((/* implicit */unsigned short) arr_2 [i_0] [i_3]);
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) - (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-117)) + (2147483647))) << (((((/* implicit */int) (unsigned short)51265)) - (51265)))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [(signed char)8]))) : (var_17)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (int i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) % (((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */unsigned int) arr_6 [i_6] [(short)12] [i_4] [i_6 + 1])) : (704378949U))))))));
                                var_25 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0 - 1])) ? (arr_6 [i_0] [i_0 + 2] [i_0] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0] [i_0] [i_0 - 4])))));
                            }
                        } 
                    } 
                    var_26 = var_5;
                }
                for (unsigned int i_7 = 3; i_7 < 16; i_7 += 3) 
                {
                    var_27 += ((/* implicit */short) ((long long int) arr_4 [(signed char)4] [(signed char)4] [i_1] [i_7]));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-(((3590588376U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52))))))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        {
                            var_29 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (short)-681)))))) >> (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9]))) > (var_17)))) % (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_18))))))));
                            arr_22 [(signed char)12] [i_0] [i_8] [i_8] [i_8] [i_8] = arr_4 [i_0] [i_1] [i_8] [i_9];
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) ((unsigned char) ((signed char) ((var_14) ? (((/* implicit */unsigned long long int) var_15)) : (var_17)))));
    var_31 = ((/* implicit */signed char) ((_Bool) var_6));
}
