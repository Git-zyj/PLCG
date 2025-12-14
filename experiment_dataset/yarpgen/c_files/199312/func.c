/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199312
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_13 [(short)10] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) var_5)))));
                                arr_14 [(unsigned char)17] [i_0] [4] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) ((short) 9223372036854775798LL));
                                var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((short) (+(arr_0 [i_3])))))));
                                var_11 = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */int) ((short) (unsigned char)62))) & (((/* implicit */int) ((short) (short)28126))));
}
