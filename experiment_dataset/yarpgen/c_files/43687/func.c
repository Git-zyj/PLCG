/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43687
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [(unsigned char)10] [i_0] = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) arr_4 [(unsigned short)3] [i_0])))))) > (((/* implicit */int) arr_3 [i_0]))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) (short)7);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (short)-26626);
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 24; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            {
                arr_17 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3 - 1])) * (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) (short)26626)) < (((/* implicit */int) (short)9179))))) : (((/* implicit */int) arr_12 [8ULL] [i_4])));
                var_14 += ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned short)96))))));
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 24; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) 699945529974806962LL)), (min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)1550))))))));
                            var_16 -= ((/* implicit */signed char) arr_13 [i_3 - 1] [i_5]);
                        }
                    } 
                } 
            }
        } 
    } 
}
