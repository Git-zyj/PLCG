/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5169
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)68)))))));
                var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)75)), (arr_2 [i_0] [i_1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_2] [i_2])), (((long long int) arr_9 [i_3] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-46)), (-356383462)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))))) : ((+(min((((/* implicit */unsigned int) (signed char)27)), (arr_7 [i_3] [i_3])))))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((/* implicit */long long int) min(((unsigned short)8925), (((/* implicit */unsigned short) arr_1 [i_4 - 1] [i_4 - 1]))))), (min((arr_2 [i_4 - 1] [i_4]), (((/* implicit */long long int) arr_7 [i_2] [i_2])))))))));
                    var_21 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)8943)), (arr_7 [i_3] [7ULL])))) ? (((((/* implicit */unsigned long long int) var_7)) ^ (13885403983505124768ULL))) : (((/* implicit */unsigned long long int) ((0) >> (((3490288784U) - (3490288754U)))))))));
                    var_22 *= ((/* implicit */unsigned int) ((unsigned long long int) min((arr_0 [i_2] [i_2]), (arr_0 [i_3] [i_4 - 1]))));
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) ((unsigned int) 804678527U));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (3490288769U)));
                    var_25 = ((/* implicit */_Bool) (-((~(-6522654735209019596LL)))));
                    var_26 |= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) var_4))))) + (arr_8 [i_2] [i_3] [i_5]));
                }
                for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_13 [i_6 + 1] [i_6 + 1] [i_6])), (((signed char) 804678526U))))) ? (((/* implicit */unsigned long long int) var_16)) : (((((((/* implicit */_Bool) 784553448422435926LL)) ? (((/* implicit */unsigned long long int) var_13)) : (11140302486929136430ULL))) % (((/* implicit */unsigned long long int) var_8))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        for (signed char i_8 = 1; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (signed char)-47)), ((+(arr_4 [i_2] [i_2] [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6 + 1] [i_8 + 1])) ? (arr_12 [i_2] [1LL] [i_6 + 2] [i_8 + 2]) : (arr_12 [i_2] [10LL] [i_6 + 1] [i_8 + 2]))))));
                                arr_24 [i_3] = ((/* implicit */signed char) 6522654735209019596LL);
                                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((signed char) max(((-(((/* implicit */int) arr_13 [i_7] [i_3] [i_2])))), (max((((/* implicit */int) (signed char)45)), (1868159823)))))))));
                            }
                        } 
                    } 
                    arr_25 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_0);
                }
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        {
                            arr_32 [i_3] = ((/* implicit */_Bool) arr_3 [i_2] [16LL] [16LL]);
                            var_30 = ((/* implicit */unsigned short) 1779342846);
                        }
                    } 
                } 
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1868159851)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2] [i_3])))))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
            }
        } 
    } 
    var_32 = ((/* implicit */int) 18446744073709551594ULL);
}
