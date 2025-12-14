/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210676
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
    var_18 = ((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)1)))))));
    var_19 = ((/* implicit */unsigned short) ((short) (short)25363));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */short) (unsigned char)239))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_2)))) || (((/* implicit */_Bool) var_13)))))) : (min((((/* implicit */long long int) (+(((/* implicit */int) (short)31))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_6)))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) (+(min((((unsigned int) var_6)), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(((/* implicit */int) ((_Bool) (short)15710))))))));
                    var_22 *= ((/* implicit */short) var_8);
                    /* LoopSeq 3 */
                    for (short i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0 - 1] [i_0] [i_0 - 2])) << (((((/* implicit */int) (short)17159)) - (17150)))));
                            var_24 = ((/* implicit */long long int) (((!(arr_5 [i_0] [i_0] [i_0]))) ? (var_11) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_4])))))));
                            arr_18 [i_4] [i_2] [i_1] [i_2] [i_1] [i_1 + 1] [i_0] = ((/* implicit */long long int) var_11);
                            var_25 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)64));
                        }
                        arr_19 [i_0 - 3] = ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_2] [i_3 - 2] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_12 [i_0] [i_0] [i_1 + 1] [i_2 - 3] [i_3 - 3]) : (((/* implicit */long long int) var_11))))) : ((((_Bool)1) ? (var_8) : (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                        var_26 *= ((/* implicit */short) arr_8 [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))));
                        arr_22 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2851890092U)));
                        var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_15))) + (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))));
                    }
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_24 [i_0] [i_6] [i_0] [i_0 - 1])) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_13))))))), (((/* implicit */long long int) min((((((((/* implicit */int) var_12)) + (2147483647))) >> (((var_17) - (11979445043066465322ULL))))), (((/* implicit */int) var_7)))))));
                        /* LoopSeq 3 */
                        for (int i_7 = 2; i_7 < 10; i_7 += 2) 
                        {
                            var_30 = ((/* implicit */short) max((0U), (((/* implicit */unsigned int) (short)-3605))));
                            arr_29 [i_6] [i_1 - 1] [i_1] [i_1] [i_1] [1LL] [i_1] = ((/* implicit */unsigned char) 1885235303995650234LL);
                            arr_30 [i_7] [i_6] = (_Bool)1;
                            arr_31 [i_0] [i_0] [i_6] [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
                        }
                        for (short i_8 = 3; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_1] [i_6] [i_1 + 1] [i_1 - 1])) ? (var_6) : (-188720260135284198LL)));
                            var_32 = ((/* implicit */unsigned int) arr_3 [i_0 - 3]);
                            arr_34 [i_1 - 1] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (var_8)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)251)), (3319503127370695570ULL))))))) << (((/* implicit */int) (_Bool)1))));
                        }
                        for (short i_9 = 3; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_11)) : (var_1)));
                            arr_37 [i_6] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) arr_7 [i_1 + 1])) - (((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */unsigned long long int) var_15)))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_6] [i_2] [i_6])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_20 [i_6] [(unsigned short)11] [i_0] [i_9])))))))));
                            var_34 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (short)29624))) - (9223372036854775807LL))) + (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))));
                            var_35 = (_Bool)1;
                            arr_38 [i_0 - 2] [i_0] [i_0] [i_0 + 1] [i_6] = ((/* implicit */short) ((((unsigned long long int) var_15)) << (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 404159825)) : ((+(var_1))))) - (404159795ULL)))));
                        }
                        var_36 = (_Bool)1;
                        arr_39 [i_6] [i_6] [i_6] [(signed char)11] = ((/* implicit */unsigned char) ((unsigned long long int) var_4));
                    }
                    var_37 = ((/* implicit */_Bool) var_12);
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (_Bool)1))));
                }
            } 
        } 
        arr_40 [i_0] [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_16 [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0 - 3]), (((/* implicit */short) arr_26 [(signed char)6])))))));
        arr_41 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))))));
    }
    for (int i_10 = 3; i_10 < 20; i_10 += 2) 
    {
        arr_45 [i_10 - 3] = ((/* implicit */short) (!(((/* implicit */_Bool) -44736660))));
        var_39 = ((/* implicit */short) (+(min((((((/* implicit */_Bool) arr_43 [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_43 [i_10 + 1])))))))));
    }
}
