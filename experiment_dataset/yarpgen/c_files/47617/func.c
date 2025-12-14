/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47617
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
    var_12 = ((/* implicit */unsigned char) min((var_7), (min((var_2), (((/* implicit */unsigned int) (short)0))))));
    var_13 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        arr_3 [(unsigned char)19] [(unsigned short)20] = ((/* implicit */_Bool) var_9);
        var_14 = ((/* implicit */short) min((((/* implicit */unsigned char) ((_Bool) var_8))), (((unsigned char) var_11))));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_8);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            {
                var_15 += ((/* implicit */signed char) min((((/* implicit */long long int) min((var_6), (var_6)))), (((long long int) (unsigned short)33062))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_16 &= ((/* implicit */unsigned long long int) 22);
                            var_17 = ((/* implicit */unsigned char) min((((_Bool) ((unsigned char) var_7))), (((_Bool) 1350198059))));
                            var_18 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_4)));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_4))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) (unsigned char)79);
            }
        } 
    } 
}
