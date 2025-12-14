/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227139
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-101))))) : (min((var_6), (((/* implicit */unsigned long long int) var_9)))))) != (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_7)))))))))));
    var_11 *= ((/* implicit */unsigned long long int) (signed char)-101);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) max((var_12), ((!(((/* implicit */_Bool) min((arr_2 [i_0 - 1] [i_0 + 1]), (((/* implicit */int) var_4)))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_13 += max((max((arr_1 [i_1]), (((/* implicit */unsigned long long int) (signed char)-97)))), ((~(((arr_1 [i_0 + 1]) >> (((((/* implicit */int) (signed char)-127)) + (160))))))));
                        var_14 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) max(((signed char)32), ((signed char)-33)))) : (((1832541445) >> (((arr_2 [i_0] [(unsigned short)12]) - (705700986)))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0 - 1] [(unsigned short)5] [i_0]);
    }
    for (short i_4 = 1; i_4 < 14; i_4 += 1) /* same iter space */
    {
        var_16 += ((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (max((((/* implicit */int) (!(((/* implicit */_Bool) 1LL))))), (arr_10 [10])))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) (-(arr_12 [i_4] [i_4 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) (_Bool)1)) : (var_8))))))))))));
        arr_14 [i_4] = ((/* implicit */int) max((arr_12 [i_4 + 1] [i_4]), (((/* implicit */long long int) (signed char)-32))));
        var_18 = ((/* implicit */long long int) ((signed char) ((int) ((int) var_5))));
        var_19 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-118)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (signed char)93)))) : (((/* implicit */int) (!((_Bool)1))))))) : ((-(min((2317419085964951488LL), (((/* implicit */long long int) arr_3 [i_4]))))))));
    }
}
