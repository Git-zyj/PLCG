/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39030
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) var_6))));
    var_11 = ((/* implicit */unsigned short) var_8);
    var_12 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (var_2)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 7901877021058253232ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_6))))))) % (var_2));
        var_13 = ((/* implicit */int) max((var_13), (max((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) (short)-17481))))), ((~(((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */int) (signed char)101);
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 2814185386U)))))))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                var_15 = ((/* implicit */int) (~(((3254557734U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24691)))))));
                var_16 = ((/* implicit */_Bool) -1484387792);
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_17 = ((/* implicit */int) var_2);
                arr_18 [i_1] [i_1] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-72)) / (arr_4 [i_1])));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))) > (2814185386U)));
            }
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (signed char)123)) ? (1602951715U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
        }
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_7 = 4; i_7 < 21; i_7 += 3) 
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (_Bool)0))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */unsigned long long int) -2081926615)) - (3601399407109826025ULL))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) (unsigned short)0);
                            var_23 = (~(((/* implicit */int) max((((/* implicit */short) var_5)), (arr_27 [i_7] [i_7] [i_7 + 2] [i_7] [i_7] [i_7 - 2])))));
                            arr_31 [i_1] [i_6] [i_7 - 3] [i_6] [i_9] = ((/* implicit */unsigned long long int) (signed char)127);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        arr_37 [i_7] = ((/* implicit */short) 11247594985717522907ULL);
                        arr_38 [i_7] [i_1] = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) arr_36 [i_1] [i_6] [i_7] [i_7 - 1] [i_11])))));
                    }
                    var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) (signed char)-14)))) || ((!(((/* implicit */_Bool) (signed char)-1))))));
                    var_25 -= ((/* implicit */unsigned long long int) var_0);
                    arr_39 [i_10] [i_7] [i_7 - 1] [i_6] [i_1] [i_1] = (-(((/* implicit */int) min((((/* implicit */signed char) var_7)), ((signed char)127)))));
                }
                for (unsigned int i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    var_26 = ((/* implicit */unsigned int) (~(-1484387808)));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (max((((/* implicit */unsigned int) (unsigned short)24775)), (var_0))) : (1480781910U)));
                    var_28 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7 - 2] [i_7 - 2] [i_7])) ? (((/* implicit */int) (unsigned short)56021)) : (((/* implicit */int) var_6)))))));
                    arr_42 [i_1] [i_1] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) min(((signed char)-92), (((/* implicit */signed char) arr_30 [i_1] [i_6] [i_7] [i_1] [i_1] [i_1] [i_1]))))) * ((~(((/* implicit */int) arr_30 [i_1] [i_6] [i_7] [i_12] [i_1] [i_6] [i_6]))))));
                }
                arr_43 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24781)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-64))))))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_46 [i_1] [i_1] [i_1] [i_1] = var_3;
                var_29 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_10 [i_1] [i_6] [i_1])) && (((/* implicit */_Bool) arr_10 [i_1] [i_6] [i_13])))), ((!(((/* implicit */_Bool) (short)-1750))))));
                arr_47 [i_13] = (short)17717;
                arr_48 [i_1] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_27 [i_1] [i_6] [i_1] [i_6] [i_1] [i_13]))))));
                arr_49 [i_1] [i_6] [i_13] [i_13] = (~((~(arr_4 [i_1]))));
            }
            for (int i_14 = 0; i_14 < 23; i_14 += 4) 
            {
                arr_53 [i_1] [i_6] [i_14] [i_14] = ((/* implicit */_Bool) ((int) min((3), (((/* implicit */int) (unsigned short)50809)))));
                var_30 = ((/* implicit */unsigned long long int) min((min((arr_40 [i_1] [i_6] [i_14] [i_14]), (arr_40 [i_1] [i_1] [i_6] [i_14]))), (((((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-8223)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5918)))))))));
                arr_54 [i_1] [i_6] [i_14] [i_14] = ((/* implicit */int) ((2837643789536575900ULL) | (((/* implicit */unsigned long long int) 1393138384U))));
                /* LoopNest 2 */
                for (signed char i_15 = 2; i_15 < 22; i_15 += 4) 
                {
                    for (short i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        {
                            arr_60 [i_1] [i_6] [i_14] [i_15] [i_16] = ((/* implicit */signed char) (((~(var_9))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(var_5)))))))));
                            arr_61 [i_6] [i_15] [i_16] = ((/* implicit */unsigned short) var_7);
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(arr_7 [i_1]))), (((/* implicit */unsigned int) (unsigned char)0))))) ? (((/* implicit */int) arr_21 [i_6] [i_16])) : (((/* implicit */int) (short)29758))));
                            arr_62 [i_16] [i_15] [i_15 + 1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned short) 2608822303U);
                        }
                    } 
                } 
            }
            arr_63 [i_1] [i_6] [i_1] = ((/* implicit */unsigned char) 1686144993U);
        }
        var_32 = ((/* implicit */unsigned int) (unsigned short)17173);
        var_33 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((unsigned int) (~(2608822328U))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_1] [i_1] [i_1])) & (((/* implicit */int) (short)-8804))))), (min((((/* implicit */unsigned long long int) (short)-9825)), (14243022269719928393ULL))))));
    }
}
