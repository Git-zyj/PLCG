/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189948
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
    var_20 = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_6)) ? (-8665811585873817054LL) : (((/* implicit */long long int) var_17))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((_Bool) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (min((arr_5 [i_0] [i_0] [1LL]), (-1855942538084050064LL))))));
                    var_22 = ((/* implicit */long long int) min(((~(((((/* implicit */int) var_16)) | (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) ((signed char) -1)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_23 = min((((/* implicit */long long int) max((var_6), (((/* implicit */short) (signed char)-110))))), (max((3133471034263416974LL), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1 - 3])))));
                                var_24 += ((/* implicit */short) arr_5 [i_0] [i_1] [i_0]);
                                var_25 = ((/* implicit */int) min((var_25), (max((((/* implicit */int) min((var_4), (((/* implicit */signed char) arr_0 [i_0 + 1]))))), (((((/* implicit */int) arr_0 [i_0 - 1])) + (((/* implicit */int) arr_0 [i_0 - 1]))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) min((var_26), (max((-1LL), (((/* implicit */long long int) (unsigned char)239))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(_Bool)1] [(_Bool)1] [i_2 + 1] [(_Bool)1] [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2068))) : (arr_12 [i_0] [i_5] [i_6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-2068)) && (((/* implicit */_Bool) (unsigned char)250))))) : ((+(((/* implicit */int) var_9)))))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-3201706018544690458LL))))));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1 - 1] [i_2 + 1])) && (((/* implicit */_Bool) var_8))))) >> (((arr_5 [i_0] [i_5] [i_5]) + (8221682646444078161LL)))));
                                var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                                arr_19 [i_0 - 1] [i_1 + 1] [1LL] [4LL] [(_Bool)1] [i_0] = ((/* implicit */short) -531538355);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) var_6);
}
