/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238985
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
    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_12) % (var_11)))) ? (((var_8) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) >> (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) min((var_3), (((/* implicit */short) var_0))))))))));
    var_14 -= ((long long int) ((((var_7) << (((((/* implicit */int) (short)15583)) - (15564))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((16996110790545935683ULL) != (((/* implicit */unsigned long long int) 1854173904))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1 - 1] [i_1] = arr_4 [i_0];
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_2 [i_0] [i_2 - 3])) >= (((/* implicit */int) arr_6 [9U] [i_1] [i_2])))))))) != ((+(13242721064947215544ULL)))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (17962850114481510561ULL) : (((/* implicit */unsigned long long int) 7737246965516533066LL))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (1377454799925117914ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [12LL] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) var_10))))) ? (min((max((((/* implicit */unsigned int) (_Bool)1)), (var_12))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1212512725U))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1 + 1] [i_1] [i_3] = ((/* implicit */signed char) arr_4 [i_1 + 1]);
                        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [(_Bool)1] [i_2] [i_3]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1])))))) ? (max((((/* implicit */unsigned int) arr_4 [i_1])), (1647232000U))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_11 [i_1] [i_1])), (arr_1 [1U] [(_Bool)1])))))))));
                        var_17 -= ((/* implicit */signed char) ((unsigned char) -1854173905));
                    }
                    var_18 = ((/* implicit */_Bool) min((10270233170962703328ULL), (((/* implicit */unsigned long long int) 1854173904))));
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)));
}
