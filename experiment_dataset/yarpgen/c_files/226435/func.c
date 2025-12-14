/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226435
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
    var_15 &= ((/* implicit */short) (+((~(var_13)))));
    var_16 = ((/* implicit */int) (~(((unsigned long long int) var_8))));
    var_17 ^= min(((~(8512385298478300133ULL))), (((/* implicit */unsigned long long int) 2420071014730493410LL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_10 [5ULL] [5ULL] [i_2] [4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0 + 3] [i_2 - 2] [i_2 - 2]))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 13U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [(short)0] [(unsigned short)19] [i_2] [i_2]))))), (((((/* implicit */_Bool) 1625613962)) ? (((/* implicit */long long int) var_3)) : (2420071014730493410LL))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned char)2]))))))))));
                            var_18 = ((/* implicit */unsigned short) var_5);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((-2420071014730493403LL) - (2420071014730493410LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11259))) : (((unsigned long long int) 18446744073709551595ULL))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) | ((-(((/* implicit */int) (_Bool)0))))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned int) ((short) (+(arr_13 [i_0] [i_0 - 1] [i_0] [i_4] [i_6]))));
                                var_22 = ((/* implicit */signed char) ((((arr_15 [i_0 + 1] [i_0] [i_0]) != (arr_15 [(short)6] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) : (18446744073709551615ULL)))));
                            }
                        } 
                    } 
                } 
                var_23 -= ((/* implicit */unsigned short) arr_3 [i_1]);
                var_24 &= ((/* implicit */int) ((_Bool) ((long long int) (-(2420071014730493410LL)))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((signed char) (unsigned char)51)))) && (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2420071014730493415LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) : (-2420071014730493415LL)))) > ((+(var_8)))))));
}
