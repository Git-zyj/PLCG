/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211375
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
    var_10 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_11 |= ((/* implicit */signed char) min(((((-(((/* implicit */int) arr_5 [i_0] [i_0])))) ^ (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */_Bool) ((1845282678491915379LL) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [15])))))) || (((((/* implicit */_Bool) 1845282678491915371LL)) && (((/* implicit */_Bool) arr_0 [i_0])))))))));
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [4LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (arr_2 [i_1] [i_0])))) ? (min((arr_2 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))) ? (((arr_2 [(unsigned short)7] [i_1]) << (((arr_3 [i_0] [i_1]) + (3783570691977104176LL))))) : (((/* implicit */unsigned long long int) 1845282678491915379LL))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_12 ^= ((/* implicit */_Bool) (+(min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) var_2)) ? (1845282678491915379LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_5 [i_0] [23U])))));
                        var_13 += ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (long long int i_5 = 3; i_5 < 23; i_5 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_4 [i_1] [i_4] [i_5 - 1])), (arr_7 [i_4])));
                        var_15 &= ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((((arr_3 [i_0] [4]) + (3783570691977104148LL))) - (4LL))))))))));
                        arr_21 [i_0] [i_0] [i_1] [(short)19] [i_5] = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [23U] [i_1] [i_4]))))), (arr_20 [i_0]))))));
                        var_17 |= ((/* implicit */long long int) (short)26482);
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) (signed char)-59))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (arr_20 [i_0]))))))))))));
        }
        arr_22 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)59))))), (max((((/* implicit */unsigned short) arr_17 [i_0] [20LL] [(unsigned char)20])), (var_5))))))) / (arr_14 [i_0] [i_0] [i_0])));
    }
    /* LoopSeq 2 */
    for (unsigned short i_6 = 3; i_6 < 10; i_6 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_6 - 2])) ? (((/* implicit */int) arr_0 [i_6 + 1])) : (((/* implicit */int) arr_0 [i_6 - 3])))), (((((/* implicit */_Bool) arr_0 [i_6 + 1])) ? (((/* implicit */int) arr_0 [i_6 - 2])) : (((/* implicit */int) var_4)))))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_9)))))) + (arr_2 [i_6] [i_6 + 1])));
        arr_26 [i_6] = ((/* implicit */unsigned short) -1845282678491915380LL);
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_9 [(unsigned short)23] [i_6] [i_6 + 1] [i_6]))));
    }
    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 1) 
    {
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (((!(((/* implicit */_Bool) (-(arr_28 [i_7])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */unsigned int) 1657826127)) : (arr_19 [i_7] [i_7 - 1] [i_7] [(unsigned short)13] [i_7])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_17 [i_7] [(unsigned short)9] [i_7])), (arr_14 [i_7] [i_7] [i_7 + 1])))) : (((arr_11 [i_7] [i_7] [i_7] [i_7]) ? (((/* implicit */unsigned long long int) arr_3 [(unsigned short)9] [i_7 - 1])) : (arr_24 [10] [i_7]))))) : (((/* implicit */unsigned long long int) -1845282678491915397LL)))))));
        var_23 = ((/* implicit */int) min((max((((arr_16 [18LL] [i_7] [i_7 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (min((arr_24 [(unsigned short)9] [i_7]), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */unsigned int) arr_9 [(signed char)12] [i_7] [i_7 - 1] [i_7])) : (arr_12 [i_7] [(unsigned short)4] [18LL] [i_7]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))))))));
    }
}
