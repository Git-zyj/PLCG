/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21544
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
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(arr_3 [i_1])))) ? (((arr_3 [i_1]) & (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -5940005716546039211LL))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) -5940005716546039211LL);
                                var_15 = ((/* implicit */unsigned char) (~((~(arr_6 [i_2 - 3] [i_2 - 1] [i_0 - 4])))));
                                var_16 += ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                } 
                var_17 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4900908272946911636LL))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 3; i_5 < 14; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((((/* implicit */unsigned long long int) 5940005716546039210LL)), (12599142813136491914ULL))))));
                    var_19 = ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-163)));
                    var_20 = ((/* implicit */signed char) (-(12599142813136491933ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)250)) || (((/* implicit */_Bool) var_7)))) ? (arr_11 [i_5 - 2] [i_5 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-9)))))))))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 982623271U)) && (((/* implicit */_Bool) 1094449144))));
                                var_23 += ((/* implicit */long long int) arr_15 [i_7] [12LL] [(signed char)2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
