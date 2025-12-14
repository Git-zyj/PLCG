/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41237
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)0))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            arr_12 [15LL] [(unsigned short)18] [i_3] [i_3 + 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)10)))) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))), (var_6))) : (((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */int) var_16))))));
                            arr_13 [i_0] [i_0] [i_2 - 3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_13)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */unsigned long long int) var_16)), (var_15))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_12)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned long long int) var_8)))))), (min((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (var_8))))))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) var_0))))) : (((((/* implicit */unsigned long long int) var_11)) | (var_15)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (min((((/* implicit */int) var_2)), (var_14))))) : (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (var_14)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((min((var_6), (((/* implicit */int) var_13)))), (((/* implicit */int) min((var_16), (var_1)))))))));
                var_21 += ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */unsigned long long int) var_5)))) <= (min((var_12), (((/* implicit */unsigned long long int) var_0))))))), (min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) var_7))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min(((~((-(var_5))))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)245)), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535))))))));
    var_23 = min((max((var_9), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) var_2)));
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_3)))) ? (((/* implicit */unsigned int) var_6)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_3)))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (-1LL) : (var_10))), (((/* implicit */long long int) (unsigned char)124)))))));
}
