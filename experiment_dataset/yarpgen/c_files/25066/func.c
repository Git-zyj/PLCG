/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25066
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_11 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (1164287554745022649ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)224)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) min(((-(arr_7 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 + 1]))), (((((/* implicit */_Bool) arr_7 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 + 1])) ? (arr_7 [i_3 - 2] [10] [i_3 - 1] [i_3 - 2] [i_3 + 1]) : (((/* implicit */int) (unsigned short)65535))))));
                        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (+(max((((/* implicit */unsigned int) ((unsigned short) -2218183357328362688LL))), (var_7))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
                            arr_14 [2ULL] [i_1] [i_0] [i_3] = ((/* implicit */long long int) (short)224);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((unsigned int) ((long long int) (signed char)127))))));
        arr_17 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_5])), (var_10)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_0)) ? (2016074328) : (((/* implicit */int) arr_12 [i_5]))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_14 -= ((/* implicit */long long int) min((-507791396), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_5] [i_6] [i_5])) || (((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))))))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) -3393508655022008755LL))))))));
                    var_16 = ((/* implicit */unsigned short) 3393508655022008754LL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_8 = 1; i_8 < 16; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) (short)224)) ? (-3393508655022008755LL) : (-3393508655022008768LL))), (((/* implicit */long long int) arr_19 [i_5] [i_8 - 1] [i_8 - 1])))), (((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)3845))) : (max((2218183357328362688LL), (((/* implicit */long long int) (unsigned char)30))))))));
                    arr_28 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) 536346624)) ? (-536346624) : (((/* implicit */int) (unsigned short)7013))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (short i_11 = 1; i_11 < 9; i_11 += 2) 
        {
            {
                arr_33 [i_10] = ((/* implicit */_Bool) 549755813824ULL);
                var_18 = ((/* implicit */int) ((((/* implicit */int) arr_26 [i_10] [i_10])) == (((/* implicit */int) ((_Bool) arr_22 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_10])))));
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) var_2);
                            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((~(-2344974258072415385LL))) : (((/* implicit */long long int) max((-1840932736), (-10))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) arr_6 [i_10] [i_10] [17]);
            }
        } 
    } 
}
