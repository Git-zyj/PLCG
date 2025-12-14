/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45080
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
    var_19 &= ((/* implicit */unsigned int) var_9);
    var_20 = ((/* implicit */unsigned short) (~(min((min((((/* implicit */unsigned long long int) 281474976710655LL)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_13)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1] [i_4 + 2]))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_10))));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) <= (-756077919)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)10138))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((/* implicit */int) var_4))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))));
        arr_13 [i_5] [i_5] |= ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_3))))));
        var_28 = ((/* implicit */_Bool) var_12);
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) var_17))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (signed char)-63))));
                        var_31 |= ((/* implicit */signed char) ((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        var_32 -= ((/* implicit */long long int) ((signed char) 756077918));
                        arr_21 [i_8] [i_6] [i_6] [i_5] = ((/* implicit */long long int) (signed char)91);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        arr_24 [i_9] [19ULL] = ((((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) (short)10138))))) || (((/* implicit */_Bool) arr_1 [i_9])))) && (((/* implicit */_Bool) (((+(9465515762891551067ULL))) - (((/* implicit */unsigned long long int) var_3))))));
        var_33 = ((/* implicit */_Bool) var_15);
    }
    var_34 &= ((/* implicit */unsigned int) ((int) (~(((6002996989061847414ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
    /* LoopNest 2 */
    for (long long int i_10 = 2; i_10 < 10; i_10 += 4) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            {
                var_35 = ((/* implicit */int) arr_0 [i_10] [i_11]);
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((((/* implicit */unsigned long long int) -1956513281)) - (var_8))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((257391020U), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((_Bool) arr_9 [i_11] [i_10] [i_11])))))))))));
                arr_31 [i_11] [i_10] = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (65535LL)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-43)))))));
            }
        } 
    } 
}
