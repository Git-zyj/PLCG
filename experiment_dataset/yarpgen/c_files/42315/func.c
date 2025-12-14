/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42315
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
    var_12 = ((/* implicit */unsigned short) 1989293283U);
    var_13 -= ((((/* implicit */_Bool) ((short) max(((_Bool)1), ((_Bool)1))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)56283))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
    var_14 -= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (442135076U)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)56256))))) ? (((/* implicit */int) (short)16634)) : ((~(((/* implicit */int) (signed char)124))))))), ((-(((((/* implicit */_Bool) 1012443484U)) ? (-4876217578669363922LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56254))))))))))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (1836062028U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))))) ? (var_11) : (((((/* implicit */_Bool) (+(3982644699309721217LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)99))))) : (((/* implicit */int) ((_Bool) (unsigned short)21333)))))));
                                var_17 = max((((/* implicit */long long int) min((((((/* implicit */_Bool) 1339400353U)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)29755)) ? (319249467) : (((/* implicit */int) (unsigned short)65535))))))), (((((/* implicit */_Bool) var_4)) ? (32767LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
        arr_13 [i_0] [(unsigned short)13] = ((/* implicit */int) (signed char)89);
    }
    var_19 = ((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)56256))));
}
