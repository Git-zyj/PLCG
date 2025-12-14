/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212905
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((((long long int) max((-2927621384395120746LL), (((/* implicit */long long int) arr_1 [i_0]))))), (max((((((/* implicit */_Bool) (unsigned short)15410)) ? (7866696522393960335LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28161))))), (((/* implicit */long long int) (+(((/* implicit */int) (short)28152)))))))));
                            var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) max((var_0), ((short)-28161)))), (((unsigned short) arr_5 [i_0] [(unsigned short)2] [i_2]))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned int) max((max((min((1212923558), (((/* implicit */int) arr_2 [i_1])))), (((arr_1 [i_0]) ? (((/* implicit */int) (short)-28160)) : (((/* implicit */int) (short)28152)))))), (max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) 8169067165531340658ULL)) ? (var_11) : (((/* implicit */int) (unsigned short)15804))))))));
                var_17 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)141)) && (((/* implicit */_Bool) max((((/* implicit */short) var_9)), ((short)-28152))))))), (((((/* implicit */_Bool) max((-1884879075), (((/* implicit */int) arr_8 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 3] [i_0] [i_0 - 3] [i_1 + 1]))) : (max((-4205760220708130456LL), (((/* implicit */long long int) -1879661166)))))));
                arr_12 [i_0] [i_0 - 1] [i_1] = ((/* implicit */unsigned int) arr_4 [i_0] [(unsigned char)13]);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_11)), (8372249706378501347LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 1212923558)))))))) ? (max((var_6), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((int) ((unsigned short) var_13))))));
}
