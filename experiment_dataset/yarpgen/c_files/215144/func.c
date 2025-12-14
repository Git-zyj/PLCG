/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215144
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_16)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */int) var_4))));
    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61440))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1024)) + ((-2147483647 - 1))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_2]))));
                            arr_10 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_3)), ((((_Bool)1) ? (var_13) : (var_14)))));
                            arr_11 [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */int) (_Bool)1)) >= (-1915184768))) ? (max((var_0), (((/* implicit */unsigned long long int) arr_8 [10U] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [i_0]))))))) * (((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (var_7))))));
                        }
                    } 
                } 
                var_21 *= ((/* implicit */_Bool) ((signed char) max((arr_6 [i_0]), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_0])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */int) (signed char)122)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) (short)-19644)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_11))))))));
                                arr_21 [(_Bool)1] [i_5] [11LL] [i_1] [i_0] = (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_4])));
                                arr_22 [(_Bool)1] [i_1] [i_4] [i_5] [(_Bool)1] [i_5] [i_6] = ((/* implicit */signed char) 3189780504302550652ULL);
                                var_22 = ((/* implicit */int) ((unsigned long long int) arr_19 [i_0]));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
