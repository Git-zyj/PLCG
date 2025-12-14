/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213828
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) 3060638505U)) : (max((var_1), (((/* implicit */long long int) var_2))))))));
                var_17 = min((max((1852106855U), (((/* implicit */unsigned int) (unsigned char)24)))), (62914560U));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((unsigned long long int) ((_Bool) 0LL))))));
                    var_19 = ((/* implicit */_Bool) max(((-(arr_2 [i_2]))), (((/* implicit */long long int) (~(max((arr_1 [i_0] [i_2 - 1]), (723140549U))))))));
                }
                for (long long int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) ((unsigned int) ((((arr_2 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))))) ? (max((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0])), (4026676569U))) : (min((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])), (arr_1 [i_0 - 1] [i_1]))))));
                    var_21 = ((/* implicit */unsigned int) arr_4 [i_3] [i_1] [i_0 + 3]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_0])) && (((/* implicit */_Bool) arr_11 [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_4 + 2])))));
                                var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 447986610592453232LL)), (18446744073709551598ULL)));
                            }
                        } 
                    } 
                }
                for (long long int i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 1000586360U)) ? (var_0) : (((/* implicit */int) var_8)))) : ((-(arr_6 [i_0] [i_0] [i_6]))))));
                    var_25 = ((/* implicit */unsigned long long int) ((unsigned int) ((int) min((var_3), ((unsigned char)121)))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_10))))) ? (var_7) : (((/* implicit */int) var_9)))));
}
