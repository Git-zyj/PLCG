/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37158
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((3967233129U) == (1274515359U))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7294))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
            var_12 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_1 [i_1 - 1])))))), ((~(3020451945U)))));
            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (short)-4568))));
        }
    }
    for (unsigned short i_2 = 2; i_2 < 20; i_2 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) max((var_4), (var_4)))) : (-9)));
        arr_8 [i_2] = ((/* implicit */int) max((((/* implicit */long long int) (unsigned char)120)), (274877906943LL)));
        var_15 |= ((/* implicit */int) (-(3ULL)));
    }
    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) ((long long int) (~(3ULL))));
        arr_13 [i_3 + 1] [i_3] = ((/* implicit */_Bool) (signed char)-81);
    }
    for (unsigned short i_4 = 2; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1023U)) ? (((/* implicit */unsigned long long int) 1023U)) : (0ULL)))))))));
        arr_17 [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 10831956649100795249ULL))))), (max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -8766794326874074026LL))))), ((unsigned char)191)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_5 = 1; i_5 < 23; i_5 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_18 [i_5] [i_5]))));
        var_19 = ((/* implicit */short) ((long long int) 1023U));
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned short) -274877906943LL);
                    arr_25 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0)))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */_Bool) max((((/* implicit */int) var_4)), (max((((((var_0) + (2147483647))) >> (((var_1) + (158668438))))), (((/* implicit */int) max(((short)-24351), (((/* implicit */short) (_Bool)0)))))))));
    var_22 = 3836176185U;
}
