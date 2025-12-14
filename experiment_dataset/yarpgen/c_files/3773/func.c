/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3773
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
    var_17 = (+(max((((var_3) + (9198392840212011678LL))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) < (var_13)))))));
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((1032939799) % (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_16) > (((/* implicit */long long int) 385790978)))))) : (min((var_10), (-6655787407762512710LL))))) >= (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)51755))))) ? (max((((/* implicit */long long int) 1244683322)), (var_10))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)5)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) var_13);
        var_20 ^= (((+(((((/* implicit */_Bool) -3181630263094512841LL)) ? (((/* implicit */long long int) var_5)) : (arr_0 [i_0]))))) + (var_16));
        var_21 = ((/* implicit */unsigned short) (!(max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15899))) > (-3112118959469237634LL))), (((var_13) < (((/* implicit */long long int) -1845435425))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_22 -= ((/* implicit */long long int) 65535);
        var_23 = ((/* implicit */unsigned short) arr_7 [i_1]);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (int i_3 = 3; i_3 < 16; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_15 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) var_4);
                        arr_16 [i_1] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(221571606)))) ^ (min((((/* implicit */long long int) arr_7 [i_1])), (var_13)))))) ? ((((~(var_16))) >> (((arr_8 [11LL]) - (2033378885828323050LL))))) : (((/* implicit */long long int) var_15)));
                        arr_17 [i_2] [i_1] [i_1] = min((((((/* implicit */long long int) ((/* implicit */int) var_14))) / (arr_14 [i_3 + 2] [(unsigned short)2] [i_3 + 2] [i_3 + 2] [i_4]))), (((/* implicit */long long int) max((var_4), (((/* implicit */int) var_6))))));
                    }
                    for (long long int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        arr_20 [i_1] [i_3 + 3] [i_1] [i_1] = (+(1577258881));
                        var_24 = ((/* implicit */int) arr_19 [i_5 + 3]);
                    }
                    arr_21 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (-(var_10))))) >> (((min((min((var_4), (1811469506))), (((/* implicit */int) (!(((/* implicit */_Bool) -948046894))))))) + (1992170085)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    var_25 = ((/* implicit */int) max((((/* implicit */long long int) arr_12 [i_1] [15LL] [i_7] [i_7])), (var_16)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_26 = var_0;
                                var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(arr_23 [i_7] [i_1]))), (((/* implicit */long long int) max((var_7), (1605046356))))))) ? (min((arr_25 [i_1] [i_6] [i_7] [i_8]), (((((/* implicit */_Bool) (unsigned short)62053)) ? (arr_23 [i_9] [i_8]) : (((/* implicit */long long int) arr_5 [i_1])))))) : (arr_25 [i_9] [i_6] [i_7] [i_8])));
                                var_28 = ((((/* implicit */_Bool) max((arr_18 [i_1]), (((/* implicit */long long int) 2097151))))) ? ((+(arr_8 [i_1]))) : (max((((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) arr_9 [i_1] [i_1])))), (((/* implicit */long long int) ((int) var_14))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        for (long long int i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            {
                arr_37 [i_10] = ((/* implicit */int) ((long long int) (unsigned short)14987));
                var_29 = ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_10] [i_11] [13LL]))))), (((long long int) arr_24 [i_11] [i_10] [i_10]))));
                var_30 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_10] [i_10])) ? (-2454850954278763522LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27644))))), (((((/* implicit */_Bool) arr_25 [i_10] [i_10] [i_10] [i_10])) ? (arr_27 [i_11]) : (var_1)))))) ? (2068742747) : (((/* implicit */int) (unsigned short)44303)));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) min((((long long int) ((((/* implicit */_Bool) var_10)) ? (var_11) : (var_10)))), (((/* implicit */long long int) min((31), (-1577954567))))));
}
