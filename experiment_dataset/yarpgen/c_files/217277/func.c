/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217277
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37541)) + (((/* implicit */int) (signed char)124))))))))));
                            var_13 = ((/* implicit */signed char) (~(((-1) % (-1)))));
                            arr_8 [i_2] [i_1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(-1))))));
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 26753045)) ? (0) : (0))) << (((((/* implicit */int) (signed char)125)) - (112)))))) ? ((~(26753061))) : (((((/* implicit */int) (unsigned short)57142)) % (((/* implicit */int) (signed char)125)))))))));
                        }
                    } 
                } 
                var_15 |= ((/* implicit */signed char) (~(((0) | (1367241534)))));
                arr_9 [(signed char)10] = ((/* implicit */signed char) (~(((196696680) | (-8)))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)125)) | (((/* implicit */int) (signed char)-50))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_15 [i_5] [i_5] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */signed char) (+((((~(((/* implicit */int) (unsigned short)65535)))) | (26753024)))));
                            var_17 = -26753025;
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            {
                arr_21 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -26753046)) ? (26753028) : (((/* implicit */int) (unsigned short)65528))))) ? ((~((~(-1))))) : (((/* implicit */int) (signed char)-107))));
                arr_22 [i_6] [i_6] [i_7] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)47640)) ? (((/* implicit */int) (signed char)-111)) : (26753024)))));
            }
        } 
    } 
}
