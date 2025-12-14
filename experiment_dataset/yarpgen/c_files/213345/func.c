/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213345
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(var_3))), (-7415858106805622121LL)))) ? (((/* implicit */int) ((unsigned char) ((((((/* implicit */int) (short)-31108)) + (2147483647))) >> (((((/* implicit */int) var_8)) - (24))))))) : (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (var_13))) ^ (max((-310270513), (((/* implicit */int) var_15)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) var_7);
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 4275641510986698067LL)) | (13235478241744271682ULL)));
                            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_3]))) ? ((-(arr_6 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned int) arr_7 [i_3]))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_0))) % (((/* implicit */int) (short)29313)))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) var_7)))))));
                            arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-20223))) <= (((((/* implicit */_Bool) (short)31107)) ? (4275641510986698067LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0])))))));
                        }
                        for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_5] [i_2] [i_2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12)))))));
                            arr_17 [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_3] [i_0] [i_3])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [i_3] [i_5])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [i_0] [i_0]))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)48387))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (2716761245U))) : (arr_12 [i_0] [i_1] [i_2] [(unsigned char)1] [i_5] [i_2])));
                        }
                        arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_1]);
                        arr_19 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_2])) <= (((/* implicit */int) arr_0 [i_0]))));
                        arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (_Bool)0));
                    }
                } 
            } 
        } 
    }
    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((0LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-17158))))));
        var_25 = ((/* implicit */long long int) max((var_25), (max((arr_22 [i_6]), (((/* implicit */long long int) (~((-(((/* implicit */int) (short)31107)))))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) max((arr_4 [i_7]), (((/* implicit */short) (unsigned char)242))))) + (((/* implicit */int) max((((/* implicit */unsigned short) arr_23 [i_7])), (var_10))))))) + (((((/* implicit */_Bool) 17023304419596735643ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7]))) : (var_3)))));
        var_27 *= ((/* implicit */signed char) (-(var_3)));
    }
}
