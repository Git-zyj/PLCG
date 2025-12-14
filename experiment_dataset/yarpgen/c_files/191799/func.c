/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191799
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
    var_11 &= var_1;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((4886824889447028079ULL) > (((((/* implicit */_Bool) 1152921504606846975ULL)) ? (18446744073709551615ULL) : (4886824889447028067ULL))))))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_13 &= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 16777215ULL)) ? (var_4) : (var_3))));
            var_14 = ((/* implicit */unsigned char) 0U);
        }
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((13559919184262523536ULL) & (13559919184262523537ULL)))) ? (arr_6 [i_0]) : (((2314220777260255056ULL) >> (((15402794337767405283ULL) - (15402794337767405258ULL)))))));
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_9)))) ? (var_2) : (var_2)));
            var_17 = ((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -566134885)) ? (4294967293U) : (((/* implicit */unsigned int) 407406763)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            arr_11 [i_0] [i_0] [i_3] = (((!(((/* implicit */_Bool) 13559919184262523516ULL)))) ? (var_2) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_3] [i_0]))) : (var_6))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (unsigned char i_6 = 2; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((unsigned int) 18971540U));
                            var_19 = ((/* implicit */unsigned int) var_7);
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((arr_2 [i_0] [i_0] [i_4]) / (arr_14 [14] [12ULL] [i_5]))))))));
                            arr_19 [i_0] [i_0] [(unsigned char)10] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_0]))) : (288230376151711736ULL)));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((arr_18 [2ULL] [i_0 - 1] [i_6 + 1] [i_6 - 1] [(unsigned char)13] [i_6] [6ULL]) != (var_1))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (short i_8 = 1; i_8 < 17; i_8 += 3) 
            {
                for (int i_9 = 2; i_9 < 16; i_9 += 2) 
                {
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) : ((+(var_3)))));
                            var_23 = ((/* implicit */unsigned long long int) arr_20 [i_7] [i_7]);
                            var_24 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_0]))) : (var_8));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
        }
    }
    /* LoopSeq 3 */
    for (short i_11 = 2; i_11 < 14; i_11 += 2) 
    {
        var_26 = (((!(((/* implicit */_Bool) arr_26 [14ULL] [i_11] [i_11] [14ULL] [i_11] [4])))) ? (max((var_4), (((/* implicit */unsigned long long int) 2032186470U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) 
        {
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((((/* implicit */_Bool) 12694358565606712836ULL)) ? (13559919184262523516ULL) : (((/* implicit */unsigned long long int) arr_9 [i_11]))))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(2314220777260255037ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_0))))) : (var_1)));
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (-(0ULL))))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            var_30 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 0U)) : (var_6)))) ? (max((((/* implicit */unsigned long long int) 3786465672U)), (var_1))) : (var_2))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (arr_14 [i_13] [i_13] [i_13])))) ? (((((/* implicit */_Bool) 8229823039896264583ULL)) ? (13559919184262523516ULL) : (8935141660703064064ULL))) : (((/* implicit */unsigned long long int) var_5))))));
            var_31 = ((/* implicit */unsigned int) min((max((5766292215183411574ULL), (((/* implicit */unsigned long long int) (short)-1)))), (var_6)));
            var_32 = ((/* implicit */unsigned long long int) 5U);
            var_33 = ((/* implicit */int) 760602472U);
        }
        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) (unsigned char)252)))) ? (((((/* implicit */_Bool) arr_29 [i_11 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_11] [i_11] [i_11]))) : (((((/* implicit */_Bool) arr_21 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) -620233494)) : (var_3))))) : ((((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) arr_10 [i_11] [i_11])) ? (var_3) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)12767))))))))));
        var_35 += ((/* implicit */unsigned long long int) (unsigned char)105);
        arr_34 [4ULL] = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 3876057946U)) : (17616919994142831645ULL)))))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 4) 
    {
        var_36 = (-(var_6));
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 14; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                {
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((unsigned int) 16274836036955312371ULL))));
                    var_38 = (~(var_1));
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9090914851201552317ULL)) ? (var_6) : (var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 12197071459620537273ULL)) || (((/* implicit */_Bool) 3491283919918047612ULL))))) : (((/* implicit */int) ((16132523296449296579ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_14]))))))))) == (((unsigned long long int) (+(var_9))))));
                }
            } 
        } 
        arr_43 [9ULL] = ((/* implicit */unsigned long long int) var_5);
        var_40 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (arr_14 [(unsigned char)8] [(unsigned char)8] [i_14]) : (((/* implicit */unsigned long long int) arr_25 [i_14] [i_14] [i_14]))))))) ? (var_7) : (max((8935141660703064064ULL), (((/* implicit */unsigned long long int) -321869035)))));
    }
    for (int i_17 = 2; i_17 < 13; i_17 += 3) 
    {
        var_41 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)451)) ? (1160201723U) : (0U)))), (var_4));
        var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_17 + 2] [15U] [i_17 + 1] [i_17 + 1])))))));
        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((((/* implicit */_Bool) arr_2 [i_17] [i_17 - 2] [4U])) ? (((/* implicit */unsigned long long int) arr_9 [6ULL])) : (var_3)))));
    }
}
