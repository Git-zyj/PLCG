/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43789
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_8)))) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_9)) - (43277))))) : ((+(((/* implicit */int) var_9))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_12 [i_0] [i_1 - 1] [i_2 + 2] = ((/* implicit */short) ((_Bool) (((_Bool)1) ? (((/* implicit */int) max((var_0), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) arr_0 [i_0] [i_2 + 2])))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        var_11 ^= ((/* implicit */signed char) ((_Bool) (-(((int) -1199837458)))));
                        var_12 = ((/* implicit */unsigned int) -2147483645);
                        var_13 &= ((/* implicit */unsigned char) var_6);
                        var_14 = ((/* implicit */signed char) (+((~(((arr_10 [i_1] [16LL]) ? (255U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                    }
                    for (int i_4 = 2; i_4 < 20; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) var_8)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_2 - 1] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) : (((unsigned int) var_7)))))))));
                        arr_19 [i_0] [i_1 - 2] [i_1 - 1] [i_2] [i_4 - 1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)170))))) ? ((-(arr_16 [i_4 - 1] [i_1 - 2] [i_1] [i_0]))) : (max((arr_16 [i_2] [i_1 + 1] [i_1] [9ULL]), (((/* implicit */int) var_5))))));
                        var_16 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483645)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */int) ((_Bool) 4294967295U))) : (((/* implicit */int) max(((_Bool)1), (var_8)))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_22 [i_0] [i_1 - 2] [i_2] [i_5] [i_2] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((247U), (((/* implicit */unsigned int) (unsigned char)193)))), (((/* implicit */unsigned int) (unsigned short)35985)))))));
                        arr_23 [(unsigned char)10] [i_1] [i_1 + 1] [i_2 + 2] [i_2 + 2] [(_Bool)1] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_21 [i_0 + 1] [i_1] [i_1 + 1] [i_2 - 1])))));
                        arr_24 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        arr_25 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) 68719345664LL))) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) max((var_5), (var_5))))))) == (min((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) arr_13 [i_0 + 1] [i_1] [i_1] [i_5] [i_1]))))), (-9012037725733501399LL)))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned short) var_2)))));
}
