/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3053
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
    var_10 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) 8511063270605124551LL)) ? (var_9) : (((/* implicit */unsigned int) 32767)))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)5323), (var_0))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) 16777216U))));
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_3] [i_2] [i_1 + 1] &= ((/* implicit */unsigned short) (((~(2327255373U))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0 + 1] [10] |= ((/* implicit */short) var_3);
    }
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-5324))))), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)14811), (((/* implicit */short) (signed char)-127)))))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned char)100))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5327))))))))));
        var_13 |= ((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)-14811), (((/* implicit */short) (_Bool)1)))))))), ((+(4278190058U)))));
        arr_16 [i_4] = ((/* implicit */short) (-(((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (short)-18229))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -32768)))) : (((((/* implicit */_Bool) (signed char)-111)) ? (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18204)))))))));
    }
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_6 = 1; i_6 < 14; i_6 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 977069934)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_6))))) ? (max((17758598970350934140ULL), (((/* implicit */unsigned long long int) 3194726397U)))) : (((/* implicit */unsigned long long int) (-(2327255373U)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((var_0), (((/* implicit */short) (_Bool)0)))), ((short)-29480)))))));
            var_15 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2327255373U)) ? (((/* implicit */int) (short)14811)) : (((/* implicit */int) (unsigned char)77))))) ? (max((((/* implicit */int) (short)-18887)), (4194302))) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_2))));
        }
        for (short i_7 = 1; i_7 < 14; i_7 += 1) /* same iter space */
        {
            arr_27 [i_5] = ((/* implicit */unsigned int) ((short) 1026597792));
            arr_28 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-1499120205), (((((/* implicit */_Bool) arr_14 [i_5])) ? (-1026597796) : (((/* implicit */int) (unsigned char)174))))))) ? (((/* implicit */int) max((var_0), (var_0)))) : (min((var_3), (((/* implicit */int) max((((/* implicit */short) (unsigned char)179)), (arr_24 [i_5] [i_5] [i_7]))))))));
            arr_29 [i_7 - 1] [i_5] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) min((16777217U), (16777209U)))), (((((/* implicit */_Bool) -1019832457)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)7804))))))), (((/* implicit */long long int) (~(((((((/* implicit */int) (short)-5327)) + (2147483647))) << (((var_1) - (8586928377355332397ULL))))))))));
        }
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            var_16 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16612)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (-1026597792)))) : ((+(var_8))))))));
            /* LoopNest 3 */
            for (unsigned int i_9 = 3; i_9 < 12; i_9 += 3) 
            {
                for (unsigned int i_10 = 1; i_10 < 14; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        {
                            arr_39 [i_8] [i_5] [i_10] [i_10] [i_9] [i_9] = ((/* implicit */short) ((((min((1855591054536433052ULL), (((/* implicit */unsigned long long int) 4278190058U)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_21 [i_9] [i_11]))))))) - (((/* implicit */unsigned long long int) -1556433641))));
                            arr_40 [i_5] [i_5] [i_5] [i_10] [i_5] [5U] = ((/* implicit */unsigned long long int) ((((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (signed char)-125))))) - (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((((/* implicit */_Bool) 2199023255551ULL)) ? (((/* implicit */int) (short)4437)) : (((/* implicit */int) (unsigned char)177)))))))));
                            arr_41 [8ULL] [8ULL] [8ULL] [i_10] [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) 1100708357U))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)50542))))) ? (((/* implicit */int) (short)15461)) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */short) (unsigned short)15000);
            var_18 ^= ((/* implicit */unsigned char) 5239331892138421070ULL);
        }
        for (int i_12 = 1; i_12 < 14; i_12 += 3) 
        {
            var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_0))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned char)77))));
            /* LoopNest 3 */
            for (short i_13 = 1; i_13 < 13; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 2) 
                {
                    for (unsigned short i_15 = 1; i_15 < 14; i_15 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30516))) + (((var_4) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176)))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((var_9), (((/* implicit */unsigned int) (unsigned char)138))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)1)))))) : ((-(((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) (short)13978)) : (((/* implicit */int) (unsigned char)78)))))))))));
                        }
                    } 
                } 
            } 
            arr_52 [i_5] = ((/* implicit */unsigned short) -513243020);
            var_22 ^= ((/* implicit */int) var_7);
            arr_53 [i_12] [i_12] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)14797))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_16 = 4; i_16 < 14; i_16 += 4) /* same iter space */
        {
            var_23 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 1171345145)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) max((((/* implicit */int) arr_10 [i_5] [i_16] [i_16])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)26592)) : (((/* implicit */int) var_2)))))))));
            var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) 2147483646)), (1967711950U)))))))));
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (unsigned char)251))));
        }
        for (unsigned int i_17 = 4; i_17 < 14; i_17 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))) : (1500632763U)))));
            arr_60 [i_5] [i_17] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2489557622788425350LL)) ? (((/* implicit */long long int) 1125612573)) : (var_4)))) ? (max((arr_36 [i_17] [i_17] [i_17] [i_17 - 2] [i_17 - 1] [i_17] [i_17]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_17 - 1] [i_17 - 1] [i_17] [i_17 - 2] [i_17 - 3] [i_17] [i_17])) ? (((/* implicit */long long int) var_9)) : (2489557622788425350LL))))));
            arr_61 [i_5] [i_5] [i_5] = var_9;
            var_27 = (unsigned short)25207;
        }
        for (unsigned int i_18 = 4; i_18 < 14; i_18 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), (var_6))))) * (min((0LL), (0LL)))))) ? ((-(((((/* implicit */_Bool) arr_44 [i_5] [i_5])) ? (977069918) : (((/* implicit */int) (signed char)60)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max(((unsigned char)179), (((/* implicit */unsigned char) (signed char)34))))) : (arr_33 [i_5] [i_5] [9U] [14U])))))));
            /* LoopNest 3 */
            for (short i_19 = 0; i_19 < 15; i_19 += 2) 
            {
                for (short i_20 = 0; i_20 < 15; i_20 += 4) 
                {
                    for (int i_21 = 1; i_21 < 12; i_21 += 3) 
                    {
                        {
                            arr_72 [i_5] [(unsigned char)12] [i_19] [i_20] [i_19] = ((/* implicit */int) max((993381397U), (((/* implicit */unsigned int) (unsigned char)0))));
                            arr_73 [i_5] [i_18 + 1] [i_19] [(signed char)7] [(signed char)7] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)-28734)), ((-(min((18370958546884020788ULL), (((/* implicit */unsigned long long int) var_3))))))));
                            var_29 ^= ((/* implicit */_Bool) (signed char)-48);
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) max((-1026597792), (((/* implicit */int) (short)-13092)))))));
                        }
                    } 
                } 
            } 
            arr_74 [i_5] [i_18] &= ((/* implicit */long long int) ((unsigned long long int) max((((((/* implicit */_Bool) arr_7 [i_5] [i_18])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (short)-13965))))))));
        }
    }
    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))));
    var_32 = ((/* implicit */short) min((var_32), ((short)3877)));
    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2171760858U))))))))));
}
