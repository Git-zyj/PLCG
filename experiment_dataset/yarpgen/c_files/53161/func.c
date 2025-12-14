/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53161
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((+(arr_3 [i_0] [8LL]))) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))))));
            /* LoopSeq 1 */
            for (int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                var_20 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                var_21 = ((/* implicit */signed char) (((+(((/* implicit */int) var_3)))) | (arr_0 [i_2 - 1])));
                var_22 = ((/* implicit */unsigned short) arr_3 [i_1] [i_0]);
            }
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        }
        var_23 = ((/* implicit */int) ((var_4) < (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) -1150172712)))))));
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((var_8) > (((/* implicit */long long int) ((/* implicit */int) var_16)))))) + ((~(((/* implicit */int) min((var_2), (var_3))))))));
            arr_13 [i_4] [i_4] [(short)7] &= ((/* implicit */unsigned char) arr_10 [i_3]);
        }
        var_25 = min(((+(((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))), (((/* implicit */int) ((-1018886440) != (((/* implicit */int) (short)17572))))));
        var_26 |= ((/* implicit */int) arr_12 [i_3] [i_3]);
    }
    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_14 [i_5] [i_5]), (((/* implicit */unsigned char) var_0))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_5] [i_5]))))))))));
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */int) var_11)) % (min((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_2)))), (((((((/* implicit */int) arr_10 [i_5])) + (2147483647))) << (((((arr_0 [i_5]) + (1681668321))) - (13))))))))))));
    }
    var_29 -= ((/* implicit */short) ((((/* implicit */int) (short)-6437)) | (((/* implicit */int) (short)17548))));
    var_30 = ((/* implicit */long long int) var_4);
    var_31 += ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_13)) | (((/* implicit */int) var_3)))) ^ ((~(var_17))))) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))));
    var_32 -= ((/* implicit */short) var_8);
}
