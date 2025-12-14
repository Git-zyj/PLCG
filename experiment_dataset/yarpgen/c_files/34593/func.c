/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34593
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_5))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) (short)19657);
        var_13 = ((/* implicit */signed char) (unsigned char)13);
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) /* same iter space */
        {
            var_14 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)19643))) - (562949953421311LL)));
            var_15 *= ((/* implicit */unsigned int) (short)19634);
            /* LoopSeq 2 */
            for (short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                arr_8 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) arr_7 [i_2] [i_2 - 1] [i_2 - 1] [i_1 - 2])) : (((/* implicit */int) (unsigned char)49))));
                arr_9 [i_0] [i_1] |= ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)44)) | (((/* implicit */int) (unsigned char)15))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (short)-7889))));
                arr_10 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (~(var_10)));
            }
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2701737214U)) ? (((/* implicit */int) arr_5 [i_1 + 1] [(unsigned char)18] [2LL] [i_3])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_3] [i_3] [i_3]))));
                arr_13 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)26359)))))));
                arr_14 [i_0] [i_0] [i_0] [(short)7] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)23285))));
            }
        }
        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) /* same iter space */
        {
            var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 786432)) ? (arr_16 [i_4 - 1] [i_4 - 1]) : (((/* implicit */int) arr_11 [i_4 - 2] [i_4 - 2]))));
            arr_17 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3184173198U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))));
            arr_18 [i_0] = ((/* implicit */unsigned short) (short)-10287);
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) -4587107119406351441LL);
        }
        for (unsigned short i_5 = 2; i_5 < 20; i_5 += 4) 
        {
            var_19 = ((/* implicit */short) (signed char)-8);
            arr_22 [i_0] [i_5] = (short)32757;
            arr_23 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 5922446901453467324ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)40))))) : (((/* implicit */int) (unsigned short)46631)));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_5 + 2] [(unsigned char)1] [i_5] [i_5 - 2])))))));
            arr_24 [i_5] [i_0] = ((((/* implicit */_Bool) var_0)) ? (arr_4 [i_5 - 2]) : (((/* implicit */long long int) var_3)));
        }
        for (signed char i_6 = 2; i_6 < 21; i_6 += 3) 
        {
            arr_28 [i_0] [i_0] = ((/* implicit */short) ((3488550830U) / (((/* implicit */unsigned int) ((/* implicit */int) ((3934329004U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))));
            arr_29 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) arr_7 [i_0] [i_6 + 1] [i_6 + 1] [i_0])) : (((/* implicit */int) arr_0 [i_6 + 1]))));
        }
        var_21 = ((((/* implicit */_Bool) (unsigned char)39)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))));
    }
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
    {
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49))) + ((~(16777215U)))));
        var_23 = ((((/* implicit */_Bool) (~((~(360638291U)))))) ? (((/* implicit */unsigned long long int) max((arr_3 [i_7] [i_7]), (3934329008U)))) : (((144115188059078656ULL) % (((/* implicit */unsigned long long int) var_1)))));
        arr_32 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned short) var_9)))))) * (((arr_31 [i_7] [i_7]) << (((arr_31 [i_7] [6]) - (920584197U)))))));
        var_24 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)127)))) ? (max((-1LL), (((/* implicit */long long int) (signed char)-111)))) : (((/* implicit */long long int) ((/* implicit */int) (short)15360))))))));
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) arr_15 [i_7]);
            arr_35 [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 769705057460678684LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7]))) : (1LL))) + (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned char)203)))))));
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((1308414552) != (((/* implicit */int) (unsigned char)45)))))));
            arr_36 [i_7] [4U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
            arr_37 [i_7] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (unsigned char)87)), (3261770223U)))))) ? (((((/* implicit */_Bool) -1LL)) ? (-7399563307477586798LL) : (((/* implicit */long long int) (~(3649581398U)))))) : (((/* implicit */long long int) max(((-(360638292U))), (max((((/* implicit */unsigned int) (short)-25593)), (645385897U))))))));
        }
        for (short i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((12468710647617754827ULL), (((/* implicit */unsigned long long int) 0U)))))));
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)47977)) ? ((~(3406022156U))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(var_1))) < (((/* implicit */long long int) ((((/* implicit */_Bool) 137438953471LL)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) arr_11 [(short)3] [(short)3])))))))))));
        }
        for (short i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) 645385897U)) + (1048575LL)))) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) var_0))));
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) 1807584546U))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (-(var_10))))));
                var_32 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_11] [i_10]))));
                var_33 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3649581383U)) || (((/* implicit */_Bool) 1537128068U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7] [i_7] [i_11] [i_7]))) : (((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-1048561LL)))));
                var_34 = ((/* implicit */unsigned short) ((arr_16 [i_7] [i_10]) >= (((/* implicit */int) (signed char)103))));
            }
            for (signed char i_12 = 1; i_12 < 21; i_12 += 2) 
            {
                var_35 *= ((/* implicit */long long int) max(((!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 2860079866295985073LL)))))), ((!(((/* implicit */_Bool) -5647260104015105478LL))))));
                /* LoopSeq 1 */
                for (short i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 2; i_14 < 19; i_14 += 4) 
                    {
                        var_36 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) arr_39 [(unsigned char)1])) == (((/* implicit */int) (unsigned short)510))))) : (((/* implicit */int) arr_0 [i_12 - 1])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)235)))))));
                        arr_51 [i_7] [i_7] [i_7] [i_12] [i_7] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)26343)) << (((((/* implicit */int) var_6)) - (183)))));
                        var_37 = ((/* implicit */unsigned long long int) (~(255U)));
                    }
                    arr_52 [i_7] [i_7] [i_10] [i_12] [i_13] [i_13] = var_3;
                    arr_53 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) 12582912LL);
                }
            }
            for (unsigned int i_15 = 0; i_15 < 22; i_15 += 1) 
            {
                var_38 = ((/* implicit */long long int) var_2);
                var_39 = ((/* implicit */signed char) var_1);
                arr_57 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 11U)) || (((/* implicit */_Bool) var_7)))) ? (3920573879U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)244)) || (((/* implicit */_Bool) 1048564LL))))))));
            }
        }
    }
}
