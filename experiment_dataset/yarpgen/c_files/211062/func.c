/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211062
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
    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-69))));
    var_17 -= (!(((/* implicit */_Bool) min((((unsigned int) (_Bool)1)), (min((((/* implicit */unsigned int) (_Bool)0)), (var_7)))))));
    var_18 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)0))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_20 = min(((~(((/* implicit */int) arr_3 [i_1])))), (((((/* implicit */int) arr_3 [i_1])) % (1249197196))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((2147483647) + (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (signed char)13))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)33987)) : (((/* implicit */int) var_14)))))) : ((-(((((/* implicit */_Bool) 3511708975U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))));
                    var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_3])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)14))))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) (_Bool)0));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_10 [i_1] [i_3]))));
                }
            } 
        } 
        var_23 += ((/* implicit */short) (!(((_Bool) (-(arr_6 [i_1] [i_1 + 1] [i_1]))))));
        var_24 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((_Bool) arr_10 [i_1 + 1] [i_1 + 1]))), ((-(arr_10 [i_1 + 1] [i_1 - 1])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        for (unsigned int i_5 = 3; i_5 < 23; i_5 += 3) 
        {
            {
                var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    arr_20 [i_4] = ((/* implicit */int) ((min(((!(((/* implicit */_Bool) var_4)))), ((!(arr_18 [i_4] [i_4 - 1] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_5]))) : (arr_13 [i_4])));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6] [i_4]))));
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    arr_23 [i_4 - 1] [i_4] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) 1617844318U))));
                    arr_24 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) ((unsigned int) var_11));
                    arr_25 [i_4] [i_4] [i_7] [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)73))));
                }
                arr_26 [i_5] [i_4] [i_4] = ((/* implicit */int) 2497730925U);
                arr_27 [i_4] [i_4] = ((/* implicit */unsigned short) (-(2677122977U)));
            }
        } 
    } 
}
