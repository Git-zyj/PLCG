/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232491
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_20 &= ((/* implicit */signed char) ((((long long int) var_14)) / (((/* implicit */long long int) ((/* implicit */int) var_15)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((signed char) (short)-9887))), (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0] [(short)1]) | (var_9)))))))))));
            arr_5 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_18))) == (((/* implicit */int) (short)6972))))) ^ (max((((/* implicit */int) ((arr_4 [i_0] [i_0] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-9901)))))), ((~(((/* implicit */int) (short)-9887))))))));
            var_22 = ((/* implicit */signed char) ((short) arr_2 [i_0] [i_1]));
            var_23 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_0 [i_0] [i_1]))))));
        }
        arr_6 [(short)12] = max((11929434797725298539ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])));
    }
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */int) arr_7 [i_2]);
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((((((((((/* implicit */int) arr_12 [i_2])) + (2147483647))) << (((11929434797725298539ULL) - (11929434797725298539ULL))))) & (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) (signed char)-1))))))), (((/* implicit */int) var_14)))))));
            var_25 = ((/* implicit */long long int) ((int) (short)-12814));
            arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) (_Bool)0);
            arr_15 [i_2] [i_3] [i_3] = ((/* implicit */long long int) arr_7 [i_2]);
            arr_16 [i_2] [i_3] [i_3] = ((/* implicit */long long int) max(((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))) <= (arr_8 [i_3])))))), (((/* implicit */int) ((((/* implicit */_Bool) (~(var_9)))) && (((/* implicit */_Bool) var_14)))))));
        }
        for (short i_4 = 3; i_4 < 19; i_4 += 4) 
        {
            var_26 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(13863835369284018757ULL)))) ? (((/* implicit */int) (short)-9871)) : ((-(((/* implicit */int) var_12)))))), (((/* implicit */int) var_1))));
            var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [16LL] [i_2] [i_2]))))) | (arr_18 [i_2] [i_4]))))));
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((unsigned char) 9002372022807905783LL)))));
        }
        for (signed char i_5 = 2; i_5 < 19; i_5 += 4) 
        {
            var_29 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_3))))));
            arr_21 [i_2] = ((/* implicit */unsigned short) ((_Bool) var_5));
        }
        var_30 ^= ((/* implicit */unsigned char) 9002372022807905763LL);
    }
}
