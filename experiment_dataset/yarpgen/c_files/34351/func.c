/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34351
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
    var_11 ^= ((/* implicit */signed char) var_5);
    var_12 = ((/* implicit */short) ((unsigned long long int) ((unsigned char) (+(var_9)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) min((arr_6 [i_2] [i_1] [i_0 + 1]), (((/* implicit */unsigned short) arr_8 [i_0 + 1])))))) >> ((+(((/* implicit */int) (!(arr_10 [i_3] [i_0] [i_0] [(unsigned short)2]))))))));
                            arr_12 [i_0] [i_0] [i_2] [11LL] = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_1 - 1]))));
                            var_13 = ((/* implicit */long long int) min((arr_9 [i_0] [(unsigned char)1] [i_1] [i_0]), (((/* implicit */short) ((((/* implicit */int) arr_10 [i_1 - 1] [i_0] [i_0] [i_0 - 1])) > (((/* implicit */int) arr_10 [i_1 + 1] [i_0] [i_0] [i_0 - 1])))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) arr_8 [(unsigned char)8]);
            }
        } 
    } 
    var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 7149732185552325980LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)21035)))))));
}
