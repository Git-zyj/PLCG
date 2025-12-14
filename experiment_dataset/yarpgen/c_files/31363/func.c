/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31363
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
    var_18 = ((/* implicit */unsigned short) ((signed char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2865))) - (4348059159538084712ULL)))));
    var_19 = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned int) (unsigned short)65512)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))) | (1180377590U))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) == (((/* implicit */int) (short)-18276))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (unsigned short)992))));
        arr_3 [i_0] = ((unsigned short) ((((/* implicit */int) min(((short)23718), (((/* implicit */short) arr_0 [i_0] [(short)9]))))) + (((/* implicit */int) max((arr_1 [i_0]), ((short)963))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (unsigned short)40484)))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */int) max((var_22), (max((((/* implicit */int) ((short) ((unsigned short) (unsigned char)255)))), (((((((/* implicit */int) max((arr_7 [i_1 - 2] [i_0] [(short)3]), ((signed char)-43)))) + (2147483647))) >> (((((/* implicit */int) ((signed char) (unsigned short)3269))) + (87)))))))));
                        arr_12 [(unsigned short)6] [(unsigned short)13] [i_1] [i_3] [i_3] = ((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (unsigned char)197)));
                    }
                } 
            } 
            arr_13 [i_1] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) (_Bool)1)) > (-636048484))));
        }
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53))) : (((unsigned long long int) -932696630)))))));
    }
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) max(((-(((arr_14 [i_4]) ? (((/* implicit */int) (short)-23741)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((short) (unsigned short)25052)))));
        var_25 = min(((unsigned short)62267), (((/* implicit */unsigned short) (short)29863)));
        var_26 = ((/* implicit */int) (unsigned short)61720);
    }
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_15 [(unsigned char)6])))))) >> (((((/* implicit */int) ((unsigned char) max((-636048484), (((/* implicit */int) (signed char)112)))))) - (109))))))));
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((max(((unsigned short)62272), (((/* implicit */unsigned short) (short)-23719)))), (((/* implicit */unsigned short) (short)23718))))))))));
    }
}
