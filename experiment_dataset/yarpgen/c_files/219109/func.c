/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219109
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
    var_10 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) ((max((((unsigned int) var_9)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 498390622)) && (((/* implicit */_Bool) 137438953471ULL))))))) << (min((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_4))))), ((~(-498390622)))))));
        var_12 |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
        arr_3 [1U] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))));
        var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((unsigned char) arr_2 [i_1] [i_1]));
        var_15 = ((/* implicit */int) ((short) var_4));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */signed char) (-(((((/* implicit */int) (unsigned char)99)) >> (((-7027082055366870265LL) + (7027082055366870272LL)))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        var_16 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)128)) < (((/* implicit */int) (signed char)-105))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_6 = 2; i_6 < 18; i_6 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (137438953471ULL))))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_1))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)-2)))))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 2; i_7 < 18; i_7 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5848)) ? (((/* implicit */int) var_5)) : (var_6)));
                            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_7 + 2] [i_3]))));
                            var_21 &= ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                            arr_26 [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */int) (signed char)0)));
                        }
                        var_22 = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) (short)9)))));
                    }
                } 
            } 
        } 
        arr_27 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((var_9), (var_4)))))) : (min((var_2), (((/* implicit */unsigned long long int) var_1))))));
        var_23 = ((/* implicit */long long int) var_2);
    }
    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))), (var_1))))));
}
