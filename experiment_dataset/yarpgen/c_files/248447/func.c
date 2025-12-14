/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248447
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (short)21301)), (min((((/* implicit */int) (unsigned short)16853)), (arr_5 [i_0] [i_1] [i_2] [i_0])))))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned char)221)) | (((/* implicit */int) var_12))))))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_18 = min((var_15), ((unsigned short)65535));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)21314), (((/* implicit */short) arr_1 [i_0]))))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) (unsigned short)65535))))) ? (839826158042142773LL) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)62986)) == (((/* implicit */int) arr_2 [i_0]))))) - (((/* implicit */int) var_12)))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((unsigned int) (unsigned short)65529);
                        arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)21301)) ? ((((~(0LL))) - (((/* implicit */long long int) arr_7 [i_0] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)90)) ^ (((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) var_1)) - (58928))))))))));
                        var_20 = ((/* implicit */int) arr_2 [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) var_15);
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_4]);
                    }
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned short)39191), (var_1)))) << (((arr_10 [i_0] [i_1] [i_2] [i_5]) - (17182925464589214055ULL)))));
                        var_23 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))) || (((/* implicit */_Bool) (unsigned char)80)))))));
                    }
                    for (short i_6 = 4; i_6 < 12; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_2]))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_1] [i_0])), (((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_2] [i_6])) ? (839826158042142773LL) : (((/* implicit */long long int) arr_5 [i_2] [i_2] [i_2] [i_2]))))))) ? (min((((((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_6])) << (0LL))), ((-(((/* implicit */int) (unsigned short)29)))))) : (((/* implicit */int) var_3))));
                        var_26 = ((/* implicit */unsigned char) arr_3 [i_2] [i_0]);
                    }
                    var_27 = ((/* implicit */unsigned long long int) ((unsigned char) var_2));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned short) var_6);
}
