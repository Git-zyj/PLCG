/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202045
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
    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) / (((((/* implicit */_Bool) 3021752902U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)9849)))))) * ((-(((/* implicit */int) var_13))))));
    var_16 = ((/* implicit */_Bool) min((var_16), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned int) (short)17466)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_1))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_1))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17440)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? (arr_10 [i_1] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1956021422680591141LL))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (short)-17465))));
                            }
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (((/* implicit */int) (short)-7)) : (842580198))) ^ (((/* implicit */int) arr_11 [i_3] [i_3] [i_1] [i_3] [i_3])))))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (signed char)28))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */short) ((signed char) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [11ULL] [i_1] [i_1] [i_1]))) > (284209601U)))), ((-(((/* implicit */int) (short)-32756)))))));
                var_23 = ((/* implicit */short) min((arr_4 [i_0] [15U] [i_0]), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)17496))) > (((1273214394U) + (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0] [(_Bool)1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5)))))))) ? ((-((~(((/* implicit */int) (signed char)116)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9837)) ? (arr_10 [i_1] [(short)1] [(short)1]) : (arr_10 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_0] [i_0] [(unsigned short)0] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) < (1800359160U))))))));
            }
        } 
    } 
}
