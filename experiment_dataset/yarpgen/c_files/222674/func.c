/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222674
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
    var_11 += ((/* implicit */signed char) 18446744073709551615ULL);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_12 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) -724621000)), (-4273713880688319906LL)));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            arr_4 [i_1] [i_0] [i_0] &= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1998209469344571767ULL)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)20207))))) != (var_10))))));
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((short) var_2)))));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((1ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_15 = ((/* implicit */unsigned char) ((arr_0 [i_3]) & (((/* implicit */int) (unsigned short)20212))));
                var_16 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)45332))));
                var_17 = ((/* implicit */short) arr_6 [i_3] [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        {
                            arr_14 [i_5] [i_3] [i_2] &= ((/* implicit */unsigned int) (~(arr_6 [i_0] [i_0])));
                            arr_15 [i_0] [i_2] [i_3] [i_5] = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) arr_5 [i_0] [i_0])))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_2))));
            }
            arr_16 [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)129)) < (var_5)))), (var_7))) & (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20763)))))));
            arr_17 [i_0] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0])) - (((/* implicit */int) arr_11 [8ULL]))))));
            /* LoopSeq 4 */
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
            {
                var_19 -= ((/* implicit */signed char) 5345456006324382654LL);
                /* LoopSeq 4 */
                for (unsigned short i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 464135791U)) ? (-226688657620625724LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-72)))))));
                    arr_24 [i_7] [i_7] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)118)) == (((arr_9 [i_0] [i_2] [i_2] [i_7 + 2] [i_2] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_2] [i_0] [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_9 [i_7 - 2] [i_7] [i_7 - 1] [i_7 + 3] [i_7 - 1] [i_7]))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_29 [4U] [i_2] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40641))) : (0ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)154))))) : (((/* implicit */int) ((3U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33472)))))))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))) ^ (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36133))) / (5490892256481212807ULL))), (((/* implicit */unsigned long long int) ((unsigned short) var_8))))))))));
                    var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | ((-(((3076161613U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned short)29383))))) ? (675919259976131095ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27)))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(arr_22 [i_9] [i_9] [i_9] [i_9]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1047368387) == (((/* implicit */int) (unsigned short)29380))))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_31 [i_9] [i_2] [i_6] [i_9] [i_2] [i_0])) > (((/* implicit */int) arr_2 [i_6] [i_0]))))) : (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_9]))))));
                    arr_32 [i_0] [i_6] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 2094908659U)), (2305842459457880064ULL)));
                    arr_33 [(short)11] [i_2] [i_2] [i_2] [i_0] = ((arr_7 [i_9] [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2327608984U)))));
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 4) 
                {
                    arr_36 [i_0] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 2580786564U)) : (7817036999730370404ULL)));
                    var_25 = ((/* implicit */unsigned short) (short)13626);
                    var_26 = ((/* implicit */unsigned int) ((-1LL) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)117)))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 15; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 15; i_12 += 2) 
                    {
                        {
                            var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_12 + 1] [i_2] [i_12 + 1] [i_12 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)10905)) + (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)17)), ((unsigned short)34640)))) ? (((((/* implicit */_Bool) 3181060263U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_2]))) : (9458285120119459270ULL))) : (((/* implicit */unsigned long long int) 2089158556U))))));
                            var_28 = ((/* implicit */unsigned char) (+((+(arr_41 [i_12] [i_12] [i_12] [i_12 + 1] [i_12])))));
                            var_29 = ((/* implicit */unsigned short) min(((!((!(((/* implicit */_Bool) arr_37 [i_0] [i_2] [i_6] [i_12])))))), ((!(arr_10 [i_12 - 2] [i_12 - 1] [i_11 - 1] [i_11])))));
                            arr_42 [14U] [i_2] [i_6] [i_2] [i_12 - 1] = ((/* implicit */int) 18446744073709551615ULL);
                        }
                    } 
                } 
            }
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    for (unsigned int i_15 = 3; i_15 < 14; i_15 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 + 1]))) : (((((/* implicit */_Bool) (signed char)127)) ? (6253319370766157818LL) : (((/* implicit */long long int) 2299764748U)))))) - (var_1)));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) != (4LL)));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_35 [i_2] [i_2] [i_2] [i_13])) / (((/* implicit */int) (unsigned short)10169))))))) ? ((-(((/* implicit */int) (signed char)(-127 - 1))))) : (min((((-2060283694) / (((/* implicit */int) arr_18 [i_13])))), (max((((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [(unsigned char)10] [i_13])), (var_5)))))));
            }
            for (unsigned int i_16 = 0; i_16 < 16; i_16 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (unsigned short)51367))));
                arr_55 [i_0] [14ULL] [8U] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)65535)), (-20LL)))) ? (((((/* implicit */_Bool) (unsigned short)19675)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (signed char)98)))) : (((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))))))))) ? (((max((((/* implicit */unsigned int) (unsigned char)63)), (16383U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (3786427370U)));
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2664442397359096957LL)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (signed char)123)))) / (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) var_5)))))))))));
                var_35 |= var_8;
            }
            for (unsigned char i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                arr_60 [i_0] = ((/* implicit */signed char) 2269012930347527013LL);
                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((2147483647) / (((((/* implicit */_Bool) (unsigned short)13735)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (unsigned short)54833)))))))));
            }
        }
        for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 2) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-95)) ? (8202960878171509020LL) : (((/* implicit */long long int) 2729925252U))));
            var_38 = ((/* implicit */unsigned short) var_10);
        }
        var_39 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7)))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (13500285784994816379ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) var_1))));
    }
}
