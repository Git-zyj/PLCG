/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228770
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */long long int) var_6)) / (var_12))) : (((/* implicit */long long int) (((_Bool)1) ? (4055303165U) : (4026531840U))))))) ? (((unsigned long long int) ((unsigned int) var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (2897657198U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249)))))) ? (((/* implicit */int) (short)15015)) : (((/* implicit */int) (_Bool)1)))))));
    var_16 = max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((268435439U) >= (((/* implicit */unsigned int) (-(var_9))))))));
    var_17 = ((/* implicit */unsigned int) min((var_17), (var_6)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [11LL])) : (((/* implicit */int) var_1))))) && (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3))))))) < (((/* implicit */int) (_Bool)1)));
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(1935667611263166749ULL)));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) -776400660)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)1023)))))));
                arr_10 [i_1] = min(((short)3), (((/* implicit */short) (unsigned char)15)));
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    for (long long int i_4 = 4; i_4 < 17; i_4 += 2) 
                    {
                        {
                            arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) max((max((((/* implicit */unsigned int) var_8)), (2756668634U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (short)0))))))));
                            var_20 = ((/* implicit */short) max((((((((/* implicit */_Bool) 10625054771750371615ULL)) ? (((/* implicit */int) (short)1549)) : (((/* implicit */int) (short)21395)))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-8)))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 - 1]))) < (var_0))))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (unsigned short)39840)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))) : (-4611686018427387904LL))))))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (signed char)15))) * (((/* implicit */int) (short)5))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
