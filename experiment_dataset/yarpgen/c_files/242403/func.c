/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242403
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
    var_20 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [(unsigned short)12] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_11)))) ? (((((/* implicit */_Bool) var_18)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14)))))))) ? (((/* implicit */long long int) max(((+(780803127))), (((/* implicit */int) var_6))))) : (min((min((var_12), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) var_13)))));
                            var_21 &= ((/* implicit */int) min((min((((/* implicit */long long int) (-(((/* implicit */int) var_16))))), (((((/* implicit */_Bool) 0U)) ? (5202183325418568263LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                            arr_12 [i_0] [i_0] [(unsigned short)3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_9)))) ? ((-(var_11))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_2)), (var_6))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_11)))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((max((min((-1LL), (var_15))), (((((/* implicit */_Bool) (short)-32)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8169029561906708374LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8169029561906708375LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (0LL)))) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17)))))))))))));
                /* LoopNest 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_2))));
                                var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) var_12)) : (var_19)))) ? (((min((var_16), (var_16))) ? ((+(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) 7832338221305250753ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))) : ((-(((/* implicit */int) var_14))))))));
                                arr_21 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */short) (-(max((var_11), (((/* implicit */long long int) var_0))))));
                                var_25 += ((/* implicit */int) min(((-(min((((/* implicit */long long int) var_0)), (var_18))))), (((((/* implicit */_Bool) max(((unsigned char)98), (((/* implicit */unsigned char) var_16))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))))) : ((+(var_11)))))));
                                arr_22 [1] [i_4] [i_0] [i_5] [i_6] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_11))))) : (((/* implicit */long long int) (-(((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */int) var_2);
            }
        } 
    } 
}
