/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227624
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0 + 1]))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) >= (((/* implicit */int) (short)8048))))) : (((/* implicit */int) var_6))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */int) ((short) var_11))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))))));
                    var_13 = ((/* implicit */unsigned int) var_10);
                    arr_10 [i_2] [i_1] [i_2] [i_2] = (short)-1571;
                }
            }
        } 
    } 
    var_14 = ((min((var_7), (((/* implicit */unsigned int) (unsigned char)8)))) & (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) (short)-25)))) | (((/* implicit */int) (unsigned char)55))))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        for (short i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_5 = 1; i_5 < 17; i_5 += 4) 
                {
                    for (short i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_23 [i_3] = ((/* implicit */unsigned int) (short)-14);
                                var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -3289706916251682384LL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (671334830U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)8048)))));
                                arr_24 [i_3 + 1] [i_4] [i_5 + 1] [14U] [i_7] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(((/* implicit */int) (short)-8056))))))) == ((((!(((/* implicit */_Bool) var_2)))) ? (arr_15 [i_4 - 2] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6 + 2] [(short)4])))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) arr_11 [i_3] [i_4]);
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        {
                            arr_29 [i_3] [i_8] [i_3] [i_8] [i_9] &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) var_6)) >= ((-(((/* implicit */int) var_8)))))));
                            arr_30 [i_3] [i_3] [i_8] [i_3] [i_8] = ((/* implicit */long long int) (short)12);
                            arr_31 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */int) (short)-8049)) <= (((/* implicit */int) var_0))));
                            var_17 = ((/* implicit */short) ((((/* implicit */int) ((short) (short)23817))) << ((((!(((/* implicit */_Bool) (short)-8038)))) ? (((((/* implicit */_Bool) 2109172076U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8529))) : (4520532236321236018LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-8558))))))))));
                            var_18 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_22 [i_3] [i_3])) << (((var_11) - (269128943782060649LL)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)3)) <= ((+(((((/* implicit */int) (short)32767)) + (((/* implicit */int) (short)2312))))))));
            }
        } 
    } 
}
