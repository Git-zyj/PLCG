/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191032
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
    var_10 = ((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62125)) && (((((/* implicit */_Bool) 6615639778920687386LL)) && (((/* implicit */_Bool) 7231770056903406808ULL)))))))));
    var_11 = (unsigned short)63270;
    var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((11214974016806144808ULL) >> (((7231770056903406791ULL) - (7231770056903406787ULL)))))))))));
    var_13 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 11214974016806144808ULL)) ? (((/* implicit */int) (unsigned short)63270)) : (((/* implicit */int) (unsigned short)3411)))))));
                                var_15 = min((((/* implicit */signed char) (_Bool)0)), (((signed char) max((((/* implicit */unsigned long long int) (unsigned short)3389)), (7231770056903406808ULL)))));
                                var_16 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) 2399723412489282560LL)), (9568081544747320544ULL))), (7231770056903406808ULL)));
                                arr_16 [24] [24] [i_2] [3] [i_3] [i_2] = ((/* implicit */long long int) (unsigned char)249);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)2266), (((/* implicit */unsigned short) (_Bool)0)))))));
            }
        } 
    } 
}
