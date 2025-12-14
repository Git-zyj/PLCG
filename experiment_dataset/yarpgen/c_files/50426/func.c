/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50426
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) -5235250996648809323LL))));
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (+(-5235250996648809339LL)))), (((((/* implicit */unsigned long long int) -5235250996648809323LL)) | (18446744073709551615ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63488))))))));
                    var_15 = ((/* implicit */unsigned long long int) ((int) ((short) 4325657701135322884ULL)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_3] [i_0] = (!(((/* implicit */_Bool) 5235250996648809349LL)));
                                var_16 = (-(max((((unsigned long long int) arr_11 [i_3] [i_1] [i_0])), (((/* implicit */unsigned long long int) max((5235250996648809313LL), (((/* implicit */long long int) 4294967295U))))))));
                                var_17 = ((/* implicit */unsigned short) ((int) 5235250996648809339LL));
                                var_18 = (((!(((/* implicit */_Bool) max((arr_12 [i_4] [i_3] [(_Bool)1] [16] [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_4]))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((5235250996648809298LL) >= (4190910213223943957LL)))) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2])))) : (((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [i_4] [i_3]))) ? (((/* implicit */int) (signed char)16)) : (((((/* implicit */_Bool) 3558188804U)) ? (((/* implicit */int) arr_5 [i_0] [i_4])) : (((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_5)))))) && ((((!(((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8))))))));
    var_20 = ((/* implicit */_Bool) max(((+(254177925U))), (((/* implicit */unsigned int) max(((unsigned short)30491), (((/* implicit */unsigned short) (short)15872)))))));
}
