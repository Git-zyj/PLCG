/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207944
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) 5637782758140139719LL)) ^ (688861251797021005ULL))) & (((((/* implicit */unsigned long long int) -6641672764038173401LL)) / (12998172655009900695ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || ((((_Bool)1) || (((/* implicit */_Bool) (short)-10309))))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 4; i_3 < 9; i_3 += 4) 
                    {
                        arr_13 [i_0] = ((/* implicit */unsigned char) ((int) 11566037573603232453ULL));
                        var_17 -= ((/* implicit */int) ((((((/* implicit */_Bool) (short)-32470)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) : (arr_1 [i_3 + 1]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_3 + 1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [0U] [i_0])))))));
                        var_18 = ((/* implicit */int) ((((arr_12 [i_3 + 1] [i_3 - 3]) & (4764601075476340745ULL))) << (((((/* implicit */_Bool) arr_6 [i_0] [i_3 - 2] [6ULL] [i_3 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) 1004860102U)) && (((/* implicit */_Bool) 3161918494U))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_6)))))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 4; i_4 < 9; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10296)) ? (((/* implicit */int) (short)-10301)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_15)) - (198)))))) : (((arr_12 [i_3 + 2] [i_3 - 2]) << (((var_12) - (3797041054U))))))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 12784148969019603539ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3691)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (short)6110)))))))) < (((/* implicit */int) (short)10299))));
                            arr_16 [i_0] [i_4] [(short)10] [i_3 - 2] [i_4] = ((/* implicit */unsigned int) ((unsigned char) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2]))))));
                        }
                    }
                    arr_17 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((arr_5 [i_0] [i_1] [i_2]) || (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned char)2] [i_1])) : (((((/* implicit */_Bool) (short)10296)) ? (((/* implicit */int) (short)20145)) : (((/* implicit */int) (unsigned char)239)))))) << (((((((/* implicit */_Bool) (short)-28074)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27756))) : (12784148969019603539ULL))) - (18446744073709523858ULL)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (signed char i_7 = 3; i_7 < 9; i_7 += 2) 
            {
                {
                    var_21 = (i_5 % 2 == 0) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)10)) || (((/* implicit */_Bool) -1866578042)))) ? (((((/* implicit */int) arr_3 [i_5])) >> (((arr_15 [i_5] [i_6] [i_5] [i_7 - 1] [i_5]) - (2732542055664223818ULL))))) : (((((/* implicit */int) (_Bool)1)) << (((-3549077384300525628LL) + (3549077384300525628LL)))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)10)) || (((/* implicit */_Bool) -1866578042)))) ? (((((/* implicit */int) arr_3 [i_5])) >> (((((arr_15 [i_5] [i_6] [i_5] [i_7 - 1] [i_5]) - (2732542055664223818ULL))) - (14344493949613271265ULL))))) : (((((/* implicit */int) (_Bool)1)) << (((-3549077384300525628LL) + (3549077384300525628LL))))))));
                    arr_26 [5LL] [i_5] [i_5] = ((/* implicit */int) ((4152701453U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)10296)))));
                    arr_27 [i_5] [3LL] [i_5] [i_5] = ((((unsigned long long int) var_2)) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_6])) / (((/* implicit */int) (short)-11245))))) * (((((/* implicit */unsigned int) arr_24 [7ULL])) / (var_10)))))));
                    arr_28 [i_5] [(unsigned char)3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)11682)) << (((((/* implicit */int) (short)10316)) - (10312)))))) ? (((((/* implicit */_Bool) ((long long int) 2964557054U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_7 + 1] [i_7 + 2]))) : ((((_Bool)0) ? (12784148969019603550ULL) : (((/* implicit */unsigned long long int) 645896596U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18491)) ? (arr_15 [i_5] [i_6] [i_7 - 1] [i_7] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_15)))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_13)) >> (((var_9) - (1260515330U))))) : (((/* implicit */int) var_1))));
}
