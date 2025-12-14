/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226381
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
    var_20 = ((/* implicit */unsigned short) ((735700331U) << (((((/* implicit */int) var_16)) - (4322)))));
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5U)) ? (2342741145U) : ((+(1952226152U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (127355191)))) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) var_1)))) : ((+(max((((/* implicit */int) (unsigned char)104)), (127355196)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)8160))))) < ((-(((((/* implicit */_Bool) -127355197)) ? (((/* implicit */unsigned int) -127355205)) : (1952226167U)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) arr_8 [i_3] [i_1] [i_0]);
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4189925718U)) ? (((((/* implicit */_Bool) (short)-2554)) ? (9223372036854775801LL) : (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0])))) : (4519331399242325081LL)))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_10 [i_3] [i_2] [(unsigned short)5] [i_0])) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_1] [i_2])))))))) : (15227234547202930886ULL)));
                            arr_12 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */int) (+((~(min((2342741144U), (((/* implicit */unsigned int) arr_6 [i_3]))))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (signed char)25)) || (((/* implicit */_Bool) (short)-8163))))), (((((/* implicit */int) (short)8163)) - (((/* implicit */int) (unsigned short)12))))))) ? (var_18) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [17U] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_8 [i_1] [i_1 - 3] [i_1 + 3])) : (((/* implicit */int) arr_8 [i_0] [i_1 + 3] [i_1 + 3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)27639)) ? (((/* implicit */unsigned int) 1660507922)) : (4194304U))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (var_2))))))));
}
