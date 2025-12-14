/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20155
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
    var_11 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1])))) || (((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_12 = ((int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_4] [i_3]))) ? (((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_3]))) : ((-(arr_5 [i_4] [i_3] [i_0])))));
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_5 [i_3] [i_1] [i_0]) <= (((/* implicit */int) arr_2 [i_0])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))) ? ((~(arr_3 [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2])) ? (arr_8 [i_0] [i_1]) : (((/* implicit */int) arr_4 [i_2] [i_1])))))) : (((int) (-(arr_5 [i_3] [i_2] [i_1]))))));
                                arr_13 [i_0] [i_1] [i_2] [i_4] [i_1] = (i_1 % 2 == 0) ? ((((!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_4])) << (((((/* implicit */int) arr_11 [i_3] [i_1])) - (46)))))))) ? (arr_3 [i_3] [i_0]) : (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (unsigned short)22806)) : (((/* implicit */int) (unsigned char)37)))))) : ((((!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_4])) << (((((((/* implicit */int) arr_11 [i_3] [i_1])) - (46))) - (22)))))))) ? (arr_3 [i_3] [i_0]) : (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (unsigned short)22806)) : (((/* implicit */int) (unsigned char)37))))));
                                var_14 = ((/* implicit */unsigned char) ((((int) ((unsigned char) arr_7 [i_0] [i_1] [i_2]))) - (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_11 [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
