/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204663
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
    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [(short)0] [i_2] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_1] [i_2] [(unsigned char)4]);
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_10))));
                    }
                } 
            } 
        } 
        var_20 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_6 [i_0] [(signed char)10])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((var_17) > (arr_4 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (var_8)))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_2))))))) : (var_11));
    }
    for (signed char i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
    {
        arr_12 [i_4] = ((/* implicit */unsigned short) max((max((var_11), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_17))))))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-102)))))));
        var_21 = ((/* implicit */unsigned long long int) var_0);
        arr_13 [(_Bool)1] &= ((/* implicit */_Bool) arr_6 [i_4] [(signed char)6]);
        arr_14 [(short)6] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-127)) ? (-2080039305) : (((/* implicit */int) (unsigned short)4051))));
    }
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_5)))))))) ? (((/* implicit */long long int) var_13)) : (((((/* implicit */_Bool) (((_Bool)1) ? (2147483647) : (((/* implicit */int) (unsigned char)127))))) ? (var_3) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_17)) : (var_11)))))));
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_5])) ? (-1706043753) : (((/* implicit */int) arr_16 [i_5]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((((/* implicit */_Bool) ((((var_6) + (2147483647))) >> (((1706043752) - (1706043724)))))) ? (arr_4 [i_5] [i_5] [(_Bool)1]) : (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [14] [i_5] [7]))))));
        arr_18 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)128)) | (-2055589798)));
    }
    for (long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [12] [12]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (arr_16 [i_6]))))) : (min((((/* implicit */unsigned long long int) (unsigned char)169)), (1488782739601093471ULL))))))));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            var_26 = ((/* implicit */long long int) var_14);
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? ((-(((((/* implicit */_Bool) arr_24 [i_6] [(short)14])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [i_6] [(short)2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) arr_16 [i_6]))))) ? (((var_17) / (((/* implicit */int) var_16)))) : (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_3 [i_6] [i_7]))))))))))));
        }
    }
}
