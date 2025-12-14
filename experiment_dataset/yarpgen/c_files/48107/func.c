/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48107
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) > (var_7)));
    var_20 = ((/* implicit */int) min((min((((/* implicit */long long int) ((var_0) ^ (((/* implicit */int) var_18))))), (var_1))), (((/* implicit */long long int) var_16))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) var_0))), (max((((/* implicit */long long int) (unsigned char)105)), (var_10)))))) % (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_1 [i_0])))))));
        var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (arr_2 [i_0])))), ((-(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (((~(arr_1 [i_1 + 1]))) - (((/* implicit */unsigned long long int) (~(var_5))))))) ? (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_12))) : (var_11))))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((min((arr_1 [i_0]), (arr_1 [i_0]))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_13)) : (var_1)))), (arr_4 [(unsigned short)1]))))))));
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (((((/* implicit */long long int) var_5)) - (arr_3 [i_1 - 2]))))))));
        }
        for (unsigned char i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
            {
                var_26 |= ((/* implicit */unsigned char) var_6);
                var_27 = ((/* implicit */int) var_17);
                var_28 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_7 [i_0]))))), (((unsigned int) var_13))))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((arr_9 [i_0] [i_4] [i_3] [i_4]), (((/* implicit */unsigned char) var_2))))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))), (((/* implicit */unsigned long long int) var_6)))))));
                    var_30 = ((/* implicit */signed char) max((((/* implicit */int) (short)-11559)), (((((/* implicit */_Bool) max(((unsigned char)210), (((/* implicit */unsigned char) (signed char)88))))) ? (((/* implicit */int) max((var_16), (((/* implicit */short) (unsigned char)2))))) : (2013265920)))));
                }
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                {
                    var_31 |= var_2;
                    var_32 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) var_3)))))), (((long long int) ((((/* implicit */_Bool) var_12)) ? (var_12) : (arr_5 [i_0] [i_0]))))));
                }
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                {
                    var_33 = ((/* implicit */long long int) max((var_33), (min((var_7), (((/* implicit */long long int) min((var_18), (((/* implicit */unsigned short) var_17)))))))));
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_2] [i_2 + 2]), (var_13)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_5 [i_0] [i_2 + 1])))));
                }
            }
            for (signed char i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    var_35 = (((_Bool)0) ? (((/* implicit */long long int) min((max((var_12), (((/* implicit */unsigned int) (unsigned char)90)))), (((/* implicit */unsigned int) ((int) var_7)))))) : (max((var_7), (((/* implicit */long long int) arr_8 [i_2 - 2] [i_0])))));
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_5) > (arr_5 [i_2 + 1] [i_2 - 1])))) == ((-(((/* implicit */int) var_2))))));
                }
                var_37 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_2)))))) != (max((5702393461260587094LL), (((/* implicit */long long int) (_Bool)1)))))))));
                var_38 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((min((((/* implicit */int) var_18)), (arr_8 [i_0] [i_0]))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))) < (var_13))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)209)) ? (arr_19 [i_0] [i_0] [i_7]) : (arr_19 [i_0] [i_0] [i_7])))) - (min((((/* implicit */long long int) var_11)), (var_7)))))));
            }
            var_39 = ((/* implicit */short) min((min((var_7), (((/* implicit */long long int) arr_19 [i_2 - 1] [i_0] [i_0])))), (((((/* implicit */long long int) arr_19 [i_2 - 2] [i_0] [i_2 - 1])) - (var_7)))));
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (unsigned char)68))));
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */_Bool) min((((((/* implicit */int) min(((short)-10780), (((/* implicit */short) (unsigned char)118))))) & (((/* implicit */int) ((((/* implicit */long long int) var_6)) != (var_10)))))), (((((/* implicit */_Bool) ((unsigned char) arr_10 [i_9] [i_9] [(unsigned char)10] [i_9]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) var_17))))));
        var_42 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) > (min((((/* implicit */unsigned int) arr_15 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])), (var_14)))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_43 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) ((signed char) var_9)))))), ((~(var_11)))));
        var_44 = ((/* implicit */_Bool) max((var_44), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_2)))) : ((-(((/* implicit */int) var_3))))))) && (((/* implicit */_Bool) var_12))))));
        var_45 = ((/* implicit */signed char) min((((/* implicit */int) (short)-11563)), (((((/* implicit */_Bool) (short)11559)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-669))))));
        var_46 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) var_14)), (var_9))) % (((/* implicit */long long int) min((max((var_15), (((/* implicit */unsigned int) (unsigned char)172)))), (((arr_22 [i_10] [(signed char)12]) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
    }
}
