/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43654
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)119))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-27636)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))))) ? ((-(((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_11))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (var_14))) << (((((((/* implicit */int) (signed char)-120)) | (((/* implicit */int) var_6)))) + (50)))))));
    var_17 = ((/* implicit */unsigned char) (signed char)119);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((long long int) var_4));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) var_12)) != (((/* implicit */int) ((short) (unsigned short)61189))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        var_20 -= ((signed char) (_Bool)0);
                        arr_10 [i_1] [i_3] = ((/* implicit */signed char) var_2);
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((signed char) (signed char)-120)))));
                    }
                    var_21 = ((/* implicit */_Bool) ((unsigned char) ((_Bool) (signed char)119)));
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_22 = ((/* implicit */signed char) var_13);
        var_23 = ((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (_Bool)0)))))))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_7))))) >= (((int) var_6)))) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))))))));
        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-120)) || (var_7))) ? (((/* implicit */int) (!(var_2)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))));
        arr_14 [i_4] = ((/* implicit */short) var_4);
    }
    var_26 |= ((/* implicit */short) (+(((long long int) 6982599881270820998LL))));
    var_27 = ((/* implicit */long long int) ((_Bool) -143407904715278703LL));
}
