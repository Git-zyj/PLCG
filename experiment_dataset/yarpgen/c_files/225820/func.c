/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225820
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_1] [(_Bool)1] [(unsigned char)15]))));
                        var_12 = ((/* implicit */unsigned long long int) (unsigned char)51);
                    }
                } 
            } 
        } 
        var_13 ^= ((/* implicit */short) (+(-4931002718453003963LL)));
        arr_11 [i_0] [i_0] = ((/* implicit */short) ((arr_0 [i_0] [6ULL]) / (((/* implicit */int) var_1))));
        var_14 = ((/* implicit */signed char) (unsigned char)51);
        var_15 *= ((/* implicit */unsigned char) (((_Bool)0) ? (2722578005U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [20ULL])))));
    }
    /* LoopSeq 1 */
    for (short i_4 = 3; i_4 < 7; i_4 += 1) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(var_5)))) ? (arr_0 [i_4] [i_4 + 2]) : (((/* implicit */int) var_7))))));
        var_16 = ((/* implicit */signed char) arr_8 [i_4] [i_4] [i_4] [i_4] [(_Bool)1]);
        arr_15 [i_4] = ((/* implicit */unsigned long long int) (~((+(((((/* implicit */_Bool) var_2)) ? (var_5) : (var_6)))))));
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204))) & (arr_9 [i_4] [i_4] [i_4 - 3] [(_Bool)1] [i_4] [i_4])))) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)104))))));
    }
    var_18 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (signed char)55)), (var_0)))));
    var_19 += ((/* implicit */unsigned long long int) (-2147483647 - 1));
}
