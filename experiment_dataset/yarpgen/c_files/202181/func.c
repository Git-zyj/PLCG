/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202181
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_11)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (signed char)0))))))) : ((+(var_13)))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */int) var_6)), (var_1))) * (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_9)))))))) ? ((+(var_8))) : (((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)11700)))) & (var_11))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((signed char) ((unsigned int) arr_7 [i_2 + 1] [i_2 + 2] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] |= ((/* implicit */short) (unsigned char)106);
                                var_17 = ((/* implicit */unsigned char) min((var_17), (arr_7 [i_3] [(signed char)0] [(signed char)12])));
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1]))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_10 [i_2 + 1] [i_3 - 1]))))) ? (((/* implicit */int) ((arr_6 [i_2] [i_2] [i_2 - 3] [i_4 + 1]) > (arr_6 [i_0] [(_Bool)1] [i_2 + 2] [i_4 + 1])))) : (((/* implicit */int) (signed char)49)))))));
                                var_19 = ((/* implicit */unsigned short) arr_1 [i_1]);
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_6 [i_0] [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1]))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) arr_2 [i_2])), ((unsigned char)65))))))) ? (((/* implicit */int) arr_1 [i_0])) : ((((!(((/* implicit */_Bool) (unsigned char)191)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) (signed char)49))))));
                    var_21 = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_2 + 1] [9U] [9U] [i_2 - 2] [i_2 + 1] [i_2 - 2])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) (_Bool)1);
}
