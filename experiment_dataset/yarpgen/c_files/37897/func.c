/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37897
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
    var_19 = ((/* implicit */int) ((var_0) + (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_18)))))))));
    var_20 |= ((/* implicit */int) max((var_0), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) (signed char)-17)), (1054548159))) / (((/* implicit */int) (signed char)18)))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((long long int) var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)32620), (((/* implicit */short) (signed char)16))))) ? (var_6) : ((+(((/* implicit */int) (signed char)-17)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_22 = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1]))))));
                            var_23 = ((/* implicit */short) (-(((/* implicit */int) (signed char)16))));
                            arr_12 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_2)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3 + 1])) ? (arr_4 [i_3 + 1] [i_3 - 1]) : (arr_4 [i_3 - 1] [i_3 - 1])))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-17)), (arr_3 [6U])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (min((var_5), (((/* implicit */long long int) var_6))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 3; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0 - 1] [(signed char)20] [i_0 - 1] [i_5 - 3] [i_6 - 1])) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [17LL])), (arr_20 [6LL] [i_1])))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_13)) > (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 2] [i_0])))))) : (var_16)));
                                var_25 = ((/* implicit */short) var_10);
                                arr_21 [i_5] [i_5 + 3] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])))), (((/* implicit */int) arr_19 [i_4] [i_1])))))));
                                arr_22 [i_0 - 1] [i_5] [i_1] [i_4] [i_5 + 3] [i_5] = ((/* implicit */signed char) ((unsigned int) (signed char)8));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
