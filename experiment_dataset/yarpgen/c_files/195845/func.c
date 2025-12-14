/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195845
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
    var_10 = ((/* implicit */long long int) ((unsigned short) 7489568269365558393ULL));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) var_1))));
        var_12 = arr_1 [i_0] [i_0];
        var_13 = ((/* implicit */unsigned short) arr_0 [i_0 + 1] [i_0]);
        var_14 &= ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) var_0))));
    }
    for (unsigned int i_1 = 3; i_1 < 9; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */short) (signed char)126);
        var_15 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) max(((signed char)-127), (((/* implicit */signed char) var_3))))), (((long long int) 2612986710U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 3] [i_1])) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-126)), (arr_3 [i_1])))) : (((/* implicit */int) (signed char)-121)))))));
    }
    for (unsigned int i_2 = 3; i_2 < 9; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_16 = ((/* implicit */signed char) arr_9 [i_2]);
            var_17 = ((/* implicit */unsigned long long int) min((arr_9 [10U]), (-8340505999834125107LL)));
        }
        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            var_18 = ((/* implicit */signed char) (~(((((/* implicit */int) var_4)) + (((/* implicit */int) arr_12 [i_2] [i_2] [i_4]))))));
            var_19 = ((/* implicit */short) var_8);
        }
        var_20 = ((/* implicit */unsigned char) var_2);
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_2 - 3])) : (((/* implicit */int) arr_6 [i_2]))))) ? (((((/* implicit */_Bool) arr_5 [i_2 - 3])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_8 [i_2 + 4])))) : (((/* implicit */int) ((signed char) (unsigned char)227)))));
            var_22 ^= ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_2])) <= (((/* implicit */int) arr_5 [i_2 - 3]))))), (((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) != (-3996108756887691555LL))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_2])) ? (var_1) : (4375192434710406325ULL))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (18446744073709551606ULL)))))) ? (((/* implicit */unsigned int) min((var_7), (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_4)) : (arr_13 [i_5])))))) : (arr_7 [i_2 + 2])));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) 3996108756887691560LL);
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((-1006255372) ^ (((/* implicit */int) arr_20 [i_6] [i_2])))), (((/* implicit */int) (signed char)125))))) - (((unsigned int) (unsigned char)17)))))));
            }
        }
        for (unsigned char i_7 = 2; i_7 < 10; i_7 += 1) 
        {
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) ((short) arr_1 [i_7 - 2] [2LL]))) : (((((/* implicit */int) arr_1 [i_7 + 3] [(unsigned short)2])) / (((/* implicit */int) var_3)))))))));
            arr_25 [i_2] [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (((unsigned int) (!(((/* implicit */_Bool) arr_13 [i_2])))))));
        }
        for (int i_8 = 2; i_8 < 10; i_8 += 4) 
        {
            var_27 = ((/* implicit */long long int) max((((/* implicit */int) var_8)), ((+(var_7)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                arr_30 [i_2] = ((/* implicit */unsigned int) ((arr_22 [i_2 + 4] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (short)-17605)))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        {
                            arr_37 [i_2] [i_2] = ((/* implicit */int) (-(((unsigned int) (unsigned char)176))));
                            arr_38 [i_11] [i_2] [i_9] [(signed char)7] [i_2] [i_2] = ((/* implicit */short) arr_6 [i_2]);
                            var_28 = ((/* implicit */unsigned long long int) arr_9 [12LL]);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_12 = 1; i_12 < 12; i_12 += 3) 
            {
                arr_41 [i_2] [i_2] [i_2 + 4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(arr_15 [i_2] [i_8 - 2] [i_2])))) - ((+(18LL)))));
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (unsigned char)65))) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (signed char)-48))))));
                var_30 = ((/* implicit */unsigned long long int) arr_31 [i_12 - 1] [(short)11] [i_12] [i_12] [i_2 + 4]);
            }
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_51 [i_2] [i_14] [(signed char)3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 2737492271U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) : (3056782865U)));
                            var_31 -= ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_27 [i_8])))), (((/* implicit */int) (!(((/* implicit */_Bool) 1595375727)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 13; i_16 += 1) 
                {
                    for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) 
                    {
                        {
                            var_32 = (((-(((/* implicit */int) arr_5 [i_2 + 3])))) | (((int) var_1)));
                            arr_58 [i_2] [i_2] [i_13] [i_8] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) arr_12 [i_13] [i_13] [i_2]));
                            var_33 = ((_Bool) ((((/* implicit */_Bool) -524772120635540198LL)) ? (((/* implicit */int) (short)-26089)) : (1184679697)));
                            arr_59 [(signed char)2] [i_2] = ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1023)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (3464849693U)))) : (((((((/* implicit */_Bool) 2116567091521930916LL)) ? (var_1) : (((/* implicit */unsigned long long int) var_7)))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
            }
        }
        var_34 = ((/* implicit */unsigned char) (~(((long long int) arr_29 [12ULL] [i_2] [12ULL] [i_2]))));
    }
    var_35 = ((/* implicit */int) (_Bool)0);
    var_36 = ((/* implicit */short) (~(var_7)));
    var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-34))));
}
