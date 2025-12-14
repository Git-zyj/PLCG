/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205771
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
    var_12 &= ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_13 = ((/* implicit */long long int) var_7);
            var_14 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)135))))) / (arr_1 [i_1])));
            var_15 = ((/* implicit */long long int) max((var_15), (var_10)));
            var_16 = ((/* implicit */unsigned char) (((_Bool)1) ? (-2042048818) : (-2042048802)));
        }
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                arr_12 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 + 2] [i_2 - 1] [i_0])) > (((/* implicit */int) (_Bool)0))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_5 [i_3] [(unsigned short)4]))))))));
                var_18 = (~(((/* implicit */int) arr_5 [i_2] [i_2 - 1])));
            }
            for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                var_19 = ((/* implicit */unsigned char) (~((~(-839187680587901423LL)))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (unsigned char)3))));
            }
            for (unsigned char i_5 = 1; i_5 < 15; i_5 += 3) 
            {
                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)20)))))));
                arr_18 [i_5] [i_5] [i_2] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                arr_19 [0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 82723291)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_16 [i_2 + 2])));
                arr_20 [i_0] [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_5 [i_2] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_2]))));
            }
            var_22 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) (signed char)-2)))));
            var_23 ^= ((/* implicit */unsigned short) (-(((-1384911987) / (var_1)))));
        }
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        var_24 = ((/* implicit */_Bool) arr_9 [i_6] [i_6]);
        var_25 = ((/* implicit */long long int) arr_2 [i_6]);
        var_26 = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-11))))) * (((/* implicit */int) arr_9 [i_6] [i_6])));
        arr_23 [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [(unsigned char)15] [i_6] [i_6]))));
    }
    var_27 = ((/* implicit */unsigned short) (-(((2042048818) / (-2042048818)))));
}
