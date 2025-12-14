/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202818
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
    var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-14402)) ? (((/* implicit */int) (unsigned short)6)) : (((((/* implicit */int) (unsigned short)1)) + (((/* implicit */int) (unsigned char)235))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_3 - 4] [(unsigned char)14] = ((/* implicit */long long int) (short)-14390);
                        var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -544292828)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (unsigned char)207))))) ? ((-(((/* implicit */int) (short)24649)))) : (((/* implicit */int) (short)8192))))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)52))))) < ((-(((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (_Bool)0)))))))))));
                        arr_11 [i_0] [6U] &= ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (9119653368537818754ULL)))))) ? (1724615729547814603ULL) : ((-(((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16128))) : (18446744073709551614ULL)))))));
                    }
                    arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) 1633168028U);
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */int) ((((/* implicit */int) (short)-6778)) > (((/* implicit */int) (_Bool)1))))))) + (((/* implicit */int) (unsigned char)209))));
}
