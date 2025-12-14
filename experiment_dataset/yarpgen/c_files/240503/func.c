/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240503
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
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0 + 3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((-(arr_2 [i_0]))) : (((/* implicit */long long int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))), (((((arr_1 [11LL] [i_0]) + (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) / (((/* implicit */unsigned long long int) (-(arr_2 [i_0]))))))));
        var_13 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((1373075591595737098ULL), (((/* implicit */unsigned long long int) -439592511))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) : (arr_2 [i_0 - 3])))));
    }
    for (signed char i_1 = 4; i_1 < 10; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) ^ (((/* implicit */long long int) ((unsigned int) arr_12 [i_4] [i_1])))))) ? (((((/* implicit */_Bool) (-(arr_7 [i_1])))) ? (((/* implicit */unsigned long long int) arr_12 [i_4] [i_3])) : (((((/* implicit */unsigned long long int) arr_15 [i_1])) - (arr_1 [i_2] [i_2]))))) : (min((((/* implicit */unsigned long long int) (signed char)85)), ((~(4135799085712189342ULL)))))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned long long int) arr_2 [i_3])) : (arr_6 [i_4] [i_1 - 3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_17 [i_1 - 1] [i_2] [i_3] [i_4])))))))) : (max((min((arr_13 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1]), (((/* implicit */unsigned long long int) arr_17 [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */unsigned long long int) (~(arr_12 [i_1] [i_1]))))))));
                        var_16 = ((/* implicit */long long int) ((unsigned long long int) 3724679861U));
                    }
                } 
            } 
        } 
        arr_18 [i_1] = ((/* implicit */int) (-(arr_1 [i_1 + 1] [i_1])));
    }
    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 2) 
    {
        arr_23 [i_5] [i_5] = (i_5 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_21 [i_5] [i_5]), (arr_19 [14ULL])))) ? (((((/* implicit */_Bool) 0LL)) ? (-1211478922237161074LL) : (((/* implicit */long long int) 16777215)))) : (((/* implicit */long long int) arr_21 [i_5] [i_5 + 2])))) >> (((min((arr_21 [i_5] [i_5 + 4]), (arr_19 [i_5]))) + (1302124708)))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_21 [i_5] [i_5]), (arr_19 [14ULL])))) ? (((((/* implicit */_Bool) 0LL)) ? (-1211478922237161074LL) : (((/* implicit */long long int) 16777215)))) : (((/* implicit */long long int) arr_21 [i_5] [i_5 + 2])))) >> (((((min((arr_21 [i_5] [i_5 + 4]), (arr_19 [i_5]))) - (1302124708))) - (458972327))))));
        /* LoopNest 2 */
        for (long long int i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            for (unsigned int i_7 = 3; i_7 < 19; i_7 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((4920445485665186389ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 8257536U))) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) min(((signed char)125), ((signed char)30)))))))));
                        arr_31 [i_5 + 4] [i_5] [i_5] [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_28 [i_5] [i_5])))), ((!(((/* implicit */_Bool) arr_29 [i_8 + 2] [i_5] [i_5] [i_5] [i_5]))))))), (((((/* implicit */unsigned int) arr_21 [i_5] [i_8 - 1])) & (((((/* implicit */_Bool) 0U)) ? (27425655U) : (3020182823U)))))));
                    }
                    var_18 = ((/* implicit */long long int) arr_28 [i_5 + 2] [i_5]);
                    var_19 = ((/* implicit */int) arr_28 [(signed char)13] [i_5]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            for (long long int i_10 = 1; i_10 < 22; i_10 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((long long int) arr_27 [i_9] [i_9]))))) : (arr_24 [i_5])));
                    var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((signed char) -1890194679752730039LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_22 [i_5])))))) : (((/* implicit */int) ((signed char) 0ULL)))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) ((unsigned int) var_11));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((+(((unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) max((2757195974U), (var_7))))));
}
