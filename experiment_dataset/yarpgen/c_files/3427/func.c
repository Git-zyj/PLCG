/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3427
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) (unsigned short)65522))))))) ? (((unsigned long long int) (+(((/* implicit */int) (unsigned char)38))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 *= ((/* implicit */int) (-(((max((((/* implicit */unsigned int) arr_3 [i_0] [(unsigned char)2])), (716299709U))) & (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)2)) % (((/* implicit */int) arr_3 [24U] [8])))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [i_0] [(short)19] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (var_10)));
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_1 [i_3 - 1])))) + (2147483647))) >> ((+(((/* implicit */int) var_3))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 2; i_4 < 17; i_4 += 3) 
    {
        arr_19 [i_4] = ((/* implicit */int) arr_18 [i_4]);
        arr_20 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_4] [i_4 - 2]))) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (_Bool)1)), (var_12))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_4] [i_4])) > (((/* implicit */int) arr_12 [i_4 - 1] [i_4 + 1]))))))))) : (12344096377465354420ULL)));
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 14; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                {
                    arr_29 [i_4] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned int) (signed char)2)), (4294967267U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-21)))))))));
                    arr_30 [i_4] = ((/* implicit */signed char) arr_28 [i_4] [i_5] [i_6] [i_4]);
                    arr_31 [i_4] [i_5] [i_6] = ((/* implicit */short) var_10);
                }
            } 
        } 
    }
}
