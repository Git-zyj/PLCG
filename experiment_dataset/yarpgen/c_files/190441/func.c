/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190441
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0 - 2] [i_0] = (((~(arr_7 [i_0]))) >= (((/* implicit */unsigned int) min((((/* implicit */int) min((var_10), (var_2)))), ((+(((/* implicit */int) arr_5 [i_3] [i_4]))))))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)10871))))), (((arr_7 [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-(arr_8 [i_0 - 2] [i_1])))) : ((~(2691527983852281727LL)))))));
                                var_14 = ((/* implicit */unsigned short) (!(((arr_0 [i_0]) && (arr_0 [i_0])))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) arr_18 [i_0] [i_6])))) && (((/* implicit */_Bool) min(((short)10), (((/* implicit */short) arr_1 [(unsigned char)8]))))))), (((((/* implicit */_Bool) ((unsigned int) var_7))) && (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 3472447292828230065LL)))))))))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1)))))));
                                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 + 1]))))), (((((/* implicit */int) arr_3 [i_5] [i_1] [i_0])) ^ (((/* implicit */int) var_12)))))))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_20 [i_0] [i_1] [i_0 + 3] [i_5] [i_5]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_21 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 2710245759U)) != (-2583314957743319632LL))))) / (((2710245767U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]))))))));
    }
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) var_5))))))));
    var_20 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_4)))))));
    var_21 = var_10;
}
