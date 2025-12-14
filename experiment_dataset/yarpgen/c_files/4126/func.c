/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4126
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
    var_12 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 6; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2])))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)-32767)) == (((/* implicit */int) min((((/* implicit */short) var_8)), (var_3))))))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2]))) + (arr_0 [5LL]))) + (3234332943160222593LL)))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 2) 
        {
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) max((((/* implicit */int) ((10LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) arr_7 [i_2])))))))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_2] [22] [i_4] = ((/* implicit */unsigned int) arr_12 [10U] [10U] [i_2 - 2] [i_2 - 2] [i_1]);
                        var_15 = ((/* implicit */unsigned char) min((var_15), (var_6)));
                    }
                } 
            } 
            var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (unsigned char)79))) << (((((/* implicit */int) (signed char)32)) - (9)))));
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) ((unsigned int) (unsigned char)15))), (arr_10 [i_2 - 4])))));
        }
        /* LoopNest 3 */
        for (long long int i_5 = 1; i_5 < 22; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                for (unsigned short i_7 = 3; i_7 < 22; i_7 += 2) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5 - 1])) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (6421294080608256836LL))) : (((/* implicit */long long int) (~(arr_11 [i_1 - 1] [i_1] [(_Bool)1]))))))) ? (min((((((/* implicit */_Bool) var_6)) ? (6510690789748455504ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1]))))))) : (((/* implicit */unsigned long long int) ((unsigned int) 4294967295U)))));
                        arr_24 [i_1] [i_7] [i_6] [i_5] [i_1] = ((/* implicit */unsigned short) 530256631);
                        arr_25 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)166))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_1]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) arr_12 [i_8] [i_8] [i_8] [i_8] [i_8]);
        var_20 = arr_4 [(short)15];
        var_21 = ((/* implicit */short) max((((18014398509481983LL) | (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_8]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1694204170)))))));
        var_22 = ((/* implicit */_Bool) min((((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_8])), ((~(((/* implicit */int) arr_23 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))));
    }
    var_23 = ((/* implicit */unsigned char) ((signed char) (unsigned char)175));
}
