/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248005
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
    var_13 = (((((~(((/* implicit */int) var_7)))) | ((~(1874148132))))) ^ (((/* implicit */int) var_9)));
    var_14 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (var_2)))) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) ((-1874148133) | (((/* implicit */int) arr_1 [i_1 + 3] [6ULL]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)));
                arr_6 [i_0] [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) -394978189)), (0U)))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_8))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_14 [7] [i_2] [(signed char)9] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49273))) ^ (arr_0 [(short)19] [i_0])));
                            arr_15 [14] [(unsigned char)16] [i_0] [(signed char)18] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)30)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29))) & (15242554355275508447ULL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            {
                arr_21 [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) max((arr_19 [i_4] [i_4]), (((/* implicit */int) arr_17 [20LL]))))) + (((var_8) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [(_Bool)1] [i_4])))))))), (min((((/* implicit */long long int) min((-1874148133), (((/* implicit */int) arr_18 [i_4] [i_4] [13LL]))))), (max((18LL), (-499621382890895675LL)))))));
                arr_22 [i_4] [i_5] = (~(((unsigned long long int) var_11)));
                arr_23 [i_4] [i_4] [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_5]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (57600067U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_5)))));
            }
        } 
    } 
}
