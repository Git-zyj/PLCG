/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215283
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
    var_13 = ((unsigned short) ((unsigned short) ((signed char) var_0)));
    var_14 = min((((/* implicit */unsigned short) (signed char)-2)), (var_6));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) var_4);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)37)) || (((/* implicit */_Bool) (signed char)-18)))))));
                                arr_15 [i_4] [i_2] [8ULL] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)4)))) > (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned short)6])) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19646))) : (16922480090546763502ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_4])) && (((/* implicit */_Bool) arr_6 [i_2] [i_0]))))))))));
                                arr_16 [i_0] [i_2] = ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        {
                            var_16 = ((signed char) arr_12 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 2] [i_6 + 2]);
                            var_17 = arr_23 [(signed char)6];
                        }
                    } 
                } 
            }
        } 
    } 
}
