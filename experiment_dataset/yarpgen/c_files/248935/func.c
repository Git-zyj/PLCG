/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248935
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
    var_18 = ((/* implicit */int) min((max(((-(2624927093340845185ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_16)) ? (var_3) : (var_15))))))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))))), (var_6))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-73)), (393959670U))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            var_20 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-17543)) * (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) var_10))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((3225374261U) << ((((~(205329216U))) - (4089638056U)))));
                            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            arr_14 [i_0] [i_0] [i_0] [8] [i_0] &= ((/* implicit */int) var_12);
                        }
                        var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */int) var_10))));
                    }
                } 
            } 
        }
        var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (63488)))) ? (var_12) : (max((((/* implicit */unsigned int) (short)-1)), (2574447385U)))))));
        /* LoopSeq 2 */
        for (int i_5 = 2; i_5 < 15; i_5 += 2) 
        {
            arr_19 [i_0] [i_0] [(unsigned char)4] = min((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) 1720519918U)) || (((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16))))))), (((3513259598U) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))))));
            var_25 |= ((4089638079U) | (((/* implicit */unsigned int) 705058548)));
        }
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            var_26 = ((/* implicit */int) (~(min((((/* implicit */unsigned int) 1112154360)), (var_7)))));
            arr_22 [i_0] [i_0] [i_0] = var_3;
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (var_4)))) ? (var_11) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 205329242U)))))))) ? (min((var_6), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6))))));
        }
        arr_23 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_14), (((/* implicit */int) (short)-1)))))));
    }
    var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_15)), (((((/* implicit */_Bool) 396318248U)) ? (2574447378U) : (((/* implicit */unsigned int) var_15)))))))));
}
