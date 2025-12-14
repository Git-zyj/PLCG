/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193890
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
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)4))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (unsigned char)30)), (4503599627239424ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251)))));
                                arr_15 [i_4] [i_0] [i_4] = ((/* implicit */unsigned int) arr_1 [i_0]);
                            }
                        } 
                    } 
                } 
                arr_16 [(unsigned char)12] &= var_5;
                arr_17 [i_0] = var_6;
                var_13 = ((/* implicit */long long int) (~(((((2367898131953896948LL) == (((/* implicit */long long int) 2869206107U)))) ? (arr_12 [(unsigned short)3] [(unsigned short)2] [i_0] [i_0] [(unsigned short)2] [i_1]) : (var_9)))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_5)) ? (3617687816729119863LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))))))) >> (((/* implicit */int) var_7))));
}
