/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2071
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0])), ((~(((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) (signed char)31))))))))));
        arr_2 [i_0] = ((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) / (((/* implicit */int) arr_0 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)7), (arr_0 [i_1])))) + (((/* implicit */int) ((_Bool) arr_4 [i_1])))))) ? ((+((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((unsigned char) ((_Bool) (unsigned char)51))))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_0 [i_1]))))))));
        var_15 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)109)) / (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)66))))))), ((+((+(8616630034752691373LL)))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((_Bool) ((unsigned char) min(((signed char)40), (var_11))))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_8 [i_1] [i_2] [(unsigned char)8] = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_2]);
            arr_9 [7LL] [i_2] = ((/* implicit */signed char) (((~(arr_6 [i_2]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_1 [i_1])))))));
        }
        for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            arr_13 [i_1] [i_3] = ((/* implicit */unsigned char) (signed char)-97);
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((signed char) ((signed char) arr_1 [i_3]))))));
            arr_14 [i_3] = ((signed char) min((arr_12 [i_1] [i_3]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_4 [i_3])))))));
            arr_15 [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)96)) : (var_4))))) >> ((((-(arr_12 [i_1] [i_3]))) + (2079654555860658937LL)))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 3; i_5 < 20; i_5 += 3) 
            {
                arr_23 [i_1] [i_1] [i_5] = ((/* implicit */signed char) ((arr_5 [i_5]) <= (((/* implicit */long long int) arr_19 [i_1] [i_1] [i_4] [i_5]))));
                arr_24 [i_1] [i_5] [i_5 - 1] = ((/* implicit */int) ((unsigned char) (signed char)63));
                var_18 = ((/* implicit */unsigned char) ((signed char) (_Bool)0));
            }
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                arr_28 [i_1] [i_1] [i_6] = ((/* implicit */signed char) ((arr_27 [i_1] [i_1] [i_4] [i_6]) ? (((/* implicit */long long int) (-(arr_19 [i_1] [i_4] [(signed char)9] [i_6])))) : (((var_6) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))));
                arr_29 [i_1] [i_4] [i_6] = ((/* implicit */signed char) var_5);
            }
            var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-83))));
            /* LoopNest 2 */
            for (signed char i_7 = 3; i_7 < 19; i_7 += 2) 
            {
                for (long long int i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_3)))) % (((((/* implicit */int) arr_7 [i_8] [i_8] [i_7])) + (((/* implicit */int) arr_10 [i_1] [i_4] [i_7]))))));
                        var_21 = ((/* implicit */long long int) (signed char)-97);
                        var_22 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_21 [i_8] [i_4] [i_7 + 2] [i_8 - 1]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) arr_17 [i_1] [i_4])) : (((/* implicit */int) arr_17 [i_4] [i_1]))));
        }
    }
    var_24 = ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)-6)))) - ((-(((/* implicit */int) ((_Bool) var_6)))))));
}
