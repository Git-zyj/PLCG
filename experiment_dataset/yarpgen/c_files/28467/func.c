/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28467
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
    var_19 = ((/* implicit */unsigned long long int) var_16);
    var_20 += ((short) ((((/* implicit */int) max((var_13), (var_5)))) % ((-(((/* implicit */int) var_12))))));
    var_21 = ((/* implicit */unsigned long long int) var_17);
    var_22 = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */int) (short)0)), (((((/* implicit */int) var_13)) | (((/* implicit */int) var_8))))))), (var_4)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_23 ^= ((/* implicit */short) ((((arr_0 [i_0 - 2]) > (arr_0 [i_0 + 1]))) || (((/* implicit */_Bool) (+(143833713099145216ULL))))));
                                arr_12 [i_4] = ((/* implicit */short) ((long long int) ((var_4) ^ (((/* implicit */long long int) var_16)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_5] [i_6])) | (((/* implicit */int) var_10))))), (((((arr_5 [i_6] [2U] [i_5 + 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5] [(short)10] [i_6] [i_6 - 1] [(_Bool)1] [i_6])))))));
                                arr_20 [i_5] [i_0 - 1] [13LL] [i_2] [0U] [i_0] [i_5] = ((/* implicit */_Bool) ((short) arr_11 [i_0] [i_0 - 1] [i_5 + 3] [i_6] [i_6 + 2]));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) + (((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [(short)5])))));
                    var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((((/* implicit */_Bool) (short)16160)) || (((/* implicit */_Bool) (short)-12961)))))))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4503599560261632LL)))) >= (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2439717931U)))))) == ((+(((/* implicit */int) var_10))))));
                }
            } 
        } 
    } 
}
