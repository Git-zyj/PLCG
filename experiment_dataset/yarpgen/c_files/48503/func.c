/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48503
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_10 += ((/* implicit */signed char) ((_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (12079326804101519348ULL))));
                                arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((var_0) <= (((/* implicit */unsigned long long int) -420815742))))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) / (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((short) (short)2250)))))));
                                var_11 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) 12079326804101519348ULL)));
                                arr_12 [i_0] [(_Bool)1] [i_3] [i_3] [i_4] [i_4] |= ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-11)) & (((/* implicit */int) (short)32049)))) / (((/* implicit */int) ((unsigned char) ((unsigned int) var_7))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_17 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)11817)) * (((/* implicit */int) arr_0 [i_1 - 1]))))) ? (((arr_0 [i_5]) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_0 [i_1 + 1])))) : ((-(((/* implicit */int) (signed char)-11))))));
                }
                arr_18 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) 12096734U);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) var_2);
                    var_14 = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
        var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18385322651365989526ULL)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) 1195606740)) ? (((/* implicit */int) (short)-251)) : (((/* implicit */int) (_Bool)0))))));
        arr_29 [i_9] = ((/* implicit */short) (~(-2144895032)));
    }
    for (unsigned int i_10 = 1; i_10 < 16; i_10 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) min((((/* implicit */long long int) max((((((/* implicit */_Bool) (short)-662)) ? (((/* implicit */int) (short)661)) : (((/* implicit */int) var_5)))), ((+(((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */long long int) arr_25 [i_10] [i_10] [i_10] [i_10 + 1])), ((~(arr_23 [i_10] [i_10])))))));
        var_18 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-11812)) && (((/* implicit */_Bool) var_9)))) ? ((-(((((/* implicit */int) (short)-27981)) * (((/* implicit */int) var_8)))))) : (((/* implicit */int) ((((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))))) && (var_7))))));
    }
    /* vectorizable */
    for (unsigned int i_11 = 1; i_11 < 16; i_11 += 4) /* same iter space */
    {
        arr_34 [0U] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)22063))));
        arr_35 [i_11] [5U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) 1178068640U))) ? ((~(((/* implicit */int) var_4)))) : ((-(((/* implicit */int) (_Bool)1))))));
        arr_36 [i_11] = (signed char)125;
    }
    for (unsigned int i_12 = 1; i_12 < 16; i_12 += 4) /* same iter space */
    {
        var_19 += ((18385322651365989526ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))));
        var_20 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 7182466826363811556ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_33 [i_12 + 2])))));
        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)117)) ? (-6144186396626119307LL) : (1279857379028861370LL)))) || (((/* implicit */_Bool) ((long long int) var_5))))))));
        var_22 = min((((/* implicit */unsigned long long int) var_6)), ((~(((((/* implicit */_Bool) var_3)) ? (12079326804101519348ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32762))))))));
    }
}
