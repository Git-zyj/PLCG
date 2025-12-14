/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45442
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
    var_13 &= ((/* implicit */unsigned int) (short)(-32767 - 1));
    var_14 &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) ^ (((540552994) | (((/* implicit */int) var_12)))))) | (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 *= max((((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */unsigned long long int) arr_0 [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59462))) : (arr_2 [i_0] [i_3] [i_4])))) : (var_8)))) ? (((/* implicit */unsigned long long int) arr_0 [i_3])) : (arr_7 [i_2] [i_3 + 1] [i_4]))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) 72057594037927935ULL)) ? (((/* implicit */int) (unsigned short)28114)) : (((/* implicit */int) (unsigned short)16383))))) ? (684263843537329275ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))));
                                var_18 = ((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_2] [i_2]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                {
                    var_19 += ((/* implicit */unsigned short) ((arr_2 [i_5] [i_5] [i_5]) << (((((/* implicit */int) arr_18 [i_5] [i_7] [i_5] [i_5])) - (55625)))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 12; i_9 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */int) (unsigned char)2);
                                var_21 = ((/* implicit */unsigned int) ((var_7) <= (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (unsigned short)37422))))), (((unsigned int) (unsigned short)0))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 2; i_10 < 13; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 4) 
                        {
                            {
                                arr_30 [i_5] [i_6] [i_6] [i_5] [i_6] [i_11] = ((/* implicit */short) var_9);
                                var_22 = ((/* implicit */long long int) ((unsigned long long int) 385746682008694900ULL));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8656136143532176411ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) 6)))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) : (var_8)));
                }
            } 
        } 
    } 
}
