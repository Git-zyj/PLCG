/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207681
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_18 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) (unsigned short)25045))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (signed char)-65))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-121)), ((unsigned char)249))))))));
                        arr_9 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((var_8) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) << ((((~(((/* implicit */int) var_8)))) + (36))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220)))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)52))))) ? ((-(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)252)) >> (((((/* implicit */int) arr_3 [i_2] [i_2])) - (54508)))))) ? (((/* implicit */int) ((unsigned short) (short)7))) : (((/* implicit */int) arr_8 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
                    }
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_12)))), ((~(((/* implicit */int) (unsigned short)49392))))))) ? (min((((unsigned long long int) var_11)), (var_1))) : ((~(((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32372))) : (18046757481192207199ULL)))))));
                    var_21 = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */unsigned long long int) var_2)) : (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)-32765))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) (signed char)-7);
    var_23 = ((/* implicit */unsigned char) var_4);
    var_24 = var_4;
}
