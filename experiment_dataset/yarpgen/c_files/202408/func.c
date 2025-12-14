/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202408
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */unsigned long long int) 0LL)) : (9223372036854251520ULL)))))))) + (max((((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)98))) : (var_8))), (((/* implicit */long long int) (short)-13921))))));
    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) max((var_14), (var_14))))))) ? (((((/* implicit */int) var_10)) - ((+(((/* implicit */int) (unsigned char)5)))))) : (((/* implicit */int) (unsigned char)255))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((short) var_15));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) arr_0 [i_0]);
            arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1])))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (signed char)87))));
        }
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (signed char)92))))) % (((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_5])) ? (var_3) : (1295833109212386214ULL))))) < (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_17 [7U] [7U] [i_3] [4U])) ? (arr_12 [i_2]) : (((/* implicit */unsigned int) arr_9 [i_4])))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))))))));
                        var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_19 [i_2] [i_3] [i_4] [i_5])) : (((/* implicit */int) (signed char)39)))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_4] [(signed char)1] [i_2] [i_2]))))) == (((/* implicit */int) (signed char)-71)))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) var_13);
        var_23 = ((/* implicit */signed char) (-(2840170721U)));
    }
    var_24 = ((((/* implicit */_Bool) (unsigned char)8)) || (((((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */short) var_7)))))) < ((~(var_8))))));
}
