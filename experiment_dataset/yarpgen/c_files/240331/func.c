/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240331
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
    var_10 += ((/* implicit */_Bool) ((unsigned int) min((max((-6354355303585200182LL), (((/* implicit */long long int) (unsigned char)215)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)110))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) ((6354355303585200183LL) << (((6354355303585200201LL) - (6354355303585200201LL)))));
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            var_12 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -1464841424)) | (2095104U)));
            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (~(9223372036854775791LL))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_11 [i_2] [(unsigned short)15] = ((/* implicit */signed char) ((_Bool) (unsigned char)244));
                        arr_12 [i_0] [i_1] [i_2] [(short)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3872012111U)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned char)255))));
                        var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (_Bool)0))))) & (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((short) (+((+(12ULL))))));
        var_16 += ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)126)), ((short)12668)))) && (((/* implicit */_Bool) (unsigned char)213)))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(393865429U)))))))) + (((((/* implicit */_Bool) ((((/* implicit */int) (short)3684)) + ((-2147483647 - 1))))) ? (min((0U), (((/* implicit */unsigned int) (signed char)-35)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((2U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30758)))))))))));
    }
    for (short i_5 = 1; i_5 < 20; i_5 += 3) 
    {
        var_18 += ((/* implicit */_Bool) ((long long int) 219483574));
        var_19 = ((/* implicit */_Bool) (signed char)-20);
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) 2601694756637989718LL)), (18446744073709551603ULL))) * (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned long long int) 4294967291U)) : (18446744073709551599ULL))))))));
    }
    var_21 = var_6;
}
