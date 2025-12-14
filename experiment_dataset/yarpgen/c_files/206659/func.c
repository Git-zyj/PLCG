/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206659
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) (-(((9106558484277964935ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0]))))))));
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 784558455780150956ULL)) ? (((((/* implicit */_Bool) 232850626329784797ULL)) ? ((+(10323079155934690212ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_12 *= ((/* implicit */short) max(((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)34659)), (9106558484277964935ULL)))))), ((!(((/* implicit */_Bool) 1900972674697437859ULL))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_4] [(unsigned char)17] [(unsigned char)17] [i_4] [i_0] = ((11ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
                                var_13 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */int) ((unsigned short) var_8))) : (var_10)));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)-11432)))))));
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
}
