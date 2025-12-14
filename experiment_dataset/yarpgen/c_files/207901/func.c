/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207901
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
    var_20 = ((/* implicit */unsigned int) (short)5839);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))), ((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_22 += ((/* implicit */unsigned short) ((var_10) ? (((((/* implicit */int) ((((/* implicit */_Bool) -1644576621)) || (((/* implicit */_Bool) (short)-5839))))) / (-1644576621))) : (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_0]))));
                            arr_13 [i_0] [(unsigned short)8] [i_2] [i_3] [i_2] [i_2] |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) & (arr_7 [i_3] [i_2] [(_Bool)1])))), (((long long int) (!(((/* implicit */_Bool) 1107016732)))))));
                            arr_14 [i_2] = 18446744073709551615ULL;
                        }
                    } 
                } 
            }
        } 
    } 
}
