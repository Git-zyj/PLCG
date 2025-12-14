/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243183
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_14))))))) % (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_14))))) : (max((var_2), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (_Bool)1))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) % (max((var_0), (((/* implicit */long long int) var_14))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)244))))) + (((13ULL) + (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (var_10)))) ? (((((/* implicit */_Bool) 8387079474321887331ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) : (0ULL))) : (10059664599387664285ULL)))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)243)) / (((/* implicit */int) var_5))))), (var_0)));
                                arr_12 [i_4] [i_3] [i_2] [i_1 + 2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((-9LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) + (10059664599387664310ULL))) << (((/* implicit */int) var_12)))))));
                                arr_13 [i_0] [i_1 + 2] [i_2] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) 176350540366659006LL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
