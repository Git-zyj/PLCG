/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210395
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) + (30U)))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))), (((13704410234055119124ULL) - (((/* implicit */unsigned long long int) 29U)))))) : (((/* implicit */unsigned long long int) (+((~(939657229U))))))));
        var_15 = ((/* implicit */unsigned char) min(((+(1187712419))), ((-(((/* implicit */int) (signed char)63))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_16 &= ((/* implicit */unsigned int) 2147483647);
        var_17 &= ((/* implicit */short) (((+(min((16822329204946591093ULL), (12461755301763107600ULL))))) & ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_2)), (var_6))))) : (arr_1 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (unsigned short i_4 = 3; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)74)), (4294967295U)));
                        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_6)), (18389880703997211259ULL))), (((17776038795385004586ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) 0U))))))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-30657)) + (2147483647))) << (0ULL))))));
}
