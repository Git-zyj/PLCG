/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219416
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
    var_19 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 &= ((/* implicit */_Bool) -3741594002022960130LL);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */short) (+((~(((/* implicit */int) var_6))))));
                        var_22 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32757)) ? (1692579204) : (((/* implicit */int) var_14))))) ? (((12096996704604773609ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10522))))) : (((unsigned long long int) var_3)))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) ((short) min((((/* implicit */long long int) var_5)), (var_13))))))))));
                        arr_11 [i_2] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)220))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)40761)), (((625159056U) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) ? ((~((~(((/* implicit */int) (unsigned char)36)))))) : (((/* implicit */int) ((unsigned short) (short)32767)))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 17; i_4 += 2) 
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (_Bool)1))));
                        arr_14 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)14985)) * (((/* implicit */int) (unsigned char)156)))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23571)))))));
                    }
                    arr_15 [i_1] [i_2] = ((/* implicit */unsigned char) ((short) ((_Bool) ((unsigned short) var_1))));
                }
                for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 2) /* same iter space */
                {
                    var_26 -= ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (2538127532U)))));
                    var_27 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)41963)))) + (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) var_13))), (((unsigned short) (unsigned char)229)))))));
                }
                var_28 = ((/* implicit */short) (-((~(13209054564412850255ULL)))));
            }
        } 
    } 
}
