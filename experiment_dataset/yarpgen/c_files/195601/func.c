/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195601
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (-(((arr_3 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)13518), (var_6)))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)-74);
                }
                for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) /* same iter space */
                {
                    arr_14 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_3 + 2])) ? (((((/* implicit */_Bool) var_1)) ? (720027817U) : (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)4998))))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_0]))))));
                    arr_15 [i_0] [i_3] = ((/* implicit */int) (~(((2893688510U) >> (((-1776063575) + (1776063592)))))));
                    arr_16 [(unsigned char)16] [i_1] [(_Bool)0] = var_0;
                }
                for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) /* same iter space */
                {
                    arr_21 [i_0] [i_0] = 720027806U;
                    arr_22 [i_0] [i_0] [i_1 + 2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-86)))))));
                }
                arr_23 [(short)13] [i_1] [i_0] = ((/* implicit */long long int) (+(var_4)));
                /* LoopNest 3 */
                for (short i_5 = 3; i_5 < 14; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_30 [i_0] [i_6] [i_0] [i_5] [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) (short)-12688);
                                arr_31 [i_7] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
                                arr_32 [11ULL] [i_1] [i_0] = ((/* implicit */unsigned char) arr_12 [14LL] [i_0]);
                                arr_33 [i_0] [(unsigned short)7] [i_5 + 3] [i_0] [i_0] = ((/* implicit */short) var_0);
                            }
                        } 
                    } 
                } 
                arr_34 [i_0] [i_1] [i_1] = ((/* implicit */int) ((max((668517805U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) (_Bool)1))))))) & (arr_17 [i_0] [i_0])));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((1375620977U), (((/* implicit */unsigned int) (short)2609))));
}
