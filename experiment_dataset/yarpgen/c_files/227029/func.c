/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227029
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
    var_14 = ((/* implicit */long long int) var_12);
    var_15 = ((/* implicit */int) (!(var_2)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((((/* implicit */unsigned long long int) (~(14U)))) - (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)14784)), (14U)))), (((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (18446744073709551615ULL))))));
        var_17 = (short)14793;
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (short i_3 = 3; i_3 < 12; i_3 += 1) 
                {
                    for (short i_4 = 2; i_4 < 9; i_4 += 2) 
                    {
                        {
                            arr_16 [i_4] [i_4 - 2] [i_0] [i_2 - 2] [i_0] [i_1 - 2] [i_0] = ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)14346))))) != (((/* implicit */int) ((_Bool) var_3))));
                            arr_17 [i_0] [i_1] [i_2] [i_3 - 1] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((2147483647) >= (((/* implicit */int) (unsigned short)31744))))), (max((-1987852493437243701LL), (((/* implicit */long long int) arr_3 [i_0] [i_0]))))))) ? (((/* implicit */long long int) 4080U)) : (((long long int) (unsigned short)0)));
                        }
                    } 
                } 
                arr_18 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_1 - 2]);
                var_18 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-14779))))), (8955451499421713484ULL))), (arr_7 [i_0] [i_0] [i_0])));
            }
            var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) (short)0)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_1 + 2] [i_1 - 2] [i_1 - 2] [i_1 + 1])), (-4164612188990194361LL))))));
            arr_19 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) max((((((max((((/* implicit */long long int) var_9)), (var_11))) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0]))) - (5633))))), (((((((/* implicit */_Bool) (short)3)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)14784))))) & (((/* implicit */long long int) (-(((/* implicit */int) (short)-24848)))))))))) : (((/* implicit */unsigned short) max((((((max((((/* implicit */long long int) var_9)), (var_11))) + (9223372036854775807LL))) << (((((((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0]))) - (5633))) - (21093))))), (((((((/* implicit */_Bool) (short)3)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)14784))))) & (((/* implicit */long long int) (-(((/* implicit */int) (short)-24848))))))))));
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((5639183597047533738ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 2; i_6 < 12; i_6 += 1) 
                {
                    {
                        arr_28 [i_6] [i_0] [i_1 - 1] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) (short)-14799));
                        var_20 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((unsigned long long int) var_6)))), (min((arr_24 [i_1 + 3] [i_0]), (((/* implicit */int) arr_12 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 + 2]))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 3) /* same iter space */
                        {
                            arr_33 [i_7] [i_6] [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_7);
                            var_21 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14761)) * (((/* implicit */int) var_12))))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (14841900546442418101ULL)))))));
                        }
                        for (unsigned int i_8 = 1; i_8 < 12; i_8 += 3) /* same iter space */
                        {
                            arr_36 [i_0] [i_1] [i_0] [i_6] [i_8] = ((/* implicit */unsigned int) var_5);
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(arr_11 [i_0] [i_1] [i_5] [i_0])))) - ((+(arr_27 [i_0] [i_5] [i_1 + 2] [i_0]))))))));
                        }
                    }
                } 
            } 
        }
    }
    var_22 = ((/* implicit */unsigned short) (!(var_3)));
}
