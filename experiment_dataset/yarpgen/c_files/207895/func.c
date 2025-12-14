/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207895
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
    var_12 = ((/* implicit */unsigned short) ((_Bool) var_8));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_5 [6U] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_11)))))) ? (((/* implicit */int) var_7)) : ((~(((((/* implicit */_Bool) (unsigned short)37906)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))));
            arr_6 [i_0] [i_0] [i_1] &= ((/* implicit */_Bool) (short)7791);
            var_13 = ((/* implicit */int) (short)32766);
            var_14 = ((/* implicit */short) min((((/* implicit */int) (unsigned short)27623)), (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_0)))) * (((/* implicit */int) var_3))))));
        }
        for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            arr_9 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-19891))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)105)))))))) : (((((/* implicit */_Bool) (unsigned short)37906)) ? (((((/* implicit */_Bool) var_10)) ? (519956513U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_3)))))))));
            arr_10 [(short)3] = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((int) var_3))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_3 [i_0] [i_2] [i_0 + 1])) : (arr_1 [i_0 - 2]))))))));
            var_15 += ((/* implicit */signed char) var_9);
            var_16 = ((/* implicit */long long int) var_4);
        }
        /* LoopSeq 2 */
        for (short i_3 = 3; i_3 < 9; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_17 = ((((/* implicit */_Bool) (+(((((/* implicit */int) var_1)) + (((/* implicit */int) var_6))))))) ? (((/* implicit */int) arr_15 [i_0] [i_4])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) var_4)) : (2147483647)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))));
                        arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */int) var_11)) * (((/* implicit */int) min((((((/* implicit */int) var_4)) != (((/* implicit */int) arr_14 [i_0] [i_0] [i_4])))), (var_5)))));
                    }
                } 
            } 
            arr_21 [i_3] [i_3 - 2] [i_3] = ((((/* implicit */_Bool) arr_0 [i_3])) ? (((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : (arr_13 [i_0 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)37914)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))));
            var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-14321)) ? (((((/* implicit */int) var_0)) / (arr_19 [(_Bool)1] [i_3] [i_0] [(_Bool)1]))) : (((/* implicit */int) arr_14 [i_3 - 2] [i_0 - 3] [i_0 - 2])))) == (((((_Bool) var_9)) ? (((/* implicit */int) var_9)) : (min((arr_3 [i_0] [i_3] [i_0]), (((/* implicit */int) var_2))))))));
            arr_22 [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) var_4)) + (((/* implicit */int) arr_17 [i_0 - 2] [i_0 - 3])))), (((/* implicit */int) (signed char)-2))));
        }
        for (int i_6 = 3; i_6 < 9; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 2; i_7 < 9; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    {
                        arr_30 [i_6] = ((min((((/* implicit */int) (short)7454)), (694244653))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_6] [i_6])) : (((/* implicit */int) (unsigned short)37914)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            var_19 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((short) var_5))))) ? (((((((/* implicit */int) var_3)) != (((/* implicit */int) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) : (((((arr_1 [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_0 [i_0])) - (15652))))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))));
                            var_20 |= ((/* implicit */long long int) ((arr_13 [(short)7]) < (((/* implicit */long long int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_1)))))))))));
                            var_21 = ((/* implicit */long long int) ((arr_26 [i_0] [i_0] [i_0]) >> (((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (305908797)))) ? (((/* implicit */unsigned int) arr_18 [i_0 - 3] [9] [i_0] [i_0])) : (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1294734225U))))) - (860705303U)))));
                        }
                        arr_33 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_10)) - (60324))))) : (((/* implicit */int) arr_8 [i_7 - 1] [i_7 - 1] [i_7 - 2])))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */signed char) ((((arr_2 [i_0]) >= (((/* implicit */long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_0))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))));
            arr_34 [(unsigned char)8] [i_6] [(short)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((((+(((/* implicit */int) var_0)))) % (arr_23 [i_0 - 2] [i_0] [i_6 + 1]))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -305908821)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) var_11))))))));
        }
    }
    for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        var_23 = ((/* implicit */int) ((signed char) (signed char)18));
        var_24 ^= ((signed char) ((((arr_35 [i_10] [i_10]) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-4473781770397697213LL))) / (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
        arr_38 [i_10] [i_10] &= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_36 [i_10] [i_10]))))));
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) / (1073741312)));
}
