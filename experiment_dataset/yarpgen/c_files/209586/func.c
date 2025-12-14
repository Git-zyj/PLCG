/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209586
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
    var_17 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) (~(min(((~(((/* implicit */int) (short)-22152)))), (((/* implicit */int) min(((short)22160), (((/* implicit */short) var_7)))))))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-90)) && (((/* implicit */_Bool) var_6)))) || (((((/* implicit */_Bool) (unsigned char)97)) || (((/* implicit */_Bool) var_12))))))) | (((/* implicit */int) (short)22151))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))));
            arr_7 [i_1] = ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_0))))) || (((/* implicit */_Bool) max((((((/* implicit */int) var_14)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-47))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) min(((_Bool)1), ((_Bool)0)))), (((((/* implicit */_Bool) (short)-27898)) ? (((/* implicit */int) (unsigned short)3072)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))) & (max((((/* implicit */unsigned long long int) arr_2 [i_2 - 2])), (var_11)))));
                        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)-27876)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (unsigned short)3075))))))) : (min((-7013193478729319224LL), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_0 [i_0])))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
            {
                {
                    arr_17 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])), ((short)-22172)))) & (((/* implicit */int) arr_0 [i_5]))));
                    arr_18 [i_0] [i_0] [i_4] = min((max((((/* implicit */unsigned long long int) var_0)), (arr_12 [i_5 + 1] [i_5 + 1] [i_5 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)95)) & (((/* implicit */int) (short)-3573))))));
                    var_22 = ((/* implicit */signed char) max((max((arr_12 [i_0] [i_4] [i_0]), (arr_12 [i_0] [i_4] [i_4]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-125)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 21; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) (unsigned char)7);
                    var_24 = ((/* implicit */unsigned long long int) (short)-27909);
                    arr_23 [i_6] = ((((/* implicit */unsigned int) min((-1460783465), (((/* implicit */int) arr_20 [i_6 - 1] [i_6 - 1] [i_6 + 1]))))) != (max((((/* implicit */unsigned int) var_8)), (var_16))));
                    arr_24 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) (short)-22163)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-104)))) : (((((/* implicit */_Bool) (short)27875)) ? (((/* implicit */int) (short)-27916)) : (((/* implicit */int) var_3))))))));
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-27848))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_9 = 3; i_9 < 22; i_9 += 3) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_9 - 1] [i_9 - 1] [i_9 - 2])) ? (((/* implicit */int) arr_5 [i_9 + 1] [i_9 + 1] [i_9 - 1])) : (((/* implicit */int) (short)5554))));
            /* LoopNest 2 */
            for (unsigned short i_10 = 2; i_10 < 22; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_36 [i_8] [i_8] [i_10] [i_10] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_8] [i_8] [i_8] [i_8])) - (((int) var_1))));
                        arr_37 [i_8] [i_8] [i_8] [i_10] = ((/* implicit */_Bool) ((unsigned int) arr_26 [i_10 - 1] [i_10 - 1]));
                        arr_38 [i_8] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */int) ((11483397042866784878ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159)))));
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) ((unsigned short) -3178487373455377834LL));
            arr_39 [i_8] [i_8] = ((/* implicit */signed char) var_9);
        }
        var_27 = var_11;
    }
}
