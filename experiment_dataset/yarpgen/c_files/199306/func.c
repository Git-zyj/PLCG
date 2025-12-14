/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199306
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_5))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) max((((/* implicit */int) min((arr_6 [i_1]), (((/* implicit */signed char) arr_8 [i_0]))))), (((((/* implicit */int) arr_6 [i_1])) - (((/* implicit */int) arr_8 [i_0]))))));
                    var_14 += min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) arr_13 [i_3 - 2] [i_3 + 1])), (arr_12 [i_3] [i_3 + 3]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 + 2])))))));
        var_16 = ((/* implicit */unsigned short) arr_11 [i_3]);
    }
    for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) ((int) max((((/* implicit */unsigned long long int) arr_15 [i_4] [i_4 - 3])), (((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_4 - 2]))) : (var_5))))));
        var_17 += ((/* implicit */unsigned char) var_7);
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) (short)-1056);
        arr_19 [i_4] = ((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1)));
    }
    for (short i_5 = 1; i_5 < 24; i_5 += 3) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((_Bool)0), ((_Bool)1)))), (max((1172211791U), (var_10)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_5)))) ? (arr_20 [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31744)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_21 [i_5 - 1])) : (((/* implicit */int) max((arr_21 [i_5 + 1]), (arr_21 [i_5]))))))))))));
        var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_7)), (arr_20 [i_5])));
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((max((3897276416U), (((/* implicit */unsigned int) (_Bool)1)))) >> (((((arr_20 [i_5 + 1]) + (arr_20 [i_5 + 1]))) - (1761079776U)))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (1802819375104559697LL)))) && (((/* implicit */_Bool) arr_20 [i_5 - 1]))));
            var_22 = ((/* implicit */short) ((min((arr_23 [i_5] [i_5]), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (arr_20 [i_6])))), (arr_21 [i_5 + 1])))))));
        }
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            arr_26 [i_5 + 1] [i_7] = ((/* implicit */unsigned long long int) arr_25 [i_5] [i_5]);
            arr_27 [i_5 - 1] [i_7] = ((/* implicit */_Bool) max((((unsigned int) 3144363601U)), (arr_20 [i_7])));
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        {
                            arr_35 [i_9] = ((/* implicit */long long int) min((((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)101)))), (max((((/* implicit */unsigned short) arr_28 [i_5 + 1] [i_5 + 1] [i_5 + 1])), (var_8)))));
                            arr_36 [i_10] [i_9] [i_8] [i_7] [i_9] [i_5] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_20 [i_5 - 1])) ? (arr_20 [i_5 + 1]) : (arr_20 [i_5 - 1]))), (min((((/* implicit */unsigned int) var_9)), (arr_20 [i_5 - 1])))));
                            var_23 = max((-2LL), (((/* implicit */long long int) (signed char)84)));
                            var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (signed char)34))) ? (max((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) arr_21 [i_10])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_23 [i_9] [i_10]) & (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_5] [i_7] [i_8] [i_8] [i_10])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                        }
                    } 
                } 
            } 
            arr_37 [i_5] [i_5] [i_5] = ((/* implicit */short) ((min((arr_24 [i_5] [i_5 + 1]), (var_1))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
            var_25 = ((/* implicit */signed char) var_12);
        }
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_28 [i_5 - 1] [i_5 - 1] [i_5 - 1])))))))));
    }
    var_27 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)27136)))));
    var_28 = ((/* implicit */short) max((var_10), (((/* implicit */unsigned int) var_8))));
}
