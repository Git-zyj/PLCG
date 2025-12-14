/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25610
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2])) ? (((/* implicit */int) (short)-27214)) : (((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))))) : (min((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) 1073741823LL)) : (3346764212003025012ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) -1278058806)) ? (15099979861706526603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16268))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(13714069617368904745ULL)))) ? (((((/* implicit */_Bool) 13714069617368904738ULL)) ? (1725183652452862255LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3 - 3] [i_3 - 3])))))))))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (+(((((arr_5 [i_4] [i_2] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) var_7)) : ((-(arr_4 [i_1]))))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_8), ((short)27228))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_13);
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)65535)), (var_4)))) % (((15099979861706526603ULL) - (((/* implicit */unsigned long long int) 1371858487U)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
}
