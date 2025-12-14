/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43432
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) (~((+(((/* implicit */int) (short)-23120))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [4U] [i_0] [i_1] = ((/* implicit */unsigned short) -3086518189268645066LL);
                            var_17 = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)19771)) >> ((((~(-3631405795748984868LL))) - (3631405795748984861LL)))))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */long long int) (+(arr_9 [i_0 + 1] [i_1])))) - (max((min((-6112131102736208102LL), (((/* implicit */long long int) arr_9 [i_0] [i_1])))), (((/* implicit */long long int) arr_0 [i_0 + 1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */short) max((((0U) - (((/* implicit */unsigned int) 2147483647)))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)-109)))))))));
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_13 [i_4]), (arr_13 [i_4]))))));
        arr_15 [2] [i_4] = ((/* implicit */_Bool) (unsigned char)246);
    }
    var_20 = ((/* implicit */long long int) max((((/* implicit */int) var_7)), (var_11)));
}
