/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29351
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
    var_19 = (+(((((/* implicit */_Bool) 3461765339U)) ? (((((/* implicit */_Bool) (short)-26101)) ? (120U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))))));
    var_20 -= ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_21 *= ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218))))))) << (min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (((((/* implicit */_Bool) arr_4 [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) var_7))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_3)) : (max((((/* implicit */unsigned long long int) ((var_5) | (((/* implicit */long long int) 2611583273U))))), (3ULL)))));
                                arr_14 [5] [i_1] [i_1] [(_Bool)1] [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) (+(var_6)));
                                var_23 = ((/* implicit */int) (_Bool)0);
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_14)) ? (0ULL) : (((/* implicit */unsigned long long int) (+(-1341129585961789LL)))))), (((/* implicit */unsigned long long int) (short)-26079))));
                var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((192954884) ^ (((/* implicit */int) (unsigned short)1))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                {
                    arr_25 [i_6] [i_6] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-12331)) : (((/* implicit */int) (unsigned short)11)))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-5612961822980439832LL) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [(signed char)20] [i_6] [i_6] [i_5])))))) ? (((((/* implicit */_Bool) var_12)) ? (var_12) : (-1003791753))) : (((/* implicit */int) var_0))));
                    arr_26 [i_7] = ((1124184600) | (((/* implicit */int) (short)-16)));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) (((~(var_4))) << (((/* implicit */int) var_15))));
}
