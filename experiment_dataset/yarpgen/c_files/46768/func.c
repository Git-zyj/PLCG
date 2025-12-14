/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46768
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
    var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) max((3821071852U), (((/* implicit */unsigned int) (unsigned short)28554)))))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) ^ (var_5)))) && (var_4)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */signed char) (+(min((((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0]))), ((~(((/* implicit */int) var_4))))))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [(unsigned char)12] = ((/* implicit */_Bool) 1005394295U);
            var_17 ^= ((/* implicit */unsigned long long int) 1531241388U);
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_0 [i_0 + 1]) % (arr_3 [i_1 - 2] [i_0] [8U])))))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                var_19 -= ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */unsigned int) ((473895443U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (arr_0 [i_2 - 1]))));
                arr_9 [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) var_12);
                /* LoopSeq 1 */
                for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    arr_13 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)86))))), ((~((+(-1LL)))))));
                    var_20 ^= ((/* implicit */unsigned char) ((unsigned int) (((_Bool)1) ? ((+(((/* implicit */int) (signed char)8)))) : (((/* implicit */int) (signed char)-115)))));
                    var_21 -= ((/* implicit */unsigned long long int) (((-(arr_4 [(unsigned char)4] [i_2 + 1]))) > ((~(((((/* implicit */_Bool) 473895473U)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) var_11))))))));
                }
            }
        }
    }
    var_22 ^= ((/* implicit */unsigned int) var_9);
}
