/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38623
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */short) (~(min((((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */unsigned long long int) -789723740)) : (12450018647139330937ULL))), (((/* implicit */unsigned long long int) (~(var_14))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            arr_16 [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3797324117U)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (short)-21790))))) : (min((((/* implicit */unsigned int) (signed char)-51)), (var_4))))), (((/* implicit */unsigned int) var_15))));
                            var_16 = ((/* implicit */short) (+(arr_11 [i_0] [i_1 - 3] [9ULL] [(unsigned short)16])));
                        }
                        for (short i_5 = 2; i_5 < 18; i_5 += 1) 
                        {
                            var_17 = ((((/* implicit */_Bool) (+(415034989U)))) ? (max((arr_1 [i_0]), (((/* implicit */int) (short)-30382)))) : (((int) ((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)24))))));
                            var_18 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (+(var_8)))))) : (min((((((/* implicit */_Bool) arr_11 [i_2 - 1] [6U] [(short)18] [(short)18])) ? (((/* implicit */unsigned int) var_8)) : (arr_18 [i_0 + 3] [i_1 - 4] [i_0 - 2] [(short)15] [i_1 - 4]))), (min((arr_14 [i_5 - 2] [5] [i_0 + 3] [i_0 + 3] [i_0 + 3]), (((/* implicit */unsigned int) 750344125)))))));
                            var_19 = -1179817504;
                        }
                        arr_20 [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */int) arr_3 [i_0] [i_1 + 2]);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) arr_19 [i_0] [2ULL] [16] [i_0] [i_0 + 3]);
    }
    var_21 = var_9;
    var_22 = ((/* implicit */unsigned long long int) var_8);
}
