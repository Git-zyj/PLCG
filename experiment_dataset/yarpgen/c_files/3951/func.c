/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3951
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_1) + (9223372036854775807LL))) >> (((var_1) + (1159857353636722192LL)))))) ? (max((var_2), (((/* implicit */int) var_10)))) : (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_11))))));
                            arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_2 [i_3]);
                            var_16 = ((/* implicit */short) (unsigned char)32);
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_13);
                arr_12 [i_0] [i_1] = ((/* implicit */short) var_2);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [(signed char)5] [i_4] [i_4])), (arr_18 [i_5] [i_5]))))))) != (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_11)) > (((/* implicit */int) (short)-2072))))), (((unsigned short) (unsigned short)58506)))))));
                arr_19 [i_4] [i_5] = ((/* implicit */unsigned char) arr_16 [(signed char)14] [i_5] [i_5]);
                var_18 = ((/* implicit */unsigned int) ((((((arr_4 [i_5]) ? (arr_9 [i_4] [i_4] [5ULL] [i_4] [i_4] [20LL]) : (var_2))) > (((var_2) ^ (((/* implicit */int) arr_7 [i_4] [16ULL] [i_4] [i_4])))))) ? (((((/* implicit */_Bool) (+(-1126310795)))) ? ((+(arr_18 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) max((arr_2 [i_4]), (((/* implicit */long long int) var_11))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)12640))))) && (((/* implicit */_Bool) arr_0 [i_4]))))))));
            }
        } 
    } 
}
