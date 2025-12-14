/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192705
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) (!((_Bool)1)));
        var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 12ULL)) && (((/* implicit */_Bool) (short)-21041)))) ? (2000828940) : (((/* implicit */int) (short)-21041))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) (short)-21041)) % (((-959657314) | (((/* implicit */int) (short)21041)))))))));
        arr_2 [i_0] = ((/* implicit */short) (!(((((/* implicit */_Bool) (unsigned char)51)) || (((/* implicit */_Bool) (unsigned char)31))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4227609541U)) ? (((/* implicit */int) (short)-21042)) : (((/* implicit */int) (signed char)8))));
        var_14 = ((/* implicit */int) max((((/* implicit */long long int) max((min((((/* implicit */unsigned int) (unsigned short)8191)), (708739855U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3671413307232047734ULL)) ? (((/* implicit */int) (unsigned short)8963)) : (((/* implicit */int) (unsigned char)244)))))))), (max((((144115188075855744LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)8191)))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (_Bool)1))));
            arr_12 [i_2] [i_2] = ((/* implicit */short) (-((-(((/* implicit */int) (_Bool)1))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (short i_5 = 1; i_5 < 19; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            arr_24 [i_5] [i_2] [(short)17] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
                            arr_25 [i_2] [i_2] [i_5 + 3] [i_2] [i_2] [i_2] [5LL] = ((/* implicit */unsigned char) (!((_Bool)1)));
                        }
                        for (unsigned char i_8 = 1; i_8 < 20; i_8 += 1) 
                        {
                            var_16 = ((/* implicit */short) (-((+(((/* implicit */int) (short)-30433))))));
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-7598))));
                            arr_29 [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 32640U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (32640U)))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7253239520275471431LL)) ? (((/* implicit */int) (unsigned short)4096)) : (((/* implicit */int) (unsigned char)163))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8191))))) : (((/* implicit */int) (!((_Bool)1))))));
                        }
                        var_19 = ((/* implicit */short) (!((_Bool)1)));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */int) 8150812345687421396LL);
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (unsigned char)19))));
    var_22 = ((/* implicit */signed char) (-((+(min((((/* implicit */int) (_Bool)1)), (1629283663)))))));
}
