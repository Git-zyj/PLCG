/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240971
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
    var_10 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((arr_3 [i_0]) && (((/* implicit */_Bool) var_9))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [(signed char)20] [(signed char)20] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_0]))));
                    arr_11 [(unsigned char)22] [i_1] [i_2] |= ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2])) % (((/* implicit */int) var_2))));
                }
            } 
        } 
    }
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) (signed char)78)) < (((/* implicit */int) (unsigned char)76))))) > ((-(((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : ((((!(((/* implicit */_Bool) var_3)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)16256))))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_8)) | (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_5)) : (var_1)))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
    {
        for (unsigned char i_4 = 1; i_4 < 24; i_4 += 1) 
        {
            {
                arr_18 [i_3] [21LL] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_12 [i_3 + 3])))) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_3 - 2])) - (20489)))));
                var_14 = min((((/* implicit */unsigned long long int) ((signed char) (unsigned char)255))), (var_6));
            }
        } 
    } 
}
