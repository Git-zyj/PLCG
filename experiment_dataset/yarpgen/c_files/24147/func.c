/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24147
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
    var_12 = ((/* implicit */unsigned long long int) (short)29970);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1] [(unsigned short)17]))) * (((((/* implicit */_Bool) 9337685274533931808ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (9109058799175619813ULL))))), (((/* implicit */unsigned long long int) (signed char)-85))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_13 |= min((max((9337685274533931786ULL), (9109058799175619807ULL))), (((/* implicit */unsigned long long int) (~(max((-1LL), (((/* implicit */long long int) (signed char)-2))))))));
                                arr_13 [i_2] = ((/* implicit */short) ((long long int) -6358522562469877634LL));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (signed char)-50))))))) + (((((/* implicit */unsigned long long int) 4611686018427387896LL)) | (9337685274533931802ULL)))));
                                var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)2048)), (-1LL)))) ? (max((-1LL), (((/* implicit */long long int) var_5)))) : (-1LL)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_1 - 1] [i_2 - 3] [i_2 - 2] [i_4 + 2] [i_4 + 2])))))));
                                arr_14 [i_0] [i_2] [(unsigned short)10] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 9109058799175619814ULL)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (unsigned short)57783))))) / (-16LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((2853604431486837124LL), (5932491283384826912LL)))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)4))))) : (min((7012956755042207029LL), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((((18446744073708503040ULL) + (9337685274533931802ULL))) ^ (((/* implicit */unsigned long long int) -549755813888LL)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32382))))))));
                                var_17 = ((((min((14688440806859605607ULL), (((/* implicit */unsigned long long int) (unsigned short)63499)))) > (min((4735674365794789982ULL), (((/* implicit */unsigned long long int) (short)-7159)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (-5LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)49764)) : (((/* implicit */int) (unsigned short)43131)))))))) : (((18446744073708503040ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7066))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = var_3;
}
