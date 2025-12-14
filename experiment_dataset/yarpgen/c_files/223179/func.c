/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223179
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
    var_11 = ((/* implicit */int) max((var_11), (((((/* implicit */_Bool) 9223372036854775790LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))));
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) max((((/* implicit */int) ((short) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_7)))))), (((var_4) ? (((/* implicit */int) min(((short)4096), (((/* implicit */short) (_Bool)0))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)1022)) : (((/* implicit */int) (unsigned short)0)))))))))));
    var_13 = ((/* implicit */long long int) min((((/* implicit */int) var_8)), ((~(((/* implicit */int) (unsigned short)0))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1152903912420802560LL)) ? (-9223372036854775801LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))) ? (((long long int) (+(((/* implicit */int) (unsigned short)44661))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((unsigned short) (_Bool)1))))))))));
                    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-2147483627)))) || (((_Bool) (signed char)96))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_11 [i_4] [i_0] [i_2]))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)65535))))) && ((!((_Bool)1))))), (((_Bool) (unsigned short)4096)))))));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)8192)) : (((/* implicit */int) (unsigned short)0))))))))))));
                            var_19 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)63780)), (((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (short)(-32767 - 1)))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
                        {
                            arr_16 [i_0] [i_0] [i_3] [i_0] [i_0 - 2] = ((/* implicit */unsigned short) var_8);
                            arr_17 [i_0 - 2] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (unsigned short)65526);
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((/* implicit */int) var_0)))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_10))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_0 + 3] [i_0] [i_0] [i_0 - 1] [i_0]))))) ? ((((~(68719411200LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_3] [(signed char)8] [i_0] [i_0])) : (((/* implicit */int) var_3))))))) : (var_9))))));
                            var_23 = ((/* implicit */long long int) max((var_23), (max((9223372036854775796LL), (((/* implicit */long long int) (short)(-32767 - 1)))))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (_Bool)1))));
                        }
                        arr_20 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) arr_12 [i_0 - 2] [i_1] [i_2] [i_2] [i_3]);
                        var_25 = ((/* implicit */int) ((long long int) (_Bool)0));
                    }
                    for (int i_7 = 4; i_7 < 17; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (4194296) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32768))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-536870912LL))))))));
                        var_27 = ((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */int) (unsigned short)32736)) : (((/* implicit */int) (unsigned short)65524)));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (unsigned short)61997))))) ? (((((/* implicit */_Bool) var_1)) ? (2886915618152920924LL) : (arr_12 [i_8] [i_8] [i_8] [i_8] [i_8]))) : (((/* implicit */long long int) arr_15 [i_8] [i_2] [i_1] [i_0] [i_0]))))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)8))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-84)))));
                        var_29 = ((/* implicit */_Bool) (-2147483647 - 1));
                        var_30 = (!(((/* implicit */_Bool) min(((signed char)(-127 - 1)), ((signed char)-74)))));
                        arr_28 [(short)13] [(short)13] [i_2] [(short)13] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_0 + 3] [i_0 - 1])) ? (((/* implicit */int) (short)-256)) : (((/* implicit */int) (unsigned short)0))))), (((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */long long int) min((((/* implicit */int) var_6)), (1048064)))) : (144110790029344768LL)))));
                        arr_29 [i_0] [i_1] [10LL] = ((/* implicit */_Bool) max((((/* implicit */long long int) (((!((_Bool)1))) ? ((~(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_2])) : (((/* implicit */int) (signed char)-2))))))), (((long long int) var_9))));
                    }
                }
            } 
        } 
    } 
}
