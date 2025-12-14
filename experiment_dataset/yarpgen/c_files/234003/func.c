/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234003
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
    var_11 = ((/* implicit */long long int) var_0);
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((_Bool) var_4))) : ((-(((/* implicit */int) var_1)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_13 ^= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 7682478142067218902LL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))));
                    arr_10 [i_0] [i_1] [i_2 + 1] = ((/* implicit */short) (!(var_1)));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_14 = ((/* implicit */signed char) arr_13 [i_0]);
            var_15 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_3] [i_3]))));
            var_16 ^= ((((/* implicit */_Bool) arr_1 [i_0] [i_3])) && (((/* implicit */_Bool) var_7)));
        }
        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_17 = ((((/* implicit */int) arr_14 [i_0] [i_4])) < (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_0] [i_4])) <= (((/* implicit */int) arr_7 [i_0] [(short)10] [i_0] [i_0]))));
        }
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            var_18 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_0] [i_0]))));
            var_19 ^= ((/* implicit */_Bool) ((((15829868164686659937ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1143751029)) && (((/* implicit */_Bool) (signed char)7))))))));
            var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_9))))));
        }
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_12 [i_0])))) && (((/* implicit */_Bool) var_3))));
            arr_25 [8LL] [i_0] = ((/* implicit */short) ((((arr_22 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1)))))));
            arr_26 [i_0] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_0])) == (((/* implicit */int) arr_15 [i_6]))));
        }
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((unsigned int) (+(var_10)))))));
        var_23 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [7U] [i_0] [i_0] [i_0]))))) <= ((-(arr_24 [i_0])))));
        arr_27 [i_0] = ((/* implicit */short) ((unsigned int) (short)11064));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_9))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_7])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))) : (arr_22 [i_7] [i_7]))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
    {
        arr_34 [i_8] = ((/* implicit */unsigned short) (~(min((min((((/* implicit */long long int) arr_13 [i_8])), (var_3))), (((/* implicit */long long int) (-(arr_12 [(_Bool)1]))))))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_8])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */short) arr_6 [(_Bool)1] [i_9]);
        var_28 = ((/* implicit */long long int) var_0);
    }
}
