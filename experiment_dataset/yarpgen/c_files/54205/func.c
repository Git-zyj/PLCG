/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54205
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)31)), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) (unsigned char)225)))))) : (((((/* implicit */_Bool) 1073741823U)) ? (8323616504352491474LL) : (-8323616504352491475LL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0 - 1] [i_0] [(unsigned char)15] [17] [14] [i_3 - 1] [(unsigned char)15] = ((/* implicit */unsigned char) var_14);
                                var_19 -= arr_0 [i_4];
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((((var_10) << (((/* implicit */int) var_11)))) & (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-23691)) ? (((/* implicit */int) (short)23690)) : (((/* implicit */int) (short)-23691))))), (4097282409U)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [3ULL] [i_2] [i_0] [16LL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-18382)) ? (4097282413U) : (min((((arr_20 [i_6]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)25723))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-23691)) && ((_Bool)1))))))));
                                var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (8323616504352491474LL) : (((/* implicit */long long int) ((/* implicit */int) (short)29238)))))) ? (((/* implicit */long long int) ((arr_5 [(short)4] [(short)4] [8U]) & (arr_2 [i_0] [i_0])))) : (min((4575657221408423936LL), (((/* implicit */long long int) (short)8191))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) -462250869))))) % (((/* implicit */int) (signed char)65)))) : (((/* implicit */int) (((~(var_5))) < (((/* implicit */unsigned long long int) ((arr_2 [i_1] [5ULL]) * (arr_19 [(signed char)8])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
}
