/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208262
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned short) max((max((var_4), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((var_19) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) (_Bool)1)))))));
                                arr_10 [i_1] [i_0] [i_0] [i_0] [i_1] &= ((/* implicit */unsigned short) max((((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1]))))), (((/* implicit */unsigned int) max(((unsigned short)56563), (((/* implicit */unsigned short) (_Bool)1)))))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_14))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [(_Bool)1] [(_Bool)1])))) ? (var_17) : (-8875901117692983726LL))))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((3073785392U), (((/* implicit */unsigned int) arr_7 [i_3]))))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)108)), ((short)28505)))) : (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) arr_1 [i_0 - 1] [i_3 + 1])))))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((1323852091U), (((/* implicit */unsigned int) arr_2 [i_0 - 3]))))) || (((((/* implicit */int) var_0)) > (((/* implicit */int) arr_2 [i_0 + 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        arr_15 [i_0] [(unsigned short)3] [(_Bool)1] [i_5] = ((/* implicit */signed char) max((min((var_18), ((short)-21914))), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0 - 3]))) <= (var_5))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8875901117692983734LL)) ? (0LL) : (var_17)))) && (((/* implicit */_Bool) max(((((_Bool)1) ? (var_1) : (1031624646U))), (((/* implicit */unsigned int) max((arr_6 [i_1] [2U] [i_2]), (arr_3 [i_5])))))))));
                    }
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) max((min((((/* implicit */unsigned int) arr_7 [i_1])), (var_11))), (((((/* implicit */_Bool) (short)21894)) ? (var_4) : (((/* implicit */unsigned int) var_3)))))))));
                }
            } 
        } 
    } 
    var_25 = var_8;
    var_26 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) var_15)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_13))))), (((/* implicit */unsigned long long int) var_19))));
}
