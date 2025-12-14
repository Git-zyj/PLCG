/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203516
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) var_7);
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_4] [i_2 - 1] [i_1 + 1] [i_0])), (min((((/* implicit */unsigned long long int) var_2)), (var_6)))))) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)1016)))))))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9154579919809677386LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)0))));
                                var_18 = ((/* implicit */unsigned char) ((int) (~((~(((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 18; i_5 += 3) 
                {
                    for (int i_6 = 2; i_6 < 17; i_6 += 3) 
                    {
                        {
                            var_19 = 4380866641920ULL;
                            arr_19 [i_6] [i_6] [11ULL] [i_1 + 1] [i_1] [10] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-52))));
                        }
                    } 
                } 
                arr_20 [i_0] = max((((/* implicit */long long int) var_12)), (max((((/* implicit */long long int) ((((/* implicit */unsigned int) var_5)) * (2167282727U)))), (var_13))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 2; i_7 < 16; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 3) 
        {
            for (unsigned char i_9 = 1; i_9 < 17; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((1111441438U), (((/* implicit */unsigned int) ((int) (short)32760)))));
                                arr_37 [i_7] [i_7] [i_8] [16LL] [i_7] [i_7 + 2] = ((/* implicit */unsigned int) 2147483647);
                                var_21 = ((/* implicit */unsigned long long int) var_4);
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_27 [i_7]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) var_7)), (max((((/* implicit */unsigned int) var_3)), (var_12))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-40))))) ? (((/* implicit */int) arr_22 [(unsigned short)16] [i_13])) : ((~(((/* implicit */int) var_3)))))))));
                                var_24 = ((/* implicit */short) (~((~(max((((/* implicit */unsigned long long int) arr_27 [i_8])), (460755306908327802ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_9);
    var_26 = ((/* implicit */unsigned long long int) 171708081U);
}
