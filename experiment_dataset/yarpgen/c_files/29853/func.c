/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29853
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) var_11)) : (0ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)3233)) : (((/* implicit */int) (short)32757))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (unsigned short)2798)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2113929216U)))))) : (min((((((/* implicit */_Bool) (unsigned short)23300)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3072))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4)))))))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((((/* implicit */int) var_8)) != (((/* implicit */int) var_10))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)10486)) || (((/* implicit */_Bool) (unsigned char)255)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0] [i_0])))))));
                    var_15 = ((/* implicit */int) ((short) (~(((/* implicit */int) var_0)))));
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)62))))) ? (((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) -103234421)) : (arr_1 [i_0] [i_0]))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) arr_2 [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) 0LL))));
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_11)))) : (var_6)));
                    var_19 = ((/* implicit */unsigned int) (((((_Bool)1) && (((/* implicit */_Bool) (unsigned short)33767)))) ? (min((var_9), (((/* implicit */int) arr_5 [i_5] [i_4 + 1] [i_3 + 1])))) : ((-(((/* implicit */int) var_8))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                                var_21 = ((/* implicit */unsigned char) arr_0 [i_3 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = (((_Bool)1) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) var_8)) : (arr_7 [i_3 + 1] [i_3])))) / (arr_1 [i_3 + 2] [i_3 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 1729159130)) : (var_6))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3])))))))))));
        var_23 = ((/* implicit */signed char) arr_6 [i_3] [i_3] [i_3 - 1] [i_3 + 2]);
    }
    /* vectorizable */
    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 1) /* same iter space */
    {
        var_24 += ((/* implicit */int) (+(4294967283U)));
        arr_23 [i_8] = ((/* implicit */unsigned short) ((arr_20 [i_8 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    }
    var_25 = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (!(var_10)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)255)))))) + (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) 18446744073709551591ULL)) ? (((/* implicit */int) (unsigned char)234)) : (618721960)))))));
}
