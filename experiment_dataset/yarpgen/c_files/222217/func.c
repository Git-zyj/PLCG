/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222217
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
    var_15 = (-(var_9));
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */int) var_6))))) : (min((((/* implicit */unsigned int) (-2147483647 - 1))), (var_10)))))));
    var_17 = ((/* implicit */unsigned char) max((var_0), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 |= ((/* implicit */int) min((((unsigned char) arr_2 [i_0] [i_1])), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)160)) == (((/* implicit */int) arr_2 [i_1] [i_0])))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) var_9);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = var_5;
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_2] [i_3])))))))) ? (((/* implicit */long long int) min((((/* implicit */int) (short)3214)), (2147483647)))) : (((((/* implicit */_Bool) ((long long int) arr_2 [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */long long int) (-2147483647 - 1))), (arr_6 [(unsigned char)0] [(unsigned char)0] [i_3] [i_4])))))));
                                var_22 = ((/* implicit */_Bool) ((arr_4 [i_0] [i_3]) - (847317968)));
                                arr_14 [i_0] [12U] [i_0] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_2])), (((long long int) var_6))))) ? (((/* implicit */int) max((((/* implicit */short) arr_13 [0] [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_12 [i_0] [i_2] [i_0] [i_3] [i_4])))) : (((/* implicit */int) min((arr_11 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_1] [i_0]))))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            arr_19 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) arr_7 [5LL] [i_1]);
                            var_23 = ((/* implicit */short) max((max((4294967288U), (((/* implicit */unsigned int) arr_16 [(unsigned short)7] [i_1] [i_5] [i_6])))), (3335003479U)));
                            var_24 = (~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_8)))));
                            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((short) ((((/* implicit */int) (short)-15081)) | (((/* implicit */int) var_11)))))) + (2147483647))) << (((((/* implicit */int) var_2)) - (1)))));
                        }
                    } 
                } 
                arr_20 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [6LL] [i_0] [i_1] [i_0] [i_1] [i_1]))))))));
                arr_21 [i_1] = ((/* implicit */unsigned short) var_9);
            }
        } 
    } 
    var_26 ^= ((/* implicit */int) max((((var_9) - (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)54136))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) var_11)))))) : (max((3335003468U), (((/* implicit */unsigned int) (unsigned char)113)))))))));
}
