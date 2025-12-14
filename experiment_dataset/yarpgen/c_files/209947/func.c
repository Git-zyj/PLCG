/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209947
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
    var_15 = ((/* implicit */short) min((((((11395970668855239877ULL) ^ (var_12))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_1])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)232))));
                    var_18 *= ((/* implicit */unsigned long long int) ((unsigned char) 1076664664));
                    var_19 = ((((/* implicit */int) var_6)) + (((/* implicit */int) var_6)));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */long long int) ((_Bool) ((var_9) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_0])) : (var_12))));
                    var_21 = -1130298202;
                    var_22 -= ((/* implicit */short) var_8);
                }
            }
        } 
    } 
}
