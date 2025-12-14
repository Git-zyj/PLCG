/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195064
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
    var_16 += ((/* implicit */signed char) var_0);
    var_17 = ((/* implicit */unsigned char) 544932460832185757LL);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_12 [11] [i_1] [i_2 + 1] [i_0] = ((/* implicit */int) ((1245917272U) <= (3049050015U)));
                        var_18 = ((/* implicit */unsigned int) ((max((var_1), (((/* implicit */int) var_15)))) / (var_1)));
                    }
                } 
            } 
            var_19 = var_15;
            arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) max((max((arr_5 [i_0 + 2] [i_0]), (arr_5 [i_0 + 2] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0])))))));
        }
        arr_14 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)176))));
        arr_15 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((unsigned int) (signed char)72)), (((arr_3 [10ULL] [2U]) + (2797969227U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) (unsigned char)172))))))) : ((~(((4U) & (var_9)))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        arr_18 [8U] &= ((/* implicit */signed char) ((2285490913431308636LL) & (((/* implicit */long long int) -2107121279))));
        var_20 = ((/* implicit */unsigned char) ((var_4) % (((/* implicit */unsigned long long int) arr_16 [i_4 + 2]))));
        /* LoopSeq 3 */
        for (int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_21 = ((/* implicit */long long int) var_10);
            var_22 = ((/* implicit */short) arr_20 [i_4 - 1] [i_5] [i_4]);
            /* LoopSeq 1 */
            for (long long int i_6 = 3; i_6 < 14; i_6 += 4) 
            {
                arr_24 [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_21 [i_4] [i_4] [i_4] [i_4]))));
                var_23 = ((/* implicit */short) (+(var_1)));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    arr_28 [i_4] [i_5] [i_5] [i_4] [i_7] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((unsigned long long int) (signed char)-4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533)))));
                    var_24 = var_7;
                    arr_29 [i_4] [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((int) arr_26 [i_4] [i_5] [i_4]))) : (var_11)));
                }
            }
        }
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) min((var_25), ((unsigned short)37117)));
            var_26 = ((/* implicit */unsigned int) var_1);
            var_27 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) 3977465240U)) | (15546094894520935664ULL)))));
            arr_32 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_25 [i_4 + 1] [i_4] [i_4 + 2] [i_4])) : (((/* implicit */int) arr_19 [i_4]))));
        }
        for (int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            arr_36 [i_4] [i_9] [i_4] = (i_4 % 2 == zero) ? (((/* implicit */unsigned long long int) ((2464348232U) >> (((arr_33 [i_4 - 1] [i_4]) - (13088509349817275501ULL)))))) : (((/* implicit */unsigned long long int) ((2464348232U) >> (((((arr_33 [i_4 - 1] [i_4]) - (13088509349817275501ULL))) - (14729087535966596793ULL))))));
            arr_37 [i_4] = ((/* implicit */short) ((var_8) & (((/* implicit */int) ((var_8) == (((/* implicit */int) (unsigned char)56)))))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((arr_33 [i_4] [i_4]) ^ (((/* implicit */unsigned long long int) var_0)))))));
            arr_38 [i_4] [(unsigned short)0] [i_9] = ((/* implicit */unsigned int) arr_21 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 2]);
        }
    }
}
