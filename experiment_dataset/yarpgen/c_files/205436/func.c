/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205436
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (((((/* implicit */_Bool) (+(var_3)))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_7)))))))));
                        arr_10 [i_2] [i_2] [i_1] [i_2] = var_5;
                        arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_4);
                        arr_12 [(unsigned char)11] [i_2] [i_2] [i_3] = (!(((/* implicit */_Bool) var_11)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_4 = 2; i_4 < 18; i_4 += 3) /* same iter space */
        {
            var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((((/* implicit */int) (signed char)63)) % (((/* implicit */int) (unsigned short)38025))))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40555))));
            arr_16 [i_0 + 4] [i_4] [i_0 + 4] = ((/* implicit */unsigned short) var_6);
            arr_17 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) var_5);
        }
        /* vectorizable */
        for (signed char i_5 = 2; i_5 < 18; i_5 += 3) /* same iter space */
        {
            arr_21 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)24965)) != (((/* implicit */int) ((_Bool) var_9)))));
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((long long int) (signed char)63)))));
        }
    }
    var_18 = ((/* implicit */long long int) var_13);
}
