/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248369
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
    var_18 = ((/* implicit */long long int) (signed char)-8);
    var_19 = ((/* implicit */unsigned char) min((var_4), (((/* implicit */short) var_0))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_6))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) * (12472759280178525421ULL)));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)7)))), (((/* implicit */int) var_15))))), (arr_1 [i_0])));
        var_23 = ((/* implicit */long long int) ((min((arr_0 [i_0 - 1] [(_Bool)1]), (arr_0 [i_0 + 1] [i_0]))) ? (((/* implicit */int) max(((short)-32755), ((short)32755)))) : ((-(((/* implicit */int) arr_0 [16] [16]))))));
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5580917482671536465ULL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) (short)-32763)))));
        var_25 = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (max((((/* implicit */unsigned long long int) var_1)), (11408963975806749609ULL)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            arr_8 [i_1] = ((/* implicit */short) (+((((!(((/* implicit */_Bool) (signed char)124)))) ? (((/* implicit */int) (_Bool)1)) : ((~(arr_5 [i_1] [i_1])))))));
            var_26 = ((/* implicit */unsigned char) arr_3 [i_1]);
        }
        for (short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)7)) ? ((+(((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)32754)))))) : (((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)8), (((/* implicit */signed char) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_3 [i_3]))))))))));
            arr_11 [i_1] [i_3] [i_3] = ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)-14205)) / (((/* implicit */int) (short)32754))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_28 = ((/* implicit */short) (-(((/* implicit */int) min((arr_10 [i_4] [i_1]), (arr_10 [i_1] [i_4]))))));
            var_29 = ((/* implicit */signed char) (_Bool)0);
        }
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_30 = ((/* implicit */signed char) min((max((((/* implicit */long long int) (unsigned short)11808)), (((((/* implicit */long long int) 67108608)) ^ (-6341240320524188144LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_5 [i_5] [19U])))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-68)))) : ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_5 + 1] [i_5])) : (((/* implicit */int) (_Bool)1)))))))));
        var_31 = ((/* implicit */short) ((arr_7 [i_5]) ? (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_5 + 1])) * (((/* implicit */int) ((576460202547609600LL) == (((/* implicit */long long int) ((/* implicit */int) (short)-32749))))))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)106))) % ((~(var_13)))))));
        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_0 [i_5 + 1] [i_5 + 1])) - (((/* implicit */int) (unsigned short)53727))))))));
    }
}
