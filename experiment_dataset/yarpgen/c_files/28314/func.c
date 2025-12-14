/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28314
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
    var_18 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) (short)-14577)) : (((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = var_17;
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0]) * (7340032ULL)))) ? (((/* implicit */int) (unsigned short)55160)) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_3])) ? (var_1) : (arr_5 [i_0] [i_1] [i_2] [6])))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] [i_1] = arr_6 [i_0] [i_1] [i_0];
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned long long int) (unsigned char)0);
                                var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55151)) ? (arr_11 [i_4] [11LL] [i_4] [14]) : (arr_11 [i_0] [i_0] [i_0] [i_0])))) ? (min((arr_12 [i_0] [i_1] [i_4]), (((/* implicit */unsigned long long int) var_8)))) : ((-(min((((/* implicit */unsigned long long int) 517187635)), (7340032ULL)))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)10376)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_15)) : (max((arr_16 [i_0] [i_1] [i_4] [i_5] [16] [i_6]), (((/* implicit */int) (unsigned short)47813))))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)10364))) : (((/* implicit */int) ((_Bool) (unsigned short)55162))))))));
                                var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)0)), (arr_5 [i_0] [i_1] [i_1] [i_5])))) ? (((/* implicit */int) ((arr_7 [i_0] [i_1] [i_4] [i_5] [i_1] [5ULL]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55160)))))) : (((/* implicit */int) min(((unsigned short)55128), (((/* implicit */unsigned short) (signed char)-96))))))), (min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)31))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_24 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_18 [i_0] [i_1] [i_7]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_8] [11ULL] [i_9])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)206))))) : (max((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) (signed char)-107))));
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_22 [i_8] [i_8] [(unsigned char)17] [i_8]))))))) ? (((arr_21 [i_1] [i_7] [i_8] [i_1]) - (arr_21 [i_0] [i_8] [i_0] [i_8]))) : (((((/* implicit */_Bool) max(((unsigned char)229), (((/* implicit */unsigned char) (signed char)-37))))) ? ((((_Bool)1) ? (arr_7 [i_0] [i_0] [i_7] [i_8] [i_9] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1])))))));
                            }
                        } 
                    } 
                } 
                var_26 += ((/* implicit */signed char) ((((arr_16 [i_0] [i_0] [(signed char)13] [(short)3] [i_1] [i_1]) + (2147483647))) << (((((((/* implicit */unsigned long long int) ((var_10) / (((/* implicit */int) var_16))))) ^ (max((3111567691699122850ULL), (((/* implicit */unsigned long long int) (unsigned short)22890)))))) - (15335176382010436201ULL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_10 = 2; i_10 < 16; i_10 += 2) 
    {
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            for (int i_12 = 1; i_12 < 16; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        for (unsigned long long int i_14 = 2; i_14 < 18; i_14 += 2) 
                        {
                            {
                                arr_40 [i_10] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((2147483646), (((/* implicit */int) (unsigned short)10374))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((3494583796086993661ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))))))) : (((((/* implicit */unsigned long long int) arr_37 [(short)10] [(short)1])) + (min((((/* implicit */unsigned long long int) (unsigned short)2047)), (var_5)))))));
                                arr_41 [i_14] &= ((/* implicit */unsigned long long int) arr_5 [i_12 + 3] [i_14 + 1] [i_10 + 1] [i_13]);
                                arr_42 [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((min((((/* implicit */long long int) (signed char)-16)), (5282358053027437022LL))) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)0))))) > (((((/* implicit */_Bool) 15360U)) ? (((/* implicit */unsigned long long int) 1257383699)) : (((((/* implicit */_Bool) var_12)) ? (arr_7 [i_10] [i_10] [i_11] [i_12] [i_13] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18014)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 4) 
                        {
                            {
                                arr_48 [i_10] [i_10] [i_10] [i_10 - 2] [i_12] [i_10] [i_10 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)16))) : (-7432338807491450436LL))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_27 |= (short)-4762;
                                arr_49 [i_10 - 2] [i_11] [i_12 + 3] [18] [i_12] = ((/* implicit */unsigned char) ((unsigned long long int) -196786489));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
    {
        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) 
        {
            {
                arr_54 [(unsigned short)0] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_32 [i_17])) ? (var_7) : (((/* implicit */int) (_Bool)1)))), (min((arr_32 [i_17]), (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 10; i_19 += 4) 
                {
                    for (long long int i_20 = 0; i_20 < 10; i_20 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -534195772)) : (var_2))))));
                            var_29 = ((/* implicit */unsigned char) arr_17 [i_17] [(signed char)12]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_21 = 0; i_21 < 10; i_21 += 3) 
                {
                    for (int i_22 = 0; i_22 < 10; i_22 += 4) 
                    {
                        {
                            arr_65 [0] [i_18] [i_18] [i_21] [i_18] [i_18] = (((!(((/* implicit */_Bool) 12669048385831987837ULL)))) ? ((~(((/* implicit */int) max((((/* implicit */short) arr_64 [i_17] [i_17])), (arr_62 [i_17])))))) : ((-(((/* implicit */int) ((unsigned short) var_13))))));
                            arr_66 [i_21] = ((/* implicit */unsigned long long int) min((max((arr_63 [i_17] [i_18]), (arr_63 [i_22] [i_21]))), (((/* implicit */unsigned int) arr_17 [i_18] [10ULL]))));
                            arr_67 [i_17] [i_17] [i_18] [i_21] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) max((144115188075823104ULL), (((/* implicit */unsigned long long int) -1381584355))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_22 [i_21] [i_21] [i_21] [i_22])), (-1796915756)))) ? (arr_13 [i_17] [i_18] [i_18] [18] [i_18] [i_17]) : (min((((/* implicit */long long int) (_Bool)0)), (9223372036854775807LL)))))) : (min((15146749684901827497ULL), (((/* implicit */unsigned long long int) (short)577))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
