/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194550
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
    var_18 = ((/* implicit */long long int) ((unsigned short) var_13));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) ((unsigned int) ((unsigned long long int) arr_1 [i_0 - 2])));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                for (int i_3 = 4; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((max((arr_8 [i_3 - 1]), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_3 - 4])))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned short) (-(arr_3 [i_2 - 1])));
                            var_22 |= ((/* implicit */signed char) var_17);
                            var_23 = arr_12 [i_2];
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_24 |= ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (_Bool)1)), (arr_11 [4] [0ULL] [i_5] [i_5 - 1] [i_2] [i_2 - 2] [i_2]))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_11 [i_5] [i_2 - 1] [i_3] [i_2 - 1] [i_2] [i_2 - 1] [i_0])))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((max((arr_2 [i_0 + 1] [(unsigned short)12] [i_0]), (((/* implicit */long long int) arr_13 [i_0 - 1])))), (((/* implicit */long long int) ((short) (unsigned short)65529)))))) > ((+(max((arr_3 [2LL]), (arr_7 [i_0] [i_1 + 2] [i_2] [i_0] [11LL])))))));
                            var_26 = ((/* implicit */unsigned short) min((((arr_4 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]) / (arr_4 [i_5] [i_5 - 1] [i_5] [i_5 - 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_5] [i_5 - 1] [i_5] [i_5 - 1])))))));
                            var_27 = ((/* implicit */long long int) ((_Bool) ((signed char) max((18446744073709551594ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [12] [i_2] [12]))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_8 [6])) : (var_12)))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_5 - 1] [i_2 - 2] [i_1 + 1])) ? (arr_11 [i_0] [i_3 - 3] [i_5 - 1] [i_3] [i_3 + 1] [i_3 - 3] [i_3 + 1]) : (((/* implicit */long long int) ((unsigned int) 11ULL))))) : (((/* implicit */long long int) (+((+(((/* implicit */int) var_11)))))))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) arr_8 [i_2 - 3]))), (min((max((14ULL), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) arr_15 [i_0 - 1] [i_2]))))));
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) 18446744073709551595ULL))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_7 = 1; i_7 < 12; i_7 += 2) 
    {
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_7) % (((/* implicit */unsigned int) -1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-26))))) : (((/* implicit */int) ((_Bool) arr_14 [i_7 + 1] [i_7 - 1] [i_7 - 1])))));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                for (unsigned int i_10 = 2; i_10 < 9; i_10 += 3) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)11002)), (((((/* implicit */unsigned int) 1860942641)) * (4294967286U)))));
                        var_33 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_34 = ((/* implicit */short) arr_21 [i_7] [i_9]);
                        var_35 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) -4103856178841835783LL)) && (((/* implicit */_Bool) arr_23 [i_7] [i_7 + 1])))));
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((unsigned short) max((arr_5 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_10 + 4]), (((/* implicit */unsigned short) var_4))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                for (int i_13 = 3; i_13 < 12; i_13 += 3) 
                {
                    {
                        var_37 = ((/* implicit */long long int) ((short) ((unsigned int) arr_26 [(_Bool)1] [i_11] [i_13 - 3] [i_11])));
                        var_38 += ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) (+(var_7)))) / (((unsigned long long int) arr_22 [i_7] [i_7]))))));
                        var_39 = ((/* implicit */signed char) ((unsigned short) (unsigned short)24421));
                        var_40 = ((/* implicit */short) max((arr_15 [i_7] [i_7]), (((/* implicit */unsigned short) arr_19 [i_7 + 1]))));
                    }
                } 
            } 
        } 
        var_41 |= ((/* implicit */int) arr_3 [i_7]);
    }
}
