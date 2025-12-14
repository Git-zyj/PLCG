/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52113
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
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) 3437312750U)) ? (3437312750U) : (857654553U)))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((857654543U) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (14046090143340231008ULL) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned int) var_4)), (max((3437312753U), (((/* implicit */unsigned int) var_4))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_16 += (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 3] [i_0 + 3]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) (unsigned char)202);
                                var_18 += ((/* implicit */short) 3437312750U);
                                arr_12 [i_4] [i_2] [(_Bool)1] [0ULL] [i_1] [i_2] [i_0] = ((/* implicit */short) var_1);
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (18446744073709551615ULL) : (17602476923969724042ULL))) : (min((var_11), (((/* implicit */unsigned long long int) (short)-5)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-25271)), ((unsigned short)33216))))) | (max((9223372036854775806ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) (short)7535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1364050641U))))), ((~(3437312758U))))))));
                                arr_22 [i_5] [(short)2] [i_5] = ((/* implicit */unsigned short) ((10419439425529680824ULL) * ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) : (17602476923969724074ULL)))));
                            }
                        } 
                    } 
                    var_21 = ((min((((3868840772610067451ULL) * (844267149739827591ULL))), (max((var_1), (((/* implicit */unsigned long long int) (unsigned short)0)))))) * (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (min((844267149739827578ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 857654543U)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) arr_19 [i_0 - 2] [i_0 + 3] [i_1 - 4] [i_1 - 4] [i_8])) : ((+(14577903301099484164ULL))))))));
                    var_23 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)190))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_8] [14] [i_1])))));
                }
                var_25 *= ((/* implicit */unsigned int) ((_Bool) min((var_0), ((_Bool)1))));
                arr_27 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6254112484037472296ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((var_11) == (14577903301099484165ULL)))), (max((((/* implicit */unsigned short) (unsigned char)15)), ((unsigned short)29678))))))) : (14577903301099484140ULL));
            }
        } 
    } 
}
