/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240880
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_1 + 1])) / (((/* implicit */int) arr_2 [i_0] [i_1 - 1]))))) : (((unsigned int) arr_1 [i_0]))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3 - 1] [i_3 - 2] [i_3] [i_3 - 1]);
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_0]) ^ (arr_5 [i_1] [i_0])))) ? (max((arr_5 [i_1] [i_0]), (arr_5 [i_1 + 2] [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (arr_5 [i_1] [i_0]) : (arr_5 [i_1] [i_0])))));
                                arr_15 [i_0] [i_1] [i_0] [i_3 - 2] [(unsigned short)2] = (!(((/* implicit */_Bool) max((arr_0 [i_0] [i_4]), (arr_0 [i_0] [i_1 + 3])))));
                                var_21 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_3 [i_1 + 2] [i_1 - 3] [i_1 - 1])))) * (((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) arr_2 [i_0] [i_1 + 2])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned short) ((_Bool) (unsigned char)137)))));
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
    {
        var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_5]) / (arr_7 [i_5])))) ? (max((arr_7 [i_5]), (arr_7 [i_5]))) : (((((/* implicit */_Bool) -4355269804549153743LL)) ? (arr_7 [i_5]) : (((/* implicit */unsigned int) -1850039215))))));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)361)) ? (((/* implicit */long long int) -1850039199)) : (-8LL)));
    }
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
    {
        arr_20 [i_6] = ((/* implicit */int) min(((short)-20588), (((/* implicit */short) (unsigned char)120))));
        arr_21 [i_6] [i_6] = ((/* implicit */long long int) arr_1 [i_6]);
    }
}
