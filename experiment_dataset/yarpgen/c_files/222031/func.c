/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222031
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_1)) ? (7556144098472572387ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                    arr_6 [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((var_14) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_12)) * (((/* implicit */int) var_14))))));
                    var_19 &= ((/* implicit */unsigned long long int) var_10);
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_12)), (max((((/* implicit */unsigned long long int) var_7)), (7556144098472572404ULL))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [i_4] [i_4] [i_4] [i_6] [i_7] = ((((7556144098472572421ULL) ^ (467714159373891202ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))));
                                arr_26 [i_3] [i_4] [i_6] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) 467714159373891220ULL)) ? (7556144098472572387ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (3455729595600730166ULL))))) - (7556144098472572357ULL)))));
                                var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) ((int) (unsigned short)30032))) ? ((~(467714159373891220ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6039926595205568349ULL)))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))))));
                                arr_27 [i_4] [i_5] [i_4] [i_7] = ((short) min((((/* implicit */unsigned short) ((_Bool) var_15))), (var_13)));
                                arr_28 [i_3] [i_4] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_17))))) == (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_9))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_29 [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
        arr_30 [i_3] = ((_Bool) (+(((/* implicit */int) ((3172249311776203423ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))));
    }
}
