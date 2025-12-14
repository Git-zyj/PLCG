/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236950
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((max((max((var_12), (var_12))), (var_12))), (((/* implicit */int) var_0)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)1299)) : (((/* implicit */int) (unsigned short)3968))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_8 [i_0] [4ULL] [i_2] [i_3 - 1]))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 17579175974633872531ULL))) % (arr_11 [i_0]))))));
        arr_12 [i_0] [(unsigned short)8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [10ULL] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (signed char)-91))));
        var_18 = ((/* implicit */short) ((unsigned short) (unsigned short)23115));
    }
    for (unsigned short i_4 = 3; i_4 < 8; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */_Bool) ((var_7) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)53316))))))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))) % ((~(arr_9 [i_4] [i_4] [i_4] [i_4] [i_4 + 1])))));
                    arr_23 [(_Bool)0] [i_5] &= ((/* implicit */_Bool) min(((~(5036820985370182378ULL))), (((/* implicit */unsigned long long int) ((arr_1 [i_4 - 1]) % (arr_1 [i_4 + 3]))))));
                    var_20 = max((((/* implicit */unsigned long long int) -783830958)), (max((arr_0 [(short)9]), (((/* implicit */unsigned long long int) 2147483647)))));
                }
            } 
        } 
        arr_24 [i_4] [i_4 + 2] = ((/* implicit */_Bool) (unsigned char)91);
    }
    var_21 &= var_13;
}
