/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248402
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) arr_1 [(signed char)5]);
                    var_13 -= ((/* implicit */_Bool) min((((/* implicit */int) arr_1 [(unsigned short)13])), ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) > (2515668971312111109ULL))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_15 = ((/* implicit */int) arr_2 [i_3]);
        var_16 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_10 [i_3])))) == (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_3] [i_3])), (var_11)))) ? (arr_0 [i_3] [i_3]) : (((arr_9 [i_3] [i_3]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))));
        var_17 = ((/* implicit */unsigned char) min(((-(((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) : (arr_5 [(unsigned short)15] [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)62)) ? (min((((/* implicit */int) var_9)), (var_1))) : (arr_0 [(_Bool)1] [i_3]))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((var_4) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (arr_7 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */int) var_9))))))) / (((unsigned long long int) arr_3 [i_3])))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_4] [(signed char)22]), (arr_4 [i_4] [i_4])))) ? (((/* implicit */int) max((arr_4 [i_4] [i_4]), (arr_4 [i_4] [i_4])))) : (((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (((/* implicit */int) arr_4 [i_4] [i_4])) : (((/* implicit */int) arr_4 [i_4] [i_4])))))))));
        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_6)) * (((/* implicit */int) var_2)))), (((((arr_0 [i_4] [i_4]) >= (((/* implicit */int) arr_11 [i_4])))) ? ((~(((/* implicit */int) arr_4 [i_4] [i_4])))) : (((/* implicit */int) min((arr_2 [i_4]), (((/* implicit */unsigned char) arr_1 [i_4])))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) var_10);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_14 [i_5]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            {
                                var_23 += ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                                arr_26 [i_7] = ((/* implicit */_Bool) var_6);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_11 [i_5]))));
                    var_25 = ((/* implicit */signed char) ((_Bool) (_Bool)1));
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min((((/* implicit */int) arr_22 [(unsigned char)0] [(_Bool)1] [(unsigned char)0])), (arr_3 [i_5]))))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_22 [i_5] [(_Bool)1] [i_5])) ? (((/* implicit */int) arr_13 [i_5] [i_5])) : (((/* implicit */int) var_10)))), (arr_17 [i_5])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_5] [i_5] [i_5]))))) : (var_11)));
        arr_27 [i_5] [i_5] = ((/* implicit */unsigned char) (+(arr_15 [i_5])));
    }
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (1281723130) : (((/* implicit */int) (unsigned char)60))));
    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_0))))) : (((/* implicit */int) (unsigned char)29))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))), (max((var_4), (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((max((-1622523243), (var_3))) - (((/* implicit */int) var_2)))))));
}
