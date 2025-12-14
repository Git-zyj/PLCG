/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190466
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) min((arr_3 [i_0] [i_0] [8U]), (arr_3 [i_0] [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_13 [i_3] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((2044972757U) + (((/* implicit */unsigned int) 144250589))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(3277149911U)))) && (((/* implicit */_Bool) 2249994539U)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) + (arr_2 [(_Bool)1])))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((-7706012665349090110LL), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_6 [i_3 + 1] [i_3 - 3] [i_3 - 3] [i_3 - 2])), (max((((/* implicit */unsigned char) (signed char)96)), ((unsigned char)199))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (short)4574);
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+((-(min((var_8), (((/* implicit */int) (_Bool)1)))))))))));
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */int) (signed char)127)) < (((/* implicit */int) ((2044972746U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_6])))))))))));
                    var_17 = (~(((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4])) || (((/* implicit */_Bool) var_3)))))) : (min((-6781800150858780178LL), (((/* implicit */long long int) 2044972771U)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) max(((((!(((/* implicit */_Bool) 3388086007616186342LL)))) || ((!(((/* implicit */_Bool) (short)4574)))))), (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) (signed char)-47))))) || ((!(((/* implicit */_Bool) var_12))))))));
    var_19 ^= ((/* implicit */short) ((((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -1619571665)))) ? (((((/* implicit */_Bool) 2044972784U)) ? (14068002408166866333ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4574))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_12)))))) >= (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_11)) : (var_9))), (((/* implicit */long long int) var_13)))))));
}
