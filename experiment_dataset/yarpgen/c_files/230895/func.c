/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230895
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
    var_11 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_4)))));
    var_12 = ((/* implicit */long long int) ((var_7) != (((/* implicit */int) (short)19884))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((short) (unsigned short)49152))) : (((var_10) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_3))))))) : ((+(((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))))) : (arr_4 [i_1] [i_2]))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) -8857906965851735940LL))))))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((3065364953228022417LL), (8857906965851735948LL))))))) / (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_3 [i_1 - 4] [i_1 - 4] [i_1 - 4]))))));
                    var_16 = ((/* implicit */_Bool) -3065364953228022402LL);
                    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)19898)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))))) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_10)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_3 [i_1] [i_1] [i_2 + 2])))), (max((((/* implicit */int) (short)32747)), ((+(((/* implicit */int) var_0))))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & ((((!(((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_1])))) ? (-3065364953228022418LL) : (((/* implicit */long long int) (~(arr_4 [i_1 - 1] [i_1 - 1]))))))));
                                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((1007919661U), (((/* implicit */unsigned int) arr_5 [i_0] [i_4] [i_4]))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_5))) : (((unsigned long long int) (short)-21939))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_0))));
}
