/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47641
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 3; i_4 < 15; i_4 += 1) /* same iter space */
                        {
                            var_11 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2]);
                            arr_13 [i_1] [i_1] [9ULL] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (558446353793941504ULL)))), (max((17888297719915610111ULL), (((/* implicit */unsigned long long int) 1389536405)))))) <= (arr_10 [i_0] [i_2] [i_3] [i_4])));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) 3995386947U);
                        }
                        for (unsigned int i_5 = 3; i_5 < 15; i_5 += 1) /* same iter space */
                        {
                            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) arr_10 [i_1] [13LL] [i_1] [10U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8)))))) ? (max((((/* implicit */unsigned long long int) arr_15 [i_3] [i_5] [i_5] [i_5 - 2] [i_5 - 3])), (((((/* implicit */unsigned long long int) 299580358U)) | (2761921993110855798ULL))))) : (((/* implicit */unsigned long long int) (+(arr_8 [i_0] [i_3] [i_5 + 1]))))));
                            arr_18 [i_2] [(short)12] [i_2] [i_3] [i_5] [i_3] [i_1] = ((/* implicit */_Bool) min((max((299580344U), (((/* implicit */unsigned int) arr_6 [i_3] [i_2] [i_0])))), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (752433432U))), (((/* implicit */unsigned int) arr_4 [i_0] [i_1]))))));
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((var_2) >> (((var_6) - (285039269988022550ULL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) : (((((/* implicit */_Bool) min(((short)32761), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_16 [i_5] [i_5 - 3] [i_5 + 1] [i_5 + 1] [i_5])) : ((((_Bool)0) ? (525050161686012336ULL) : (17888297719915610098ULL))))))))));
                        }
                        for (unsigned int i_6 = 3; i_6 < 15; i_6 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned long long int) (-(614923720)));
                            var_15 -= ((/* implicit */long long int) ((5507071352693837952ULL) >> (((((/* implicit */int) var_1)) - (26961)))));
                        }
                        arr_21 [i_3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((max((((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_2] [i_3] [i_3])), (3542533865U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)18681)) <= (((/* implicit */int) var_4)))))))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */_Bool) ((((-5719857699400691443LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))))) ? (min((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) var_4))))))));
    }
    for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) min(((unsigned char)186), (((/* implicit */unsigned char) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            var_18 = ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9)))) || ((!(((/* implicit */_Bool) (signed char)-80)))));
            var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) != (5078989715492876244ULL)))) | (((/* implicit */int) arr_7 [i_7] [i_7] [i_7]))))));
            arr_27 [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)86)) ? (min((((/* implicit */long long int) (_Bool)0)), (5719857699400691454LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7] [i_7] [i_7])))));
        }
        arr_28 [(signed char)6] = ((/* implicit */unsigned int) max((max(((signed char)115), (arr_7 [i_7] [i_7] [i_7]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-30)))))));
    }
    for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        var_20 = ((/* implicit */short) 10276994747973256027ULL);
        arr_31 [i_9] = ((/* implicit */signed char) 8197230377268608898LL);
        var_21 = ((/* implicit */_Bool) max((((unsigned long long int) ((var_0) != (var_0)))), (((/* implicit */unsigned long long int) ((arr_30 [i_9] [i_9]) - (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))))));
        /* LoopSeq 4 */
        for (short i_10 = 2; i_10 < 20; i_10 += 3) 
        {
            var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 5ULL)) ? (arr_33 [i_10 + 1] [i_10 + 1] [i_10]) : (var_2))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9])))));
            arr_34 [i_10] = ((/* implicit */long long int) var_3);
        }
        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
        {
            arr_37 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2962496419U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31406)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_29 [i_9])) : (((/* implicit */int) (short)-32758)))) : ((-(-1690651774)))))) | (((((/* implicit */_Bool) arr_35 [i_11])) ? (arr_35 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    {
                        var_23 = ((/* implicit */signed char) -1358035473);
                        arr_43 [i_13] [i_12] [9LL] [i_9] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)83))) : (8493880726396933258LL)))));
                        arr_44 [i_9] [i_9] [i_9] [i_9] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (-427643001871542370LL)))) ? (((3594068857314222102ULL) | (((var_2) ^ (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_41 [i_9]), (((/* implicit */long long int) arr_29 [i_9]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)74))))) : (arr_41 [i_11])))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14852675216395329514ULL)) ? (8687142178392613297ULL) : (((((/* implicit */_Bool) 8260930090231053655ULL)) ? (((/* implicit */unsigned long long int) 842271315U)) : (15430440914446154851ULL)))));
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    {
                        arr_53 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 752433424U)) ? (((/* implicit */unsigned long long int) var_10)) : (var_2))), (((((/* implicit */_Bool) 752433447U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [18U] [i_15] [i_14] [i_9]))) : (var_6)))))) ? (((/* implicit */unsigned long long int) ((-1990486955) ^ (((/* implicit */int) ((signed char) (_Bool)1)))))) : (var_2)));
                        var_25 = ((/* implicit */long long int) (((-((~(((/* implicit */int) (unsigned char)41)))))) | (((var_3) ? (((/* implicit */int) arr_51 [i_9] [i_14] [i_15] [i_16])) : (((/* implicit */int) arr_51 [i_9] [i_14] [i_15] [i_9]))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_30 [i_9] [i_9])) ? (arr_30 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_9])))))));
            var_27 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_47 [i_9] [i_9] [i_9] [i_17])) | (((/* implicit */int) arr_55 [i_9] [(_Bool)0]))))), (((((/* implicit */_Bool) arr_30 [i_9] [(signed char)13])) ? (16911058346744849193ULL) : (((/* implicit */unsigned long long int) 299580334U)))))), (((/* implicit */unsigned long long int) var_5))));
            var_28 = max((((((/* implicit */_Bool) (signed char)111)) ? (arr_54 [i_9] [i_17] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))))), ((-(5704839357329600009ULL))));
        }
    }
    for (int i_18 = 0; i_18 < 20; i_18 += 2) 
    {
        var_29 = max((((/* implicit */unsigned char) (signed char)-4)), ((unsigned char)6));
        var_30 = ((/* implicit */unsigned char) ((min((((/* implicit */int) arr_49 [i_18] [i_18] [i_18] [i_18])), (arr_58 [i_18] [i_18]))) <= (((/* implicit */int) var_3))));
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_35 [i_18])) ? (var_2) : (((/* implicit */unsigned long long int) -1691311756)))) - (var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_18] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_18] [i_18] [i_18] [i_18]))) : (arr_30 [i_18] [i_18]))))));
    }
    var_32 = ((/* implicit */unsigned char) var_2);
}
