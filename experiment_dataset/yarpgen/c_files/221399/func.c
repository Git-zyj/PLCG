/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221399
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
    var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (915942794)))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (((((/* implicit */_Bool) var_8)) ? (13433971084636787838ULL) : (5012772989072763764ULL)))))) ? (9146763550743825543ULL) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))), (((((/* implicit */_Bool) -2008132429)) ? (9146763550743825543ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) max((var_7), (var_7)))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */int) (short)17103)) % (var_5)))))));
        var_17 = ((/* implicit */unsigned int) ((-9223372036854775801LL) / (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) arr_3 [3LL] [i_1]);
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_14 [i_5] [i_4] [0U] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_8 [i_5] [i_5] [i_5])) / (((((/* implicit */_Bool) (~(var_11)))) ? (-8144334942270839608LL) : (((var_11) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1])))))))));
                            var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((int) 9146763550743825543ULL))) ? (-3009251917329175956LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))))), (-7887305147954395662LL)));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(var_6))))));
                        }
                    } 
                } 
            } 
            arr_15 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_9)))));
            var_21 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))) : (var_11))) > (((/* implicit */long long int) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
        }
        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            arr_20 [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 9169565687664515452ULL)) || (((/* implicit */_Bool) var_8))))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6 - 1])) && (var_10))))));
            arr_21 [i_6] [i_6] = ((/* implicit */unsigned long long int) min((arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(short)10]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_13))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) (short)17117)))))))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    {
                        arr_30 [i_1] [i_6] [i_6] = ((long long int) min((((((/* implicit */_Bool) -7887305147954395678LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_10 [i_6 - 1] [i_1] [i_6] [8LL]))));
                        arr_31 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)36)), (var_9)))) ? (((((/* implicit */_Bool) 9169565687664515478ULL)) ? (-9223372036854775778LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6 + 1]))))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (arr_19 [i_1] [i_1])))))));
                        arr_32 [i_6] [i_7] [7U] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) == (((((/* implicit */_Bool) (short)-22809)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 9169565687664515449ULL))))) : (((/* implicit */int) var_9))))));
                    }
                } 
            } 
        }
    }
    var_22 = ((/* implicit */_Bool) var_6);
}
