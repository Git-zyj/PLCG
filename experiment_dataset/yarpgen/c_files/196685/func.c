/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196685
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
    var_17 = ((/* implicit */signed char) ((((((var_6) >= (((/* implicit */int) var_2)))) ? ((~(646176837U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((18446744073709551604ULL) % (var_4))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_6 [i_2] &= ((/* implicit */signed char) (_Bool)1);
                    var_18 *= ((/* implicit */unsigned char) ((((((/* implicit */int) min((((/* implicit */short) arr_1 [i_0 + 3] [i_1])), ((short)-21972)))) / (arr_2 [i_0]))) * (max(((-(((/* implicit */int) (unsigned short)54162)))), ((-(((/* implicit */int) (signed char)-79))))))));
                }
            } 
        } 
        var_19 += ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned int) arr_0 [i_0 + 3]))), (((((/* implicit */_Bool) (short)-21972)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_0 [i_0 - 1])))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11362))) / (arr_0 [(_Bool)1])))))))) ^ (max((arr_0 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) -2333070747989013905LL)) ? (((/* implicit */int) arr_4 [(signed char)4])) : (((/* implicit */int) (signed char)88))))))))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_13)) ? (17566581287102762038ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) var_7)))))));
    }
    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                for (unsigned int i_6 = 1; i_6 < 10; i_6 += 2) 
                {
                    {
                        var_22 &= ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */_Bool) (short)-20940)) ? (131040U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_3])))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_16 [i_5] [i_6])))))) : (((/* implicit */int) (!(arr_16 [i_5] [i_5]))))));
                        var_23 = ((/* implicit */unsigned int) var_15);
                        arr_18 [i_3] [i_4 + 1] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) (+((-(((((/* implicit */int) arr_11 [10ULL] [i_4] [i_5] [i_6])) / (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
            arr_19 [i_4] = ((/* implicit */int) (signed char)-79);
            var_24 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (4879449928749604915LL)))) ? (min((((/* implicit */int) (signed char)102)), (arr_2 [i_3]))) : ((~(-1204510757))))), (((/* implicit */int) var_3))));
            var_25 = ((/* implicit */unsigned int) (+(arr_15 [i_4])));
        }
        /* vectorizable */
        for (short i_7 = 3; i_7 < 12; i_7 += 1) 
        {
            var_26 += ((/* implicit */unsigned char) var_4);
            var_27 = ((/* implicit */_Bool) 3892814069112792390ULL);
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_10 [i_7] [i_3] [i_7]))))) ? (((((/* implicit */int) (unsigned char)76)) + (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (17566581287102762034ULL))))));
            arr_22 [i_7] = ((/* implicit */short) (-(((/* implicit */int) var_2))));
        }
        var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [12]))));
    }
}
