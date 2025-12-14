/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205709
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) (~(var_14)));
                            var_16 = ((/* implicit */unsigned int) ((signed char) (unsigned short)15));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] = ((/* implicit */unsigned long long int) (-(min((((unsigned int) arr_1 [i_1])), (((/* implicit */unsigned int) (unsigned short)65521))))));
            var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (signed char)-1))))), (((arr_1 [i_0]) | (arr_1 [i_0])))));
            arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_5 [i_1]);
        }
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                {
                    arr_19 [i_0] [i_5] [i_6] = ((/* implicit */long long int) min(((unsigned short)11609), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_0] [(unsigned short)14] [i_0] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65521))) : (arr_16 [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) (unsigned short)15)))))));
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_6] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)9))))) ? (min((((/* implicit */unsigned int) arr_9 [i_6] [i_6] [i_5] [i_5] [i_0])), (3842718065U))) : (0U)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)65518))))) ? (((((/* implicit */_Bool) (unsigned short)4095)) ? (10363500286253384017ULL) : (6071496093290968525ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_5] [i_6])) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) var_4)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_7 = 2; i_7 < 14; i_7 += 2) /* same iter space */
        {
            arr_22 [i_7] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_7 + 1]));
            var_19 |= ((/* implicit */unsigned short) min((((unsigned long long int) min((arr_10 [i_7] [i_7 - 2] [i_0] [i_0] [(unsigned short)2]), (((/* implicit */unsigned long long int) (unsigned short)10))))), (((((/* implicit */_Bool) arr_18 [i_7] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) 12375247980418583090ULL)) ? (409774596351561630ULL) : (7ULL))) : (((/* implicit */unsigned long long int) ((4294967270U) - (3859110713U))))))));
            arr_23 [i_7] = ((/* implicit */unsigned short) (signed char)-61);
        }
        for (int i_8 = 2; i_8 < 14; i_8 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 17955376275300018136ULL)) ? (((/* implicit */int) (unsigned short)38949)) : (((/* implicit */int) (signed char)-90)))) % (((/* implicit */int) max((arr_26 [i_8 + 1]), ((unsigned short)1023))))));
                        /* LoopSeq 2 */
                        for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            arr_35 [i_0] [i_0] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -693520540556000053LL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (min((17592186044415ULL), (((/* implicit */unsigned long long int) arr_5 [(unsigned short)15])))) : (((/* implicit */unsigned long long int) ((unsigned int) 452249230U))))));
                            var_20 = ((/* implicit */signed char) max((max((((/* implicit */long long int) (unsigned short)10233)), (8589934591LL))), (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10803))) : (-7033667435127332324LL))) / (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))))));
                            arr_36 [i_0] [14ULL] [i_9] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_29 [i_8 + 2] [i_8 + 2] [i_8] [i_8 + 2] [i_8 - 2] [(signed char)1])))) ? (((((/* implicit */_Bool) ((signed char) 4174080309U))) ? (3241559210U) : (((((/* implicit */_Bool) var_12)) ? (2749601369U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2047)))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            arr_40 [i_0] [i_10] [i_0] [(unsigned short)8] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)64003));
                            var_21 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((unsigned short)31595), (((/* implicit */unsigned short) ((signed char) (unsigned short)0))))))));
                        }
                        var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((arr_11 [i_8] [i_8 - 2] [i_8 + 1] [i_8 - 2] [i_8 - 1] [i_8 + 2]), (((/* implicit */int) arr_7 [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8 - 2]))))), ((~(296772350U)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [14]);
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_8]))) : (((((/* implicit */_Bool) arr_32 [6] [i_8] [i_8 + 1] [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_8 - 1])) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)21369)) ? (((/* implicit */int) (unsigned short)65516)) : (((/* implicit */int) (signed char)107))))))))))));
                            arr_44 [i_0] |= ((/* implicit */unsigned int) var_11);
                        }
                    }
                } 
            } 
            arr_45 [i_0] [i_0] [i_8 - 2] = ((/* implicit */unsigned int) max((arr_16 [i_0] [1U] [i_8 - 2]), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)26618)))));
            arr_46 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8] [i_0]))) != ((~(15U)))));
        }
        var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [12] [i_0])) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        arr_47 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10227)) ? (((/* implicit */int) (unsigned short)10233)) : (((/* implicit */int) (unsigned short)0)))));
    }
    for (unsigned int i_14 = 1; i_14 < 23; i_14 += 2) 
    {
        arr_51 [i_14] [i_14] = ((((/* implicit */_Bool) min((-1LL), (4503599627370495LL)))) ? (((((/* implicit */_Bool) (unsigned short)28786)) ? (((/* implicit */int) (unsigned short)3382)) : (-1454134099))) : (((/* implicit */int) min(((unsigned short)59609), (arr_50 [i_14])))));
        var_26 -= ((/* implicit */unsigned short) ((unsigned int) arr_48 [i_14]));
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            for (signed char i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                {
                    arr_56 [i_14] [10U] [i_14] [i_14 - 1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) -2147483636)), ((~(var_11)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned short) 1982522584);
                        arr_59 [i_14] [i_17] [i_16] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (268139467U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                        var_28 = ((max((((/* implicit */unsigned long long int) ((unsigned short) arr_49 [i_17] [i_16]))), (((((/* implicit */_Bool) (unsigned short)31886)) ? (134217727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)62099))))), (((((/* implicit */_Bool) (unsigned short)10231)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)118))) : (0LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_15] [i_17])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_54 [(unsigned short)16] [(unsigned short)17] [i_16] [i_17])) <= (6355985508032006412ULL)))) : ((-(((/* implicit */int) (unsigned short)49209)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) (signed char)-57)));
                                var_31 = min(((-(((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10233))))))), (((/* implicit */unsigned int) max((arr_52 [i_14 + 1] [i_14 + 1]), (arr_49 [i_14] [i_14 - 1])))));
                                var_32 = ((unsigned short) arr_52 [i_14 + 1] [i_14 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) min((511U), (((/* implicit */unsigned int) (unsigned short)50406)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5)));
    var_34 += ((/* implicit */unsigned int) var_10);
}
