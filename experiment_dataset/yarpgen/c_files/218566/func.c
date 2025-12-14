/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218566
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [(short)9] [2LL] [i_0 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) max(((unsigned char)173), ((unsigned char)81))))));
                var_15 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) -1181185974)), (((long long int) 8U)))) == (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                arr_7 [i_1] = ((/* implicit */long long int) 1929208687);
                var_16 -= ((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10)) >> (((((/* implicit */int) (unsigned char)52)) - (33)))))), (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(_Bool)1] [i_1] [(_Bool)1]))) : (1615740857U))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max((var_1), (((((/* implicit */int) (unsigned short)24671)) * (((/* implicit */int) arr_15 [i_4] [(_Bool)1] [2U])))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_22 [i_2] [i_4] [6LL] [10] [i_6] = max((min((max((-33554432LL), (((/* implicit */long long int) (_Bool)1)))), (arr_19 [i_6] [i_6] [i_5] [i_4] [i_3] [i_2] [i_2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_4]))))));
                                arr_23 [i_2] [i_3] [14U] [(unsigned short)11] [i_4] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_14 [i_2] [i_4] [(signed char)4])))), (((/* implicit */int) arr_14 [i_2] [i_4] [i_6]))));
                                var_19 = ((/* implicit */unsigned char) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24672)))));
                                var_20 = ((/* implicit */unsigned char) 1181185991);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
