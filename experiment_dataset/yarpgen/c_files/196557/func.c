/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196557
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */long long int) -680778153);
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_21 ^= ((/* implicit */unsigned int) arr_5 [(unsigned short)12] [(unsigned short)12]);
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8475334067167266355LL)) ? (((/* implicit */int) (unsigned short)26555)) : (((/* implicit */int) (unsigned short)63413))))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_2)))))))))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0]) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)2123))))) : (((arr_2 [i_0] [16]) & (-3712147688301733308LL)))))), (((arr_3 [i_0]) % (arr_3 [i_0])))));
                        var_23 = ((/* implicit */unsigned int) (((!(var_12))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(short)11] [i_1])))))) : (((unsigned long long int) -3712147688301733308LL))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_24 = ((/* implicit */short) (~(((((/* implicit */int) ((((/* implicit */int) (unsigned short)26552)) == (((/* implicit */int) (unsigned short)63408))))) ^ (min((-1310609302), (-1057360261)))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 2; i_6 < 15; i_6 += 3) 
                    {
                        {
                            arr_18 [i_0] [i_1] [11] [i_5] [i_6 - 2] = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
                            var_25 = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */long long int) var_17)), (min((3712147688301733307LL), (((/* implicit */long long int) var_17)))))));
                        }
                    } 
                } 
                arr_19 [2] [i_4] [2] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 1310609302)) && (((/* implicit */_Bool) var_4)))), ((!(((((/* implicit */int) (unsigned short)40789)) == (((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                arr_20 [i_4] [i_4] [i_4] [i_0] &= ((/* implicit */unsigned int) (short)0);
                arr_21 [i_4] [i_4] |= ((/* implicit */unsigned short) (_Bool)1);
            }
        }
        arr_22 [i_0] = ((/* implicit */short) (~((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
        arr_23 [i_0] = ((/* implicit */short) 3712147688301733308LL);
        arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_2)))))) % (((/* implicit */int) (signed char)121))));
        var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-1))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) 3928822441942116589LL)) ^ (18446744073709551607ULL)))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_27 [(signed char)18] &= ((/* implicit */long long int) var_16);
        var_27 |= ((/* implicit */unsigned int) var_10);
        arr_28 [i_7] = ((/* implicit */unsigned short) min((min((arr_25 [i_7]), (arr_25 [i_7]))), (((/* implicit */unsigned int) ((signed char) (unsigned char)80)))));
    }
    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        var_28 = ((/* implicit */unsigned int) var_14);
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) ((unsigned short) min((var_2), (((/* implicit */signed char) (_Bool)0)))));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_32 [i_8] [i_9] [i_8]), (arr_32 [5ULL] [i_9] [i_8])))) || (((/* implicit */_Bool) arr_32 [i_8] [i_9] [i_8]))));
                }
            } 
        } 
    }
    for (int i_11 = 0; i_11 < 12; i_11 += 4) 
    {
        arr_38 [i_11] = ((/* implicit */int) min(((+(((unsigned int) var_11)))), ((((!(((/* implicit */_Bool) (unsigned short)2)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
        var_31 += ((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)77)));
        var_32 += ((/* implicit */signed char) (((_Bool)0) ? (3712147688301733300LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2)))));
    }
    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)11327)) ? (3712147688301733308LL) : (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) 26U))))) ? (-1310609312) : (((/* implicit */int) var_2))));
}
