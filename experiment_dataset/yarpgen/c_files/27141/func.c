/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27141
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
    var_10 |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-56)) ^ (((/* implicit */int) (short)0))))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)55)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */signed char) ((unsigned short) 581838793U));
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((3713128503U) != (((/* implicit */unsigned int) arr_1 [6ULL])))) ? (((/* implicit */int) (unsigned short)28672)) : (((((/* implicit */_Bool) (unsigned char)39)) ? (arr_1 [4LL]) : (((/* implicit */int) (signed char)-56)))))))));
        var_13 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_14 += ((/* implicit */short) ((unsigned char) arr_3 [i_1] [9LL]));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) arr_10 [i_4] [i_1] [i_2] [i_3 + 1])) : (arr_1 [i_4])))) ? (((/* implicit */int) arr_2 [4] [i_1] [i_2])) : (((/* implicit */int) (signed char)64)))))))));
                            var_16 -= ((/* implicit */short) var_9);
                            var_17 |= ((/* implicit */signed char) min(((short)0), (((/* implicit */short) (signed char)125))));
                        }
                        var_18 = ((/* implicit */unsigned short) (-(2147467264)));
                        arr_14 [i_0] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)220))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((int) min((var_8), (((/* implicit */unsigned int) (signed char)43)))))), (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)129)) % (var_6)))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_1] [i_0 + 1])) ? (arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))))));
            arr_15 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_4 [(short)11] [(unsigned char)17] [i_1] [(short)11]))));
        }
    }
}
