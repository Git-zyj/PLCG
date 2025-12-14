/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40346
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((max((((/* implicit */int) (unsigned char)247)), ((-2147483647 - 1)))) ^ (((/* implicit */int) ((2710378627U) <= (2710378627U)))))) & (((/* implicit */int) max((((/* implicit */short) ((-2147483641) >= (((/* implicit */int) (unsigned char)156))))), (min((((/* implicit */short) (unsigned char)57)), ((short)24493)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (3U)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_13 [i_3 - 3] [i_3 + 1] [i_3 - 3] = (unsigned char)0;
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29194))) != (1701678030879512095ULL)))) - (0))), (8388544)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) 6730982885433778635ULL);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((3614243246U) ^ (((/* implicit */unsigned int) (-2147483647 - 1)))))) * (min((7881299347898368ULL), (7881299347898368ULL))))) >= (((/* implicit */unsigned long long int) min((min((16711680U), (((/* implicit */unsigned int) (signed char)-120)))), (((/* implicit */unsigned int) (unsigned char)133)))))));
        arr_18 [(unsigned char)1] = ((/* implicit */unsigned int) (unsigned char)0);
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 8; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    arr_23 [i_5] [i_6] [i_5] &= ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)143)) << (((/* implicit */int) (unsigned char)10))))), (((18438862774361653247ULL) + (((/* implicit */unsigned long long int) (-2147483647 - 1))))))) > (min((((3812264172600372678ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)124)) + (((/* implicit */int) (unsigned char)6))))))));
                    var_18 = ((/* implicit */unsigned int) (signed char)-44);
                }
            } 
        } 
        arr_24 [i_5] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-51), ((signed char)71))))) ^ (max((((/* implicit */unsigned int) (-2147483647 - 1))), (1584588668U))))) >= (((/* implicit */unsigned int) 2147483647))));
    }
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 10710487810211039655ULL))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2412017551U)) && (((/* implicit */_Bool) (unsigned char)232)))), (((((/* implicit */_Bool) (signed char)5)) && (((/* implicit */_Bool) -2147483647))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) % (min((2747837355U), (((/* implicit */unsigned int) (unsigned char)88)))))))))));
}
