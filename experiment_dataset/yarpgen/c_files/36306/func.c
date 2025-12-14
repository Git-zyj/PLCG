/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36306
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_13 += ((/* implicit */long long int) var_12);
        arr_2 [i_0 + 1] = ((/* implicit */unsigned int) var_6);
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) var_3)) ? (16571798905931756820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) 629851269))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0 - 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)28)) ? (((((/* implicit */_Bool) var_7)) ? (-8095860015563908605LL) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (short)-4654)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_15 |= ((/* implicit */short) 2005849435);
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((/* implicit */unsigned int) max((((/* implicit */int) (short)10002)), (-165831876)))), (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                                arr_13 [i_0] [i_2] [(short)6] [i_3] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned long long int) 871205715U)), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_7)) : (16571798905931756817ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)28591)), (483299079))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_0)))))))));
    var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 971043074123165517ULL)) ? (var_10) : (((/* implicit */int) (unsigned char)162))))) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) var_12)))))));
    var_19 = ((/* implicit */unsigned long long int) 483299078);
    var_20 ^= ((/* implicit */long long int) var_6);
}
