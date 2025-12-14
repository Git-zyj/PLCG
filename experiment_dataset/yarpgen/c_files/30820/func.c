/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30820
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (short)30893))));
                            var_20 = min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 469709810U)), (8099330432311560672ULL)))) ? (min((((/* implicit */unsigned long long int) (unsigned short)49010)), (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)196)))))))), (((/* implicit */unsigned long long int) 5337183826718032953LL)));
                            arr_10 [i_0 - 1] [i_0] [i_2] [4LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-19890))))) ? (min((min((arr_1 [i_0]), (((/* implicit */int) arr_4 [i_0] [i_0])))), (((/* implicit */int) min((arr_4 [i_1 - 4] [i_0]), (arr_8 [i_0] [i_1] [i_0] [i_3] [4U] [(short)12])))))) : (((/* implicit */int) (unsigned char)51))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) (short)-15899))))))));
                                arr_21 [i_0] [i_0] [i_0] [i_5] [i_0] [i_1 - 4] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) == (((arr_6 [i_6] [i_0] [i_1]) & (arr_11 [i_0] [10ULL])))))), ((~(((/* implicit */int) (short)30894))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) (short)-30909)), (var_17)))));
}
