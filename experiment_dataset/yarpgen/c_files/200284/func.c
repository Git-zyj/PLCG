/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200284
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) var_11);
                    var_20 = ((/* implicit */short) max((((((9223372036854775785LL) & (((/* implicit */long long int) 0U)))) >> (((((/* implicit */int) max((((/* implicit */short) var_7)), (var_4)))) + (108))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -3883428231088857026LL)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (_Bool)1)))))));
                    var_21 = ((/* implicit */short) (unsigned short)26481);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((var_3), (var_12))))) ? (max((max((((/* implicit */int) (short)-2714)), (1660906790))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_15)))))) : (((/* implicit */int) var_5))));
                                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                                arr_12 [i_0] [i_3] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_3]))));
                            }
                        } 
                    } 
                    var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761))))), (((/* implicit */unsigned long long int) (unsigned char)255))))) ? (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_3 [i_2]))), (((/* implicit */unsigned int) (short)-32751)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((2220574451406968019LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-30060))))))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (short)1323))));
}
