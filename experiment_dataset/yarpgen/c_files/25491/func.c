/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25491
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
    var_20 = ((/* implicit */long long int) var_6);
    var_21 = ((/* implicit */unsigned char) ((358411400) >> (((358411400) - (358411395)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((var_12) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_9)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_19))) ? (((/* implicit */int) var_1)) : (((var_5) | (((/* implicit */int) var_17)))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_1))));
            arr_6 [i_0] [(unsigned short)16] |= ((/* implicit */unsigned long long int) var_7);
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned char) ((((long long int) ((long long int) var_8))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)))))));
                            var_24 = ((((/* implicit */int) ((_Bool) var_16))) ^ (((((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) var_1)))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) var_1)))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                var_26 = ((/* implicit */unsigned int) ((signed char) -358411387));
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((int) ((short) ((_Bool) var_12)))))));
            }
            arr_16 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_19);
            var_28 = ((/* implicit */signed char) ((int) ((unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3))))));
        }
    }
    var_29 -= ((/* implicit */unsigned long long int) ((_Bool) -1678163798));
}
