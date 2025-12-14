/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226653
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
    var_19 += ((/* implicit */unsigned char) var_13);
    var_20 = ((/* implicit */short) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) ((unsigned short) min((1828041129U), (var_5))))) - (11820)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 += ((/* implicit */unsigned int) (((((~(arr_0 [i_0]))) + (2147483647))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) & (arr_1 [i_1]))) - (59886U)))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_3] = ((/* implicit */int) 1546882662U);
                                arr_15 [i_0] [i_3] [i_2] [i_0] [i_4] = ((/* implicit */signed char) 1065353216);
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((_Bool) 1546882662U))) : ((-(((/* implicit */int) arr_4 [i_4 - 1]))))));
                                var_23 = min((2748084622U), (((/* implicit */unsigned int) (_Bool)1)));
                                arr_16 [i_1] [i_3] |= ((/* implicit */unsigned int) -99470861);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 22; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+((((_Bool)1) ? (2748084634U) : (((/* implicit */unsigned int) -521298932))))))) ? (((((/* implicit */_Bool) 1546882673U)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)96))))) : (arr_18 [i_5 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((((/* implicit */int) (_Bool)1)), (var_4))))))));
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 4; i_9 < 21; i_9 += 3) 
                        {
                            {
                                arr_33 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 - 2] = ((/* implicit */unsigned short) (-((((+(((/* implicit */int) (short)-11753)))) - (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                                arr_34 [i_6] [i_6] [i_5] [i_9 + 2] [(_Bool)1] [(_Bool)0] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) 2748084640U))));
                                var_25 = ((/* implicit */short) (signed char)-15);
                                arr_35 [i_5] [(unsigned char)17] [i_7] [i_6] [i_5] = ((/* implicit */short) (signed char)112);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) ((unsigned int) 8439094482482047026ULL));
}
