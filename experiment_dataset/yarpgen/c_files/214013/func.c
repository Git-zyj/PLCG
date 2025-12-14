/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214013
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
    var_13 = ((short) (+((+(((/* implicit */int) (unsigned short)65534))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_1))));
        var_15 = ((/* implicit */unsigned char) var_11);
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_16 &= ((((/* implicit */int) ((unsigned char) (unsigned char)84))) % ((-(((/* implicit */int) (signed char)(-127 - 1))))));
                        var_17 = ((/* implicit */long long int) min(((unsigned char)171), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)18))))))))));
                        arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_0 [i_0])))) > (min(((~(((/* implicit */int) var_1)))), (((var_11) ? (arr_1 [i_3] [i_1]) : (((/* implicit */int) (unsigned char)18))))))));
                        var_18 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((7U), (((/* implicit */unsigned int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            var_19 = ((/* implicit */signed char) ((((var_2) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_4)) : (var_9))) ^ (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-14)) + (2147483647))) >> (((((/* implicit */int) (short)3176)) - (3175)))))))) - (2423338537LL)))));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((var_4) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)84))))))))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(4294967289U))) % (((/* implicit */unsigned int) ((/* implicit */int) (short)7936)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) >= (((((/* implicit */_Bool) (unsigned char)218)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))))))))) : ((((_Bool)1) ? (((/* implicit */long long int) (+(((/* implicit */int) var_11))))) : (((9223372036854775807LL) - (arr_9 [i_4] [i_0] [i_4])))))));
            var_22 = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (short)0)));
        }
        var_23 *= ((/* implicit */unsigned char) min((((/* implicit */int) arr_3 [(signed char)8] [i_0] [i_0])), (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (int i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_14 [i_5 + 1] [0LL])) : (((/* implicit */int) arr_14 [(signed char)12] [(signed char)12])))) : ((~(((/* implicit */int) arr_14 [i_5] [(unsigned short)10]))))));
        arr_18 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (arr_15 [i_5])))) == (3132907977U)));
        /* LoopSeq 2 */
        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) 
        {
            arr_21 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)55692))));
            var_25 &= (+(((/* implicit */int) ((arr_20 [i_5 + 1] [i_5 - 1]) == (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
        }
        for (int i_7 = 4; i_7 < 15; i_7 += 4) 
        {
            arr_25 [i_5] [i_5] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16482))) : (7755983088358461039LL)))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) (short)16481)) > (((/* implicit */int) (short)-9624))))) : (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_5])) && (((/* implicit */_Bool) (unsigned char)65))))), (min((((/* implicit */unsigned char) arr_22 [i_5] [i_5] [i_5])), ((unsigned char)177))))))));
            var_27 += ((/* implicit */unsigned int) var_8);
        }
        var_28 ^= ((/* implicit */signed char) arr_20 [i_5 + 1] [i_5 + 1]);
    }
    var_29 = ((/* implicit */int) ((unsigned char) min(((unsigned short)48987), (((/* implicit */unsigned short) min((((/* implicit */short) var_11)), (var_10)))))));
    var_30 = ((unsigned char) 0);
    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
}
