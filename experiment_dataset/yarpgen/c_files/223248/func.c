/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223248
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
    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(3084520362043876877LL)))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) <= (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 3084520362043876863LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-3084520362043876893LL))))))));
    var_16 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) max(((unsigned short)7623), (((/* implicit */unsigned short) var_12))))) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)-60)))) : (((/* implicit */int) max(((signed char)-32), ((signed char)-118)))))) > ((-((+(((/* implicit */int) var_0))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) * (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) min((var_8), (var_6)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 ^= ((/* implicit */signed char) ((3084520362043876863LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9679)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2]), (arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2])))), (((((((/* implicit */int) (short)-14375)) + (2147483647))) << (((((var_11) + (1110374564970808560LL))) - (19LL)))))));
                            arr_9 [i_1] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)23)) ? (-3084520362043876890LL) : (((/* implicit */long long int) ((/* implicit */int) (short)29697)))))) ? (((/* implicit */int) ((arr_2 [i_0]) > (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3]))))) : (((((/* implicit */int) var_12)) * (((/* implicit */int) arr_1 [i_1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
