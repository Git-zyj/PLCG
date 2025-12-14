/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201779
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((_Bool) var_8)))))) && (((/* implicit */_Bool) var_9))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(493855038U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)13)), ((unsigned short)58509))))) : (var_6)))) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) max(((unsigned short)26586), ((unsigned short)58509)))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((~((~(((/* implicit */int) (unsigned short)58487)))))) >> (((((/* implicit */int) max(((unsigned char)140), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)16370)) == (((/* implicit */int) (unsigned short)10868)))))))) - (128)))));
                    arr_9 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((var_13) & (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)4), (((/* implicit */unsigned char) (signed char)-90))))) << (((arr_6 [i_0] [i_0] [i_2] [i_0]) - (1897275609U))))))))) : (((/* implicit */long long int) ((var_13) & (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)4), (((/* implicit */unsigned char) (signed char)-90))))) << (((((arr_6 [i_0] [i_0] [i_2] [i_0]) - (1897275609U))) - (2516207681U)))))))));
                    var_17 = ((/* implicit */int) max((max((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(unsigned char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_6))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_0] [i_3] [i_4])))) % (max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_2] [i_3])))));
                                var_19 = ((/* implicit */unsigned int) (unsigned short)64268);
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_0]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_15 [i_4] [i_1] [i_2])), ((unsigned short)57979)))) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((_Bool) arr_10 [i_1])))));
                                arr_17 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (unsigned short)28766)) ? (4062208450240138666LL) : (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) ((arr_14 [i_0] [i_1] [i_2] [i_3] [(unsigned short)10] [i_1]) + (arr_1 [i_0] [i_2]))))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
