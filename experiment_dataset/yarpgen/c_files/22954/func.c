/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22954
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 - 1]))))) : (((unsigned long long int) var_10))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [(unsigned char)22] [20ULL] [(unsigned char)22])) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_2 [i_0 - 1]) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    var_13 = var_1;
                    var_14 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) min((arr_2 [2ULL]), (16942016180120883537ULL)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                }
                var_15 = ((((/* implicit */_Bool) min((arr_7 [i_0] [(unsigned char)19] [i_0 + 1]), (arr_7 [i_0] [(unsigned char)18] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_0] [i_0 + 1] [i_0 + 1]), (arr_7 [i_0] [(unsigned char)6] [i_0 - 1]))))) : (((unsigned long long int) arr_7 [i_0] [(unsigned short)1] [i_0 + 1])));
                arr_10 [i_0] [2ULL] [i_0] = var_4;
                var_16 ^= ((/* implicit */unsigned short) (unsigned char)105);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned short) ((unsigned char) 11021714278644614267ULL));
        var_17 = ((/* implicit */unsigned short) (unsigned char)12);
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)25089)) >> (((((/* implicit */int) ((unsigned short) var_9))) - (3024)))));
                var_19 = ((/* implicit */unsigned short) arr_4 [10ULL] [(unsigned short)3] [i_5]);
            }
        } 
    } 
}
