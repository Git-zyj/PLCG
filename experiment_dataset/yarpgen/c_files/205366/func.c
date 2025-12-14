/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205366
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
    var_17 = ((/* implicit */_Bool) var_8);
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-111))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((short) var_11))))) == (((/* implicit */int) min((min((var_14), (((/* implicit */unsigned short) (signed char)6)))), (var_12))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [12] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) ((signed char) var_3))))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15)))))), (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)111)), (33521664)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) min((var_16), (var_11)))))))))));
                var_20 = ((/* implicit */long long int) max((var_20), (min((-8954160605052624038LL), (((/* implicit */long long int) 33521667))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1 - 1] [i_2])) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)26381)) ? (33521664) : (((/* implicit */int) (signed char)-127))))))) : (-3179854490848946046LL))))));
                            arr_10 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 8954160605052624038LL)) ? (((/* implicit */int) (short)17168)) : (((((/* implicit */_Bool) 2864940054972112320LL)) ? (((/* implicit */int) (short)-23892)) : (((/* implicit */int) (unsigned short)24063))))));
                            arr_11 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1]))) / (682200072469723232LL))))) < (((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (-33521664)))) ? (max((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0] [(_Bool)1])), (8954160605052624038LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-6295)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
