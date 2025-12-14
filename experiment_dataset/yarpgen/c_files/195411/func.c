/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195411
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 = arr_1 [i_0];
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) arr_0 [(unsigned short)1]);
                            arr_8 [3U] [(unsigned short)6] [(unsigned char)14] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)14] [(unsigned short)1] [i_3 + 1] [(unsigned char)8]))) & (var_8)))) & (14959928192575659285ULL)));
                            var_14 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) ^ (((1157392332) ^ (((/* implicit */int) (short)-32748)))))) ^ (((/* implicit */int) var_5))));
                        }
                    } 
                } 
                arr_9 [(short)10] = ((/* implicit */unsigned int) var_5);
                arr_10 [i_0] [(short)4] [(signed char)9] = ((/* implicit */short) 14959928192575659306ULL);
            }
        } 
    } 
    var_15 = (short)-13;
    var_16 = ((/* implicit */unsigned char) (short)21882);
}
