/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207706
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
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(_Bool)1]))))) ? (444431337533405793ULL) : (min((((/* implicit */unsigned long long int) (unsigned char)64)), (18002312736176145822ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((arr_0 [i_0 - 1]), (444431337533405793ULL)))))))))));
        arr_2 [(unsigned short)1] = 444431337533405793ULL;
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            {
                arr_10 [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_5 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(var_4)))))) : (min((((/* implicit */unsigned long long int) arr_7 [i_2] [i_2])), (arr_0 [3U])))));
                var_16 = ((/* implicit */unsigned char) (((~(arr_6 [i_1] [i_2]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((262143) >> (((((/* implicit */int) arr_1 [i_1])) - (86))))))))));
                /* LoopNest 3 */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */signed char) ((unsigned long long int) (unsigned short)19432));
                                arr_21 [i_1] [i_5] [i_5] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -2064026482)) - (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_13 [10ULL] [10ULL] [(unsigned short)10] [(unsigned short)6]), (arr_1 [i_5]))))) : (min((((/* implicit */unsigned int) var_0)), (arr_8 [i_2])))))) ? (min((((((/* implicit */unsigned int) 262146)) & (var_7))), (((/* implicit */unsigned int) min(((unsigned short)17984), (((/* implicit */unsigned short) (short)8191))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_4 + 1] [i_4 - 1] [i_4])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((1299054990) + (var_11)))))))));
}
