/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28017
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((((/* implicit */_Bool) max((max((var_6), (((/* implicit */unsigned int) arr_4 [i_0] [i_1])))), (((/* implicit */unsigned int) arr_3 [i_1] [i_0]))))) ? (((((/* implicit */unsigned long long int) max((arr_1 [i_1]), (((/* implicit */unsigned int) var_12))))) & (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (arr_1 [i_0])))))));
                var_14 = ((/* implicit */long long int) ((-711885260) * (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) max((((/* implicit */int) var_0)), ((+(1978062034)))));
                            var_16 = ((/* implicit */signed char) arr_1 [i_1]);
                            arr_9 [i_1] [i_3] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_8 [i_3 + 2] [i_2 + 2] [i_3 - 2] [i_2 + 2] [i_2 + 2])) ? (((((/* implicit */_Bool) 536870656LL)) ? (536870667LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_2 + 1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2 - 2] [i_3 + 1])) ? (8353815951235267093LL) : (((/* implicit */long long int) var_12)))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_7 [i_0]))) & (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2458926876U))))))));
                            arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870670LL)) ? (((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 3] [i_3 - 1] [i_2 + 2] [i_2 - 2])) : (((/* implicit */int) arr_3 [i_3 + 3] [i_3 - 2]))))) ? (((/* implicit */int) ((unsigned short) 3150843208U))) : ((+(((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 2] [i_3 + 1] [i_2 - 1] [i_2 - 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 536870640LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)44))) : (-4456358640370324963LL))), (((((/* implicit */_Bool) 1836040406U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)38596)) : (((/* implicit */int) (unsigned char)179))))) : (min((((/* implicit */long long int) 711885260)), (53778674924724766LL)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((var_8) & ((+(var_12)))));
                    var_19 = ((/* implicit */unsigned int) ((signed char) ((_Bool) (unsigned short)17)));
                }
                /* LoopNest 3 */
                for (long long int i_7 = 4; i_7 < 10; i_7 += 3) 
                {
                    for (long long int i_8 = 3; i_8 < 9; i_8 += 3) 
                    {
                        for (int i_9 = 3; i_9 < 7; i_9 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((long long int) min((arr_20 [i_8 - 1] [i_8 + 2] [i_8 + 2] [i_8 - 3]), (arr_20 [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_8 - 3]))));
                                var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1099658125)) * (536870656LL)))) ? (max((((/* implicit */long long int) var_8)), (-536870656LL))) : (arr_0 [i_8 + 2])))), ((+(18446744073709551597ULL)))));
                                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (-(min((((/* implicit */long long int) 4294967266U)), (9223372036854775807LL)))));
    var_24 = ((/* implicit */unsigned short) 1879048192);
}
