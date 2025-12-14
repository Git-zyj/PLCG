/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211275
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
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_17))));
    var_21 = ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_22 = ((short) ((_Bool) -1));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((-11) + (2147483647))) << (((arr_2 [i_1]) - (6308402985281029209ULL)))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8986676181854485265LL))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_7))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                {
                    arr_15 [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((unsigned int) arr_13 [i_3] [13LL] [i_5] [i_5]));
                    arr_16 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) var_1);
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        arr_19 [i_3] = ((/* implicit */unsigned int) (~(-1LL)));
                        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) var_15)))) || (((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_4))))))));
                        var_25 = ((/* implicit */int) ((long long int) 0ULL));
                        var_26 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3] [i_4] [i_5] [i_6]))) != (arr_9 [i_6]))));
                    }
                }
            } 
        } 
    } 
}
