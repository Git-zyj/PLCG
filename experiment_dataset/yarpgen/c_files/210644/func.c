/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210644
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
    var_17 = ((/* implicit */signed char) var_9);
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_18 -= ((/* implicit */int) ((((long long int) -3912205080953375794LL)) != (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) - (((/* implicit */int) var_0)))))));
        var_19 ^= (+(((((4440626737098261429LL) < (-4440626737098261429LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)31)) + (((/* implicit */int) var_4))))) : (4503612313575817693ULL))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_20 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (~(arr_3 [i_1])))) ? (max((4440626737098261443LL), (((/* implicit */long long int) arr_6 [i_1 + 3] [i_0 - 2] [14ULL] [1U] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1]))))));
                        var_21 -= ((/* implicit */short) (unsigned char)214);
                        var_22 ^= ((/* implicit */unsigned long long int) (-(-4440626737098261429LL)));
                        arr_8 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */int) ((min((min((2815088226768258975ULL), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_1] [i_1 + 3] [i_1 - 2] [i_0 - 3] [i_0 - 3])))) >= (((((/* implicit */_Bool) -4440626737098261430LL)) ? (2ULL) : (((/* implicit */unsigned long long int) -4440626737098261430LL))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) max((var_23), (-3315108908989560188LL)));
    }
    for (short i_4 = 3; i_4 < 22; i_4 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_0 [i_4])), (3315108908989560188LL)));
        var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((6524772984627211110ULL), (((/* implicit */unsigned long long int) -4440626737098261445LL))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [22LL]))) / (6924908303084727829LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_10 [(unsigned char)22]), (arr_10 [4LL])))))));
    }
    for (short i_5 = 3; i_5 < 22; i_5 += 1) /* same iter space */
    {
        arr_14 [i_5] = ((/* implicit */long long int) (-(((max((((/* implicit */unsigned long long int) arr_6 [i_5] [4] [i_5] [i_5] [i_5] [i_5 - 3])), (arr_3 [i_5]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_5 - 2] [i_5 + 1] [i_5] [i_5] [i_5] [11ULL])) ? (4440626737098261403LL) : (var_3))))))));
        var_26 += ((/* implicit */short) max((((914558015210188313ULL) / (((/* implicit */unsigned long long int) 4440626737098261426LL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [13LL])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (+(1861789854)))) : (((var_6) ? (((/* implicit */unsigned long long int) arr_9 [i_5] [i_5 + 1])) : (18446744073709551615ULL)))))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    var_27 = ((/* implicit */signed char) arr_9 [i_6] [i_6]);
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4440626737098261413LL)))) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_11 [i_6]))))) << (((-4440626737098261413LL) + (4440626737098261439LL))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7]))) : (-4440626737098261410LL)))))));
                }
            } 
        } 
    }
}
