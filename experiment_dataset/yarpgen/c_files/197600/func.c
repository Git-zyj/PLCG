/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197600
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
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) ((7385733876020999351ULL) / (((/* implicit */unsigned long long int) 390348242U))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-(14544215427889527622ULL))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0 + 2]))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) - (arr_4 [i_0 + 3])))))))));
                    var_24 = arr_3 [i_0];
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned char) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (arr_2 [i_3] [i_2]))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_8 [i_4 + 1] [i_0] [i_4 - 1] [i_0 + 1] [i_4 - 1] [i_2]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (270944374) : (-270944374))))))) ? (max((((/* implicit */unsigned long long int) -270944373)), (11544161465595027359ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_1]))));
                                var_27 = ((/* implicit */_Bool) ((((_Bool) arr_5 [i_0 + 4] [i_1] [i_2] [i_0 + 4])) ? (((-270944374) * (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0] [i_0 + 2] [i_0]))));
                                var_28 = ((/* implicit */unsigned int) ((270944359) << (((270944387) - (270944385)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((4125262953U) >> (((-270944357) + (270944360)))))) ? (((((/* implicit */_Bool) (short)-29806)) ? (((/* implicit */int) (signed char)23)) : (-674907896))) : (max((arr_7 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */int) (_Bool)1))))));
                    var_31 = ((/* implicit */short) ((953310013) / (-270944358)));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) ((short) ((unsigned short) ((unsigned short) 270944372))));
                                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (unsigned char)126)) ? (-270944373) : (((/* implicit */int) var_6))))))) || (((/* implicit */_Bool) min(((unsigned char)76), (((/* implicit */unsigned char) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_10 = 3; i_10 < 15; i_10 += 3) 
                {
                    var_34 = ((/* implicit */unsigned char) max((arr_26 [i_5 + 1] [i_10]), (((/* implicit */unsigned int) (short)17009))));
                    var_35 = ((((/* implicit */int) (signed char)25)) > (((/* implicit */int) (unsigned char)0)));
                    var_36 = ((/* implicit */signed char) ((int) max(((-(((/* implicit */int) var_13)))), (((/* implicit */int) ((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                }
                var_37 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) -270944373))) / (270944356)));
                var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((-270944348) / (270944329))))));
                var_39 = ((unsigned char) ((unsigned short) -8245915902386774947LL));
            }
        } 
    } 
}
