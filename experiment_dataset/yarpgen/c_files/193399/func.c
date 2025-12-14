/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193399
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
    var_20 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_21 &= ((/* implicit */_Bool) (((_Bool)1) ? (6453832U) : (6453832U)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 2; i_4 < 15; i_4 += 2) 
                            {
                                var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) -1581278200)), (max((16873389U), (((/* implicit */unsigned int) (unsigned char)195))))));
                                var_23 = ((/* implicit */unsigned long long int) (signed char)-57);
                                var_24 = ((/* implicit */unsigned long long int) var_6);
                                var_25 = ((/* implicit */int) min((max((((long long int) (unsigned short)20541)), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30468)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)32742))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_4 - 1] [i_0])))))));
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)243))));
                            }
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))) : (6453816U)));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_2])) / (((/* implicit */int) arr_2 [i_1] [i_2]))));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_28 = ((((/* implicit */int) (signed char)-57)) % (((/* implicit */int) (signed char)57)));
                                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (4288513464U)))))));
                                var_30 = ((signed char) (unsigned short)35068);
                                var_31 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_3]);
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                var_32 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)35068)), (0U)));
                                arr_21 [i_7] [i_1] = ((((/* implicit */_Bool) min((arr_19 [i_0] [i_1] [i_2] [i_3] [i_7]), (((/* implicit */unsigned long long int) (unsigned char)198))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)29341)), (var_12)))) : (4652292290125298618ULL));
                            }
                            var_33 -= 4652292290125298618ULL;
                        }
                    } 
                } 
                var_34 *= ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned short)32)) : (((/* implicit */int) (unsigned short)32))))), (((((/* implicit */_Bool) (unsigned short)35068)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))) : (4294967295U)))));
                var_35 |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)61828)) ? ((+(((/* implicit */int) (signed char)77)))) : (min((268435456), (((/* implicit */int) (short)29341))))))));
                var_36 = ((/* implicit */_Bool) (signed char)-78);
            }
        } 
    } 
    var_37 = ((/* implicit */long long int) var_8);
}
