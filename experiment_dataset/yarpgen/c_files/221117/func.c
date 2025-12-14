/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221117
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */short) var_1)), (((short) var_10))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [7] [i_1 - 1] [i_0]))))), (arr_3 [i_1 + 1] [i_1])))));
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)17189))) : (((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2])) * (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (2LL)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6)))) != ((+(-18LL)))))), ((signed char)30)));
    /* LoopSeq 2 */
    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        var_15 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_9 [(_Bool)1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [14LL])))))));
        var_16 = ((/* implicit */unsigned char) arr_8 [i_3]);
    }
    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        arr_12 [i_4] = ((/* implicit */long long int) arr_2 [i_4]);
        /* LoopNest 3 */
        for (short i_5 = 1; i_5 < 7; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (signed char i_7 = 1; i_7 < 9; i_7 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) ((-2LL) / (2159442573092581798LL)));
                            var_18 = ((/* implicit */int) (+(max((((/* implicit */long long int) arr_19 [i_4] [i_7 + 1] [i_6])), (arr_18 [i_4])))));
                            arr_24 [i_8 - 1] [i_8] [8LL] [i_6] [(_Bool)1] [(_Bool)1] [i_4] = (-(((/* implicit */int) (short)24606)));
                        }
                        for (long long int i_9 = 4; i_9 < 7; i_9 += 4) 
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(-24LL))))));
                            var_20 += ((/* implicit */short) (-(((((((/* implicit */_Bool) (short)18973)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-9223372036854775807LL))) * (((/* implicit */long long int) arr_19 [i_9 - 1] [i_5 - 1] [i_6]))))));
                            arr_29 [i_4] [i_5] [(_Bool)1] [i_7] [i_9] [i_9] = ((/* implicit */signed char) (short)26193);
                            var_21 = ((/* implicit */short) ((int) arr_26 [i_4] [i_4] [1LL] [i_6] [i_4] [i_9] [i_9]));
                            arr_30 [i_4] [i_4] [i_6] [i_9 - 3] [i_9 - 1] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_27 [i_4]))))));
                        }
                        arr_31 [i_4] [i_5] [i_6] [i_6] [9LL] [(_Bool)1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_25 [i_7] [i_5] [i_7]))));
                    }
                } 
            } 
        } 
    }
}
