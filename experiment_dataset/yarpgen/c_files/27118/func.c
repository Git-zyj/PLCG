/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27118
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [4] [i_2])))))));
                            var_18 -= ((/* implicit */unsigned char) (unsigned short)2812);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 4; i_4 < 8; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) (+((((((-(((/* implicit */int) var_3)))) + (2147483647))) >> (((/* implicit */int) arr_12 [i_5 - 1] [i_4 - 3]))))));
                        arr_17 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */short) (signed char)-121);
                        var_20 = ((/* implicit */int) (((!(((/* implicit */_Bool) 1762115304U)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_4 + 2] [i_4 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_11 [i_0] [i_4 + 2] [i_4 - 2] [i_5] [i_4]))) : (((((/* implicit */_Bool) arr_5 [(unsigned short)9] [i_4 + 4] [i_4])) ? (arr_11 [i_0] [i_4 - 4] [i_4 + 2] [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                        arr_18 [i_4] [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_15)))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_5 - 1])))) : (((/* implicit */int) (signed char)95))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_15))));
                    }
                    arr_19 [i_1] [i_1] [(signed char)5] [i_4] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)95))))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (((((!(((/* implicit */_Bool) (unsigned short)62747)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 10771393158773689327ULL))))) : (((/* implicit */int) arr_14 [i_4] [i_1] [i_0])))) << (((((/* implicit */int) (unsigned short)24457)) - (24449))))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))))), (var_5)));
    var_24 &= ((/* implicit */_Bool) var_0);
}
