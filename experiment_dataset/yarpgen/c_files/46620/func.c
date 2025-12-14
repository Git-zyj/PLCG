/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46620
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
    var_12 |= ((/* implicit */signed char) min((((/* implicit */unsigned short) var_8)), (((unsigned short) var_6))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] [9] = ((((/* implicit */_Bool) (short)32432)) || (((/* implicit */_Bool) arr_1 [i_0])));
        var_13 = ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) < (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (arr_1 [i_0])))))))));
        arr_3 [i_0] [(unsigned short)1] &= var_11;
    }
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 4; i_2 < 23; i_2 += 2) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((890351162377678992LL) ^ (-890351162377678980LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (arr_6 [i_1 + 2]) : (arr_6 [i_1 + 1]))))));
            var_15 = arr_4 [i_1] [i_1];
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (int i_4 = 2; i_4 < 24; i_4 += 2) 
                {
                    {
                        arr_16 [i_3] [i_3] [(signed char)20] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_8 [i_2] [i_2] [i_2 - 2])))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_2 - 1] [i_2 - 1] [i_4] [i_3])) && (((/* implicit */_Bool) var_4))))))));
                        var_16 = (+((~(((/* implicit */int) arr_11 [i_4] [(_Bool)1] [i_3] [i_4])))));
                        var_17 *= ((/* implicit */signed char) arr_15 [i_1] [i_2] [i_3] [i_2]);
                    }
                } 
            } 
        }
        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            var_18 = ((((/* implicit */_Bool) min((arr_6 [i_1 + 1]), (((/* implicit */int) max((arr_14 [i_5] [i_5] [i_5] [i_5] [i_1]), (((/* implicit */unsigned char) var_2)))))))) || (((/* implicit */_Bool) (~(arr_9 [21] [i_1 + 1] [i_1 + 4])))));
            var_19 = ((/* implicit */short) 890351162377679007LL);
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((13770284758254305410ULL) << (((((/* implicit */int) arr_5 [i_1] [i_5])) - (17938)))))) ? (min((1652820405U), (((/* implicit */unsigned int) var_6)))) : (((unsigned int) arr_18 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_9))) >= (((/* implicit */long long int) arr_6 [i_5])))))) : (min((((unsigned long long int) 2825340142U)), (((/* implicit */unsigned long long int) var_1)))))))));
            arr_20 [i_1] [i_1] [i_5] = ((/* implicit */signed char) ((int) ((((((/* implicit */_Bool) arr_7 [i_5] [i_1])) ? (-890351162377678966LL) : (((/* implicit */long long int) arr_19 [i_5] [i_1])))) + (((/* implicit */long long int) ((/* implicit */int) var_6))))));
        }
        arr_21 [i_1 + 3] = ((short) (_Bool)1);
        /* LoopSeq 1 */
        for (signed char i_6 = 1; i_6 < 21; i_6 += 4) 
        {
            var_21 = ((/* implicit */_Bool) ((signed char) ((arr_17 [i_1] [i_1] [i_1]) | (((/* implicit */long long int) var_1)))));
            arr_26 [i_1] [i_6] [i_1] = ((short) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_22 [i_1] [i_1] [22LL])) : (arr_18 [i_1])))));
        }
        /* LoopNest 2 */
        for (signed char i_7 = 1; i_7 < 23; i_7 += 2) 
        {
            for (signed char i_8 = 3; i_8 < 22; i_8 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_7 - 1] [(unsigned short)18] [i_7 - 1])) ? (((((/* implicit */_Bool) arr_10 [i_7 - 1] [20LL] [i_7 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6244))) : (arr_10 [i_7 - 1] [(short)24] [i_7]))) : (((/* implicit */unsigned long long int) -890351162377678974LL))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 24; i_9 += 2) 
                    {
                        for (signed char i_10 = 2; i_10 < 23; i_10 += 3) 
                        {
                            {
                                arr_37 [i_1] [i_1] [i_1] [i_9] [i_1] [i_9] [i_10 + 1] = ((/* implicit */int) (+(((((/* implicit */long long int) 1388234688)) ^ (max((890351162377678965LL), (((/* implicit */long long int) 1583952995))))))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((int) arr_4 [i_7 + 1] [i_8 - 3])))));
                                var_24 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (((_Bool)0) ? (arr_32 [7LL] [i_7] [i_8] [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (var_3));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
