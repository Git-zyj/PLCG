/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3180
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [18LL] [(unsigned short)8] [i_0] [i_3] [i_0] = ((/* implicit */short) (_Bool)0);
                                var_13 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) + (arr_12 [i_0] [i_0] [i_2] [i_2] [i_2])));
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_1 [5U] [i_1 + 3]))));
                                var_15 += ((/* implicit */short) arr_14 [i_0] [i_1] [i_0] [i_0] [i_4]);
                                var_16 += ((/* implicit */signed char) arr_11 [i_3]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned short i_6 = 3; i_6 < 17; i_6 += 4) 
                    {
                        for (long long int i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_1 + 2] [i_0] [i_1 + 2] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1621984201U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned short)8]))))), (((/* implicit */unsigned long long int) (!((_Bool)0))))))) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (_Bool)1))))) : ((-(((/* implicit */int) (short)7519))))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-62)) : (arr_12 [i_0] [i_0] [i_0] [i_6] [i_7])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_4), (((/* implicit */short) ((((/* implicit */long long int) var_5)) >= (var_9))))));
    var_19 = ((/* implicit */int) var_2);
    var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) (short)512)) : (((/* implicit */int) (short)512))))));
}
