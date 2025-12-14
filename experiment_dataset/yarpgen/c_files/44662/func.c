/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44662
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((((/* implicit */_Bool) (signed char)116)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */unsigned long long int) var_3)) : ((((_Bool)1) ? (10213595293890081328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 *= ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6))))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) var_11)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 18446744073709551615ULL))) ? (((arr_3 [i_3 - 3] [i_3 - 3] [i_3 + 2]) - (arr_3 [i_3 + 2] [i_3 + 2] [i_3 - 1]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_3 - 2])) ? (arr_3 [i_3 + 3] [i_3 + 1] [i_3 - 3]) : (((/* implicit */int) var_12)))))))));
                            var_18 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 10213595293890081320ULL))) ? (((/* implicit */unsigned long long int) -1693809861752506250LL)) : (var_7))));
                            var_19 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((signed char) arr_8 [i_0] [i_3 + 2]))) ? (((((/* implicit */_Bool) var_1)) ? (1125899890065408ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : ((~(arr_5 [i_0] [i_0] [i_0] [i_0])))))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (short)-11584)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_0])) : (((/* implicit */int) var_5))))))), (((long long int) min((var_7), (((/* implicit */unsigned long long int) -1693809861752506250LL))))))))));
                            arr_10 [i_0] [i_0] [i_0] [i_2] [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3] [i_3 - 3] [i_3 + 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))) & (((((/* implicit */int) (unsigned char)132)) >> (((((/* implicit */int) (unsigned char)63)) - (45)))))))), (((unsigned long long int) ((((/* implicit */_Bool) 8233148779819470287ULL)) && (((/* implicit */_Bool) var_0)))))));
}
