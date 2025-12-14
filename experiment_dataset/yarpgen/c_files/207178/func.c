/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207178
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (unsigned char)89))));
                        arr_12 [i_2] [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) min((arr_8 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3]), (((/* implicit */short) var_2))));
                        arr_13 [i_0] [i_0] [i_1] [i_2 + 2] [i_2] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_15))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)69)))))))));
                        arr_14 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (((((/* implicit */int) arr_1 [i_0])) / (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_1] [i_2 - 1] [i_3])) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) var_4))))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = arr_6 [i_0] [i_0] [i_0];
    }
    var_18 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 2 */
    for (int i_4 = 1; i_4 < 12; i_4 += 4) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned short) (-(arr_3 [i_4 - 1] [i_4] [i_4 - 1])));
        var_20 = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            var_21 &= ((/* implicit */short) ((var_15) < (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5]))));
            var_22 = ((((/* implicit */_Bool) 4541443445109897060ULL)) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) var_4)))));
            arr_22 [i_4 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)183))));
            var_23 = ((/* implicit */short) (unsigned char)174);
            var_24 = ((/* implicit */signed char) var_5);
        }
        var_25 = ((/* implicit */int) (~(max((((((/* implicit */_Bool) -611449766759295880LL)) ? (arr_7 [i_4] [i_4] [8LL]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) ((signed char) (unsigned char)154)))))));
    }
    for (int i_6 = 1; i_6 < 12; i_6 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((short) var_16)))));
        arr_26 [i_6] [i_6 + 1] = ((/* implicit */short) var_7);
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))));
}
