/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246853
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51656))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)13874)) && (((/* implicit */_Bool) var_4)))))))));
                                var_15 *= var_2;
                                var_16 = ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (signed char i_6 = 1; i_6 < 22; i_6 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_6) : (var_12)))) ? (((((/* implicit */_Bool) (unsigned short)13865)) ? (13141184998748983721ULL) : (12228128901693627384ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (var_11)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_13)) : (var_12)))) ? (min((2993274659U), (((/* implicit */unsigned int) (unsigned short)60233)))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)5305), (((/* implicit */unsigned short) (signed char)-8)))))))) : (((unsigned int) ((((/* implicit */_Bool) (short)11)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_2)))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)13878)) & (((/* implicit */int) var_3)))) ^ ((~(((/* implicit */int) (signed char)127))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_4)))) ? (((((/* implicit */_Bool) 1955477137)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)40))) : (var_11))) : (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned short)13878)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55064))))))))));
                            arr_16 [(short)5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1821624137)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)65518))))) ? (var_12) : (((unsigned long long int) (~(((/* implicit */int) (unsigned short)49901)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-2610607430128497360LL)))) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_2)))))))) ? (max(((+(((/* implicit */int) (unsigned short)58379)))), (((/* implicit */int) ((signed char) 1850081718U))))) : ((-(((/* implicit */int) var_0))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((signed char) var_5)))))), (((var_9) ? (((((/* implicit */_Bool) (short)6594)) ? (3481892688354124197ULL) : (11647709371328206655ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned int) var_8)))))))));
}
