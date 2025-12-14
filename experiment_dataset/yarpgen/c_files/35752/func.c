/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35752
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)93));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */signed char) var_8);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 - 1])) >> (((((/* implicit */int) arr_1 [i_0 - 1])) - (171)))));
        var_16 = ((/* implicit */int) arr_2 [i_0]);
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) * (((((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_13))))) >> (((/* implicit */int) (_Bool)1))))));
        var_17 = ((/* implicit */unsigned short) ((min((max((((/* implicit */unsigned int) arr_4 [i_1] [i_1])), (8U))), (((/* implicit */unsigned int) arr_4 [i_1] [i_1])))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (signed char)32)))) >= (((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))))))));
        arr_8 [(unsigned char)14] [i_1] = ((/* implicit */signed char) var_5);
    }
    var_18 += ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_19 += ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (2921656055U)))) < (((/* implicit */int) (signed char)10)))))));
                arr_14 [i_3] [i_3] = ((/* implicit */signed char) arr_11 [i_2] [i_3]);
                /* LoopNest 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned char) (_Bool)1);
                                arr_25 [(_Bool)1] [(_Bool)1] [i_4] [i_5 - 1] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                                var_21 += var_11;
                                arr_26 [i_3] [i_5] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned int) min((min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)128))), (((/* implicit */unsigned char) var_8))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))), (((arr_24 [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_3] [i_5 + 4] [i_6])))))))));
                                arr_27 [i_3] = ((/* implicit */int) var_8);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
