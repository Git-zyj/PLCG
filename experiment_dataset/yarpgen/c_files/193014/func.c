/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193014
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
    var_13 = ((unsigned short) ((((/* implicit */_Bool) (unsigned short)47301)) ? (((/* implicit */unsigned long long int) var_8)) : (max((((/* implicit */unsigned long long int) (unsigned short)1789)), (18446744073709551604ULL)))));
    var_14 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0 - 3])))) : (18446744073709551595ULL))) == (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)47554)) == (((/* implicit */int) (unsigned char)10))))), (min((11ULL), (arr_0 [i_0] [i_0])))))));
        var_16 = ((/* implicit */unsigned short) ((((unsigned long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)28589))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((4062724538857024446ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63748)))))))));
        var_17 &= ((/* implicit */long long int) arr_1 [i_0 + 1]);
        arr_2 [i_0 - 3] = ((/* implicit */unsigned char) (short)-11538);
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (short)11520);
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)25))))) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned long long int) 131071U)) & (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 0U)))))) : (arr_0 [i_4] [i_4])));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned long long int) (unsigned short)9409)) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1435089638530079040ULL)) || (((/* implicit */_Bool) var_5))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1788))) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63758)) ? (4062724538857024455ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56126))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) (unsigned short)8191)))))), ((~(((((/* implicit */_Bool) 3030524528U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36564)))))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 + 2] [i_1] [i_1] [i_1]))) ^ (0LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3030524547U), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28966))))) : (((/* implicit */int) ((unsigned char) 1231349938187339944ULL)))))) ? (((/* implicit */int) (unsigned short)3269)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_9))))))))));
    var_23 = 3030524528U;
}
