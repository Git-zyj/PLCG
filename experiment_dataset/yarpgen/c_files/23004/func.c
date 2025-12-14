/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23004
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
    /* LoopSeq 4 */
    for (short i_0 = 4; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_9))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 - 3])), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0 - 4] [i_0 - 4]) == (arr_1 [i_0 - 1] [i_0 + 1])))))));
        arr_2 [i_0] &= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 - 2])) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 3])))))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (short i_1 = 4; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [6U])) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) var_10))))) < (var_1))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_15 = min((((/* implicit */int) min(((unsigned short)54092), (((/* implicit */unsigned short) (short)-1))))), (((int) arr_6 [i_1 - 1] [i_1 - 4])));
            var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */int) arr_5 [i_1 - 4] [i_1 - 3])))))));
            var_17 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)-1)))) / (((/* implicit */int) ((short) arr_7 [i_1 - 1] [i_1 - 4])))));
        }
        var_18 = ((/* implicit */_Bool) var_10);
        var_19 -= ((short) arr_7 [(unsigned short)7] [(unsigned short)7]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_20 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-3272))) - (4146183133U)));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((/* implicit */unsigned int) -454866823)), (arr_15 [i_1] [i_5]))))));
                        var_22 = ((/* implicit */unsigned short) arr_11 [i_1 - 2] [i_3] [(_Bool)1] [i_5]);
                        var_23 -= ((/* implicit */unsigned char) var_6);
                        arr_16 [i_1 - 4] [i_4] [i_1] [i_1 - 4] [i_1 - 4] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) min((arr_8 [i_1 - 1]), (arr_8 [i_5])))) - (((/* implicit */int) var_5)))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_3 [i_6 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) | (((((/* implicit */int) ((var_8) < (var_8)))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [22]))))))));
        var_25 |= ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) var_6))))), ((short)-18691)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-22335), ((short)3266))))));
        arr_20 [i_6] = ((/* implicit */short) var_11);
    }
    /* vectorizable */
    for (short i_7 = 2; i_7 < 15; i_7 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_11))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_7])) ? (arr_9 [i_7 + 1]) : (arr_9 [i_7 - 2])));
    }
    var_28 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) var_3)), (var_2))) < (min((((/* implicit */unsigned long long int) 148784162U)), (var_2))))))));
}
