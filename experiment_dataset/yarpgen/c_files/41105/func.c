/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41105
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
    var_16 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) var_5))))) ? (1845146833086154448LL) : (((((/* implicit */_Bool) -1845146833086154461LL)) ? (var_6) : (((/* implicit */long long int) 377898441))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) -377898419)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13)))), (max((377898459), (((/* implicit */int) (unsigned char)232))))))) : (-6418954511887560051LL));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (signed char)-92))) ? (var_6) : (((((/* implicit */_Bool) ((unsigned char) (signed char)-78))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (unsigned char)225))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))));
        var_18 ^= (-(((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_2 [(_Bool)1])) > (((/* implicit */int) (unsigned char)40)))))));
        var_19 = ((long long int) var_5);
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (signed char i_3 = 3; i_3 < 14; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_20 *= ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) -12LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)40056)))), ((~(((/* implicit */int) (signed char)-15))))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-44)), (-7784297564923030802LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40065))) & (-1845146833086154443LL))) : (((/* implicit */long long int) (+(arr_5 [i_2] [(unsigned char)13]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((arr_7 [5] [i_2] [13]), (((/* implicit */long long int) ((((/* implicit */int) (signed char)59)) - (377898452))))))));
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                        {
                            var_22 ^= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)58570)) ? (arr_14 [9LL] [i_4] [0U]) : (arr_14 [(_Bool)1] [i_4] [i_1]))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (_Bool)1))));
                            arr_16 [i_4] [i_5] [i_4] [i_3] [4U] [i_1] [i_4] = ((/* implicit */unsigned int) (signed char)-53);
                            var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) 1423240137)), (-9223372036854775805LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_4))))) : (6418954511887560071LL)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_1] [i_6] [i_4] [i_3 - 2] [i_4] [i_2] [i_1] = ((/* implicit */_Bool) ((unsigned char) var_13));
                            arr_20 [(_Bool)1] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-677866655) : (((/* implicit */int) (unsigned short)65535))));
                        }
                        for (int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                        {
                            var_25 *= ((/* implicit */_Bool) max((arr_23 [i_1] [i_2 + 1] [i_3] [(_Bool)1] [i_7]), (((/* implicit */long long int) var_13))));
                            var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) arr_7 [i_1] [i_2 + 1] [i_3])) ? (var_14) : (((/* implicit */int) (_Bool)1)))))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_4])) <= (((/* implicit */int) var_5)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_2 + 1])) && (((/* implicit */_Bool) arr_10 [i_3 - 1] [i_2 + 1])))))));
                        }
                        for (int i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_10)))) + (arr_15 [i_4] [i_1] [i_3])))), (max((var_6), (((/* implicit */long long int) (unsigned short)25472))))));
                            arr_27 [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) arr_25 [(signed char)8] [i_4] [i_3 - 2] [i_2] [i_2] [i_1]);
                            arr_28 [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
        } 
        arr_29 [13LL] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned char) (unsigned short)65535))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_2 [(_Bool)1])), (var_7)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (7784297564923030805LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
        var_29 = (~(2147483640));
    }
    for (int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (unsigned short)12))) == (max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)18))))));
        arr_32 [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) -2032575348)))))));
    }
    for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        var_31 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) arr_5 [i_10] [i_10])))));
        var_32 = ((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */int) var_9)) / (((/* implicit */int) (signed char)120)))) <= ((~(((/* implicit */int) (unsigned char)243)))))));
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
        arr_35 [i_10] = ((/* implicit */unsigned int) (_Bool)1);
    }
}
