/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212298
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0))));
        /* LoopSeq 4 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) (((-(var_10))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6))))));
            arr_4 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_0]))))));
            var_15 = (~(((/* implicit */int) ((arr_1 [i_0]) && (((/* implicit */_Bool) var_4))))));
            var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)15)) <= (((/* implicit */int) (signed char)-15)))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (var_11)))) : (((int) var_2))));
        }
        for (int i_2 = 3; i_2 < 16; i_2 += 4) /* same iter space */
        {
            arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_11) <= (((/* implicit */int) var_2))))) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) - (210)))));
            var_17 = ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) var_0)))) % (((/* implicit */int) arr_0 [i_2 - 1] [i_0])));
            arr_8 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) * (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_5)))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                var_19 = ((/* implicit */signed char) var_4);
                var_20 = ((/* implicit */short) ((unsigned short) var_11));
                arr_11 [i_0] [i_2 + 1] [i_2] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_2 - 2] [i_2 - 1]))));
                var_21 = ((/* implicit */unsigned long long int) (~(arr_9 [i_0] [i_2 + 3] [i_2 + 2])));
            }
        }
        for (int i_4 = 3; i_4 < 16; i_4 += 4) /* same iter space */
        {
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
            arr_16 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (var_3)))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 4) 
        {
            arr_20 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_2 [i_0] [i_0]))))) || (((/* implicit */_Bool) var_12)));
            arr_21 [i_0] = ((signed char) (~(((/* implicit */int) var_1))));
        }
    }
    /* vectorizable */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 2) 
                        {
                            arr_36 [i_6] [i_7] [i_7] [i_8] [i_9] [i_10 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
                            arr_37 [i_6] [i_6 - 1] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((unsigned int) var_11)) % (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (arr_33 [i_6] [i_9] [i_8] [i_6]))))));
                            var_23 = ((/* implicit */_Bool) arr_6 [i_6] [i_6]);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1])) ? (((int) var_9)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) var_9))))));
                            arr_40 [i_6] [i_7] [i_7] [i_7] [i_11] [i_11] = ((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) var_2)))));
                            var_25 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_2)) + (138))))));
                            var_26 = ((/* implicit */unsigned long long int) var_6);
                            var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))) - (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (signed char)29))))));
                        }
                        for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 4) 
                        {
                            arr_43 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_6] [i_8] [i_6] [i_12 - 1] [i_12])) + (((/* implicit */int) ((_Bool) (short)(-32767 - 1))))));
                            var_28 = ((unsigned char) (_Bool)1);
                            var_29 = ((/* implicit */unsigned short) arr_14 [i_12 - 1] [i_7] [i_8]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            arr_46 [i_6] [i_7] [i_8] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_8] [i_7] [i_6 - 1] [i_9] [i_6])) & (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_31 [i_7] [i_8] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6]))) : (var_10)))));
                            var_30 = ((/* implicit */signed char) ((unsigned char) var_5));
                        }
                    }
                } 
            } 
        } 
        arr_47 [i_6] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) >= (((((((/* implicit */int) var_2)) + (2147483647))) << (((((arr_19 [i_6] [i_6]) + (1598347970))) - (29)))))));
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_1 [i_6])))))));
        arr_48 [i_6] [i_6] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_10)))));
    }
    for (int i_14 = 0; i_14 < 13; i_14 += 1) 
    {
        var_32 = ((/* implicit */signed char) (((~(((/* implicit */int) ((((/* implicit */int) arr_32 [i_14] [i_14] [i_14] [i_14] [i_14])) < (((/* implicit */int) var_9))))))) / ((-(((/* implicit */int) arr_18 [i_14] [i_14]))))));
        arr_51 [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_31 [i_14] [i_14] [i_14] [i_14])) ? (arr_9 [i_14] [i_14] [i_14]) : (((/* implicit */int) var_5)))), ((-(((/* implicit */int) var_2))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_14])) ? (var_10) : (6401949446557737257ULL)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-28)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_34 [i_14] [i_14] [i_14] [i_14])) != (arr_33 [i_14] [i_14] [i_14] [i_14])))))))));
    }
    var_33 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-71))))) | (max((((/* implicit */unsigned long long int) var_7)), (var_10)))))));
    var_34 = ((((/* implicit */int) var_6)) % ((((-(((/* implicit */int) var_7)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6))))))));
    var_35 = ((/* implicit */signed char) (+(((unsigned long long int) min((((/* implicit */short) var_5)), (var_1))))));
}
