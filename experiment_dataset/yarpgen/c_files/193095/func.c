/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193095
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_12 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_11 [i_2 - 1] [i_1] [i_2 - 1] [i_4 - 1] [i_3 - 1]), (arr_11 [i_2 - 1] [i_1] [i_2] [i_4 - 1] [i_3 + 1]))))));
                                arr_13 [i_4 - 1] [i_2] [1LL] [i_2] [i_0] = (-(2173232320212416168ULL));
                                arr_14 [i_2] [(unsigned char)0] [i_1] [i_2] = ((/* implicit */short) max(((~(((((/* implicit */int) arr_1 [i_0])) | (-1684294933))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(9223372036854775807LL)))))))));
                                arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((long long int) arr_0 [i_0] [13])) < (((/* implicit */long long int) var_8))));
                                arr_16 [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_4] [i_2] [i_2] [1U]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? (((((((/* implicit */long long int) -312870111)) < (-4520359723118126825LL))) ? (4520359723118126824LL) : (-4520359723118126824LL))) : ((+(-4520359723118126810LL)))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_22 [i_5] [(_Bool)1] [i_5])), (arr_18 [i_5] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4520359723118126824LL)))) : ((+(arr_18 [i_5] [i_6])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 7202195001341393859LL)) ? (-1) : (((/* implicit */int) (_Bool)1)))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (~(var_8)))) ? (var_5) : (((/* implicit */unsigned long long int) -4520359723118126824LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (+(var_0))))))));
}
