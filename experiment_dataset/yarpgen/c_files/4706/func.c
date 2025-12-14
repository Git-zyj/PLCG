/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4706
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_7)) << (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5))))) : (var_6)));
    var_20 = ((/* implicit */short) (((+(((/* implicit */int) ((unsigned char) (signed char)127))))) - (((/* implicit */int) var_12))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (max((var_11), (((/* implicit */long long int) max((((/* implicit */int) (short)19254)), (var_6)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))));
            var_23 = ((/* implicit */short) arr_4 [i_1]);
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) / (var_15)));
            var_24 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 2130706432U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)-19255)))) : (((((/* implicit */_Bool) var_7)) ? (arr_8 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117)))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 11; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        arr_17 [i_0] [i_0] [i_4] [i_0] = ((unsigned char) (_Bool)1);
                        var_25 = ((/* implicit */short) var_10);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_26 = ((unsigned char) (_Bool)1);
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) -1419501999)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (9605429952332313681ULL)));
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_0 [i_0])) : (2382941937424798743LL)))) ? (var_13) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        }
        arr_20 [i_0] &= ((/* implicit */_Bool) 511LL);
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (signed char)-124)))) != (((/* implicit */int) (_Bool)1))));
        var_29 = ((/* implicit */signed char) ((var_18) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_19 [i_6] [i_6] [i_6] [i_6] [i_6]))));
    }
}
