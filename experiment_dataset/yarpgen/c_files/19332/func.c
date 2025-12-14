/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19332
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
    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)0)) : (((var_0) / (((/* implicit */int) var_8)))))) >= (((((/* implicit */_Bool) min((var_3), (var_10)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)219))))));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (~(((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_2)))) - (((/* implicit */int) min((var_5), (((/* implicit */short) var_6))))))))))));
    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (unsigned short)48207)) / (((/* implicit */int) (signed char)-20))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) var_3);
                                var_16 = (-(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_4 [i_0 - 1] [i_0] [i_3] [i_3]))));
                                var_17 &= ((/* implicit */short) max((max((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) / (arr_4 [i_4] [i_4] [i_4] [i_0]))), (((/* implicit */unsigned int) (signed char)100)))), (arr_5 [i_0] [(unsigned char)12] [i_4] [i_2])));
                                arr_11 [i_0] [i_0 + 1] [i_0] [i_0] [i_4] [i_0] [i_0] &= ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (((((/* implicit */_Bool) arr_2 [i_4] [i_1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4])))) ? (min((var_0), (((/* implicit */int) var_2)))) : (((/* implicit */int) (signed char)19)))))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_0 - 1] [i_0] [i_2] [i_3])))) / (((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0] [i_0] [i_2] [(short)13]) : (arr_4 [i_0 + 1] [i_0] [i_2] [i_4])))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */signed char) (unsigned short)65532);
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49248)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)93))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (arr_10 [i_2] [i_0 - 1] [i_0] [i_1] [i_2]))), ((~(((/* implicit */int) var_10))))))))))));
                    /* LoopSeq 2 */
                    for (short i_5 = 3; i_5 < 16; i_5 += 2) 
                    {
                        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1147774800U)) ? (1147774802U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32751)))))) : (((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1] [i_1] [i_2] [i_2] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_9 [i_0] [i_1] [i_2] [i_5 - 3] [i_1] [i_1])))));
                        var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) (~(arr_10 [i_2] [i_0 - 1] [(short)0] [i_0] [i_5 - 1])))) ? ((-(((/* implicit */int) min(((unsigned short)16310), ((unsigned short)53391)))))) : ((-(((((/* implicit */int) arr_1 [i_2])) & (((/* implicit */int) var_2))))))))));
                        var_22 -= ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) var_9)))));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~((~(((/* implicit */int) (unsigned char)149)))))))));
                    }
                    for (short i_6 = 4; i_6 < 16; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) var_8)) ? (min((max((((/* implicit */unsigned int) var_9)), (2638026181U))), (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_6] [i_6] [i_6] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)7)) % (((/* implicit */int) (short)-23925)))))))));
                        var_25 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((1147774791U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-38))))))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) + (1656941114U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) max((((/* implicit */short) arr_16 [(unsigned char)5] [i_2] [i_1] [i_0])), ((short)-10)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) var_8))))))) : ((~(var_4))))))));
                        var_27 = ((/* implicit */unsigned char) arr_18 [i_0]);
                        arr_20 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (short)0))));
                    }
                    var_28 = ((/* implicit */int) (~(min((((/* implicit */unsigned int) ((int) (-2147483647 - 1)))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (arr_5 [i_1] [i_1] [(signed char)9] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                }
            } 
        } 
    } 
    var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) (~(((((/* implicit */int) (short)7)) ^ (((/* implicit */int) (unsigned short)17053)))))))));
}
