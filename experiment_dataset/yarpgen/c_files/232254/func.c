/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232254
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
    var_11 += ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) max((((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_2 - 1])), (max((arr_3 [i_0 + 2] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)-5025)) : (((/* implicit */int) (unsigned char)62))))))))))));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = 1279072959;
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        var_13 = arr_0 [i_0];
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) < (var_6)));
                            arr_15 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_1);
                            var_14 = ((/* implicit */unsigned long long int) (unsigned char)62);
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (short)0))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_3 - 1] [i_3] [i_4] [i_4])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) max(((short)7147), (((/* implicit */short) var_0)))))))) : ((~(var_9)))));
                        }
                        var_17 = ((/* implicit */long long int) (+((+(max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_1])))))));
                    }
                    var_18 &= ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1]))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))) : (var_10)));
}
