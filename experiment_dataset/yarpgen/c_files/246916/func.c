/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246916
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
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (signed char)33)), (2715473723991438194LL)));
    var_13 = ((/* implicit */long long int) var_8);
    var_14 = ((short) ((int) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned long long int) var_11)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(arr_2 [i_1 + 1]))), (arr_2 [i_1 + 1])))) ? ((+(((var_8) - (var_0))))) : ((~(((/* implicit */int) arr_3 [i_0]))))));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) max((arr_0 [i_1]), (arr_4 [i_1 + 1] [i_0 - 2]))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 |= ((/* implicit */unsigned long long int) ((arr_5 [i_2]) % (((/* implicit */unsigned int) arr_7 [i_2]))));
        var_18 = ((/* implicit */unsigned int) arr_6 [i_2] [i_2]);
        var_19 = ((/* implicit */unsigned char) ((((arr_7 [i_2]) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_2] [(signed char)17])) + (30)))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (int i_4 = 3; i_4 < 17; i_4 += 3) 
            {
                for (long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                {
                    {
                        arr_17 [(unsigned char)12] [6ULL] [(unsigned char)12] [i_3] [i_4 + 1] [i_5] = ((/* implicit */signed char) ((arr_11 [4LL] [i_4] [i_3] [i_2]) - (((/* implicit */unsigned long long int) arr_15 [i_4 - 2]))));
                        arr_18 [i_2] [(unsigned short)15] [(_Bool)1] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-15828))));
                        arr_19 [10] &= ((/* implicit */unsigned short) ((arr_15 [i_2]) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5 - 1] [i_4] [i_3] [i_2])) || (((/* implicit */_Bool) (unsigned char)110)))))));
                        var_20 = ((/* implicit */unsigned long long int) (~(arr_15 [i_5 - 1])));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) var_0);
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (signed char)6))));
                    var_23 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)145));
                    arr_25 [i_7] [i_7] [i_6] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)110))));
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                }
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_8] [i_8])) % (min((((/* implicit */int) (unsigned short)12288)), (711408381))))))));
        var_26 = ((/* implicit */unsigned char) arr_6 [3LL] [i_8]);
        var_27 ^= ((/* implicit */unsigned char) ((((_Bool) 1072966717U)) || (((/* implicit */_Bool) (unsigned char)104))));
    }
}
